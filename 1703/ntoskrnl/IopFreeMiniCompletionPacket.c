/*
 * XREFs of IopFreeMiniCompletionPacket @ 0x140527A70
 * Callers:
 *     IoRemoveIoCompletion @ 0x1400E9520 (IoRemoveIoCompletion.c)
 *     IopFreeCompletionListPackets @ 0x140429154 (IopFreeCompletionListPackets.c)
 *     IoFreeMiniCompletionPacket @ 0x140470DB0 (IoFreeMiniCompletionPacket.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x14055D770 (AlpcpAllocateCompletionPacketLookaside.c)
 *     NtCreateWorkerFactory @ 0x14055D844 (NtCreateWorkerFactory.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 * Callees:
 *     ExReturnPoolQuota @ 0x140024F70 (ExReturnPoolQuota.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeMiniCompletionPacket(_SLIST_ENTRY *P)
{
  void (__fastcall *v2)(_SLIST_ENTRY *, _SLIST_ENTRY *); // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *L; // rdi

  if ( LOBYTE(P[1].Next) != 4 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    L = CurrentPrcb->PPLookasideList[7].P;
    ++L->TotalFrees;
    if ( LOWORD(L->ListHead.Alignment) >= L->Depth )
    {
      ++L->FreeMisses;
      L = CurrentPrcb->PPLookasideList[7].L;
      ++L->TotalFrees;
      if ( LOWORD(L->ListHead.Alignment) >= L->Depth )
      {
        ++L->FreeMisses;
        ExFreePoolWithTag(P, 0);
        return;
      }
      if ( LOBYTE(P[1].Next) != 3 )
      {
LABEL_7:
        RtlpInterlockedPushEntrySList(&L->ListHead, P);
        return;
      }
    }
    else if ( LOBYTE(P[1].Next) != 3 )
    {
      goto LABEL_7;
    }
    ExReturnPoolQuota((__int64)P);
    goto LABEL_7;
  }
  v2 = (void (__fastcall *)(_SLIST_ENTRY *, _SLIST_ENTRY *))*((_QWORD *)&P[3].Next + 1);
  if ( v2 )
  {
    v2(P, P[4].Next);
  }
  else if ( *((_BYTE *)&P[4].Next + 8) )
  {
    ExFreePoolWithTag(P, 0);
  }
}
