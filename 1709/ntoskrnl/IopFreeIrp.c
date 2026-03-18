/*
 * XREFs of IopFreeIrp @ 0x1400853D0
 * Callers:
 *     IopfCompleteRequest @ 0x1400713E0 (IopfCompleteRequest.c)
 *     IoFreeIrp @ 0x1400853A0 (IoFreeIrp.c)
 *     IovFreeIrpPrivate @ 0x1407A5000 (IovFreeIrpPrivate.c)
 * Callees:
 *     ExReturnPoolQuota @ 0x1401166AC (ExReturnPoolQuota.c)
 *     IopFreeIrpExtension @ 0x140117B28 (IopFreeIrpExtension.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     IopFreeReserveIrp @ 0x1401F51B4 (IopFreeReserveIrp.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeIrp(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  bool v5; // zf
  __int64 v6; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  char v8; // al
  __int64 v9; // r8
  __int16 v10; // dx
  __int64 v11; // rdx
  _GENERAL_LOOKASIDE *P; // rdi
  char v13; // al

  v3 = 0LL;
  if ( *(_WORD *)BugCheckParameter1 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter1, 0x2566uLL, 0LL, 0LL);
  v5 = (*(_BYTE *)(BugCheckParameter1 + 71) & 0x40) == 0;
  *(_WORD *)BugCheckParameter1 = 0;
  if ( !v5 )
  {
    LOBYTE(a3) = 1;
    IopFreeIrpExtension(BugCheckParameter1, 0xFFFFFFFFLL, a3);
  }
  if ( (*(_BYTE *)(BugCheckParameter1 + 71) & 0x21) == 0x21 )
  {
    IopFreeReserveIrp(BugCheckParameter1);
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
    }
    if ( (*(_BYTE *)(BugCheckParameter1 + 71) & 4) != 0
      && ((v9 = (unsigned __int8)IopLargeIrpStackLocations, (IopIrpStackProfilerFlags & 3) == 0)
       || (v10 = *(_WORD *)(BugCheckParameter1 + 2), v10 == 72 * (char)IopLargeIrpStackLocations + 208)
       || v10 == 72 * (char)IopMediumIrpStackLocations + 208
       || v10 == 280) )
    {
      v11 = *(unsigned __int16 *)(BugCheckParameter1 + 2);
      if ( (unsigned __int16)v11 < (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
        LOBYTE(v3) = (unsigned __int16)v11 >= (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208);
      else
        v3 = 2LL;
      *(_QWORD *)(BugCheckParameter1 + 56) = (unsigned __int16)v11;
      P = CurrentPrcb->PPLookasideList[v3].P;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) < P->Depth
        || (++P->FreeMisses,
            P = CurrentPrcb->PPLookasideList[v3].L,
            ++P->TotalFrees,
            LOWORD(P->ListHead.Alignment) < P->Depth) )
      {
        v13 = *(_BYTE *)(BugCheckParameter1 + 71);
        if ( (v13 & 1) != 0 )
        {
          *(_BYTE *)(BugCheckParameter1 + 71) = v13 ^ 1;
          ExReturnPoolQuota(BugCheckParameter1, v11, v9, CurrentPrcb);
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
