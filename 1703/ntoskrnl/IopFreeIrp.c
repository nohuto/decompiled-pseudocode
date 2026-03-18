/*
 * XREFs of IopFreeIrp @ 0x1400F11C0
 * Callers:
 *     IopCompleteRequest @ 0x1400DDEE0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400DEE70 (IopfCompleteRequest.c)
 *     IoFreeIrp @ 0x1400F1190 (IoFreeIrp.c)
 *     IovFreeIrpPrivate @ 0x140763334 (IovFreeIrpPrivate.c)
 * Callees:
 *     ExReturnPoolQuota @ 0x140024F70 (ExReturnPoolQuota.c)
 *     IopFreeIrpExtension @ 0x14003AE54 (IopFreeIrpExtension.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     IopFreeReserveIrp @ 0x1401EFAB8 (IopFreeReserveIrp.c)
 */

void __fastcall IopFreeIrp(ULONG_PTR BugCheckParameter1)
{
  int v1; // edi
  bool v3; // zf
  __int64 v4; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  char v6; // al
  __int16 v7; // r8
  unsigned __int16 v8; // r8
  __int64 v9; // rcx
  _GENERAL_LOOKASIDE *P; // rdi
  char v11; // al

  v1 = 0;
  if ( *(_WORD *)BugCheckParameter1 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter1, 0x24D9uLL, 0LL, 0LL);
  v3 = (*(_BYTE *)(BugCheckParameter1 + 71) & 0x40) == 0;
  *(_WORD *)BugCheckParameter1 = 0;
  if ( !v3 )
    IopFreeIrpExtension(BugCheckParameter1, -1, 1);
  if ( (*(_BYTE *)(BugCheckParameter1 + 71) & 0x21) == 0x21 )
  {
    IopFreeReserveIrp(BugCheckParameter1);
  }
  else
  {
    v4 = *(unsigned __int16 *)(BugCheckParameter1 + 4);
    if ( (unsigned int)v4 >= (unsigned int)KeNumberProcessors_0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
    }
    else
    {
      _mm_lfence();
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v4];
    }
    v6 = *(_BYTE *)(BugCheckParameter1 + 71);
    if ( (v6 & 8) != 0 )
    {
      *(_BYTE *)(BugCheckParameter1 + 71) = v6 ^ 8;
      _InterlockedIncrement(&CurrentPrcb->LookasideIrpFloat);
    }
    if ( (*(_BYTE *)(BugCheckParameter1 + 71) & 4) == 0 )
      goto LABEL_22;
    if ( (IopIrpStackProfilerFlags & 3) != 0 )
    {
      v7 = *(_WORD *)(BugCheckParameter1 + 2);
      if ( v7 != 72 * (char)IopLargeIrpStackLocations + 208
        && v7 != 72 * (char)IopMediumIrpStackLocations + 208
        && v7 != 280 )
      {
        goto LABEL_22;
      }
    }
    v8 = *(_WORD *)(BugCheckParameter1 + 2);
    if ( v8 < (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
      LOBYTE(v1) = v8 >= (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208);
    else
      v1 = 2;
    v9 = v1;
    *(_QWORD *)(BugCheckParameter1 + 56) = v8;
    P = CurrentPrcb->PPLookasideList[v1].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) >= P->Depth )
    {
      ++P->FreeMisses;
      P = CurrentPrcb->PPLookasideList[v9].L;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) >= P->Depth )
      {
        ++P->FreeMisses;
LABEL_22:
        ExFreePoolWithTag((PVOID)BugCheckParameter1, 0);
        return;
      }
    }
    v11 = *(_BYTE *)(BugCheckParameter1 + 71);
    if ( (v11 & 1) != 0 )
    {
      *(_BYTE *)(BugCheckParameter1 + 71) = v11 ^ 1;
      ExReturnPoolQuota(BugCheckParameter1);
    }
    RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)BugCheckParameter1);
  }
}
