/*
 * XREFs of IopFreeIrp @ 0x140106E60
 * Callers:
 *     IopCompleteRequest @ 0x1400F9010 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400FA0B0 (IopfCompleteRequest.c)
 *     IoFreeIrp @ 0x140106E30 (IoFreeIrp.c)
 *     IovFreeIrpPrivate @ 0x140811FCC (IovFreeIrpPrivate.c)
 * Callees:
 *     IopFreeIrpExtension @ 0x1400A4884 (IopFreeIrpExtension.c)
 *     ExReturnPoolQuota @ 0x1400BA618 (ExReturnPoolQuota.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     IopFreeReserveIrp @ 0x1402326E8 (IopFreeReserveIrp.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeIrp(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  char v5; // al
  __int64 v6; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  char v8; // al
  __int16 v9; // r8
  unsigned __int16 v10; // r8
  _GENERAL_LOOKASIDE *P; // rdi
  char v12; // al

  v3 = 0LL;
  if ( *(_WORD *)BugCheckParameter1 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter1, 0x2555uLL, 0LL, 0LL);
  v5 = *(_BYTE *)(BugCheckParameter1 + 71);
  *(_WORD *)BugCheckParameter1 = 0;
  if ( (v5 & 0x40) != 0 )
  {
    IopFreeIrpExtension(BugCheckParameter1, -1, 1);
    v5 = *(_BYTE *)(BugCheckParameter1 + 71);
  }
  if ( (v5 & 0x21) == 0x21 )
  {
    IopFreeReserveIrp(BugCheckParameter1, a2, a3);
  }
  else
  {
    v6 = *(unsigned __int16 *)(BugCheckParameter1 + 4);
    if ( (unsigned int)v6 >= (unsigned int)KeNumberProcessors_0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
    }
    else
    {
      _mm_lfence();
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v6];
    }
    v8 = *(_BYTE *)(BugCheckParameter1 + 71);
    if ( (v8 & 8) != 0 )
    {
      *(_BYTE *)(BugCheckParameter1 + 71) = v8 ^ 8;
      _InterlockedIncrement(&CurrentPrcb->LookasideIrpFloat);
      v8 = *(_BYTE *)(BugCheckParameter1 + 71);
    }
    if ( (v8 & 4) != 0
      && ((IopIrpStackProfilerFlags & 3) == 0
       || (v9 = *(_WORD *)(BugCheckParameter1 + 2), v9 == 72 * (char)IopLargeIrpStackLocations + 208)
       || v9 == 72 * (char)IopMediumIrpStackLocations + 208
       || v9 == 280) )
    {
      v10 = *(_WORD *)(BugCheckParameter1 + 2);
      if ( v10 < (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
        LOBYTE(v3) = v10 >= (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208);
      else
        v3 = 2LL;
      *(_QWORD *)(BugCheckParameter1 + 56) = v10;
      P = CurrentPrcb->PPLookasideList[v3].P;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) < P->Depth
        || (++P->FreeMisses,
            P = CurrentPrcb->PPLookasideList[v3].L,
            ++P->TotalFrees,
            LOWORD(P->ListHead.Alignment) < P->Depth) )
      {
        v12 = *(_BYTE *)(BugCheckParameter1 + 71);
        if ( (v12 & 1) != 0 )
        {
          *(_BYTE *)(BugCheckParameter1 + 71) = v12 ^ 1;
          ExReturnPoolQuota(BugCheckParameter1);
        }
        RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)BugCheckParameter1);
      }
      else
      {
        ++P->FreeMisses;
        ExFreePoolWithTag((PVOID)BugCheckParameter1, 0);
      }
    }
    else
    {
      ExFreePoolWithTag((PVOID)BugCheckParameter1, 0);
    }
  }
}
