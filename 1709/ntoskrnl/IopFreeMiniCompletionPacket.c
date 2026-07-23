/*
 * XREFs of IopFreeMiniCompletionPacket @ 0x1404A39C0
 * Callers:
 *     IoRemoveIoCompletion @ 0x14006C5D0 (IoRemoveIoCompletion.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x1404EB3F4 (AlpcpAllocateCompletionPacketLookaside.c)
 *     NtCreateWorkerFactory @ 0x1404EB4C8 (NtCreateWorkerFactory.c)
 *     IoFreeMiniCompletionPacket @ 0x14050AFE0 (IoFreeMiniCompletionPacket.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     IopFreeCompletionListPackets @ 0x1405166EC (IopFreeCompletionListPackets.c)
 * Callees:
 *     ExReturnPoolQuota @ 0x1401166AC (ExReturnPoolQuota.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
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
    ExReturnPoolQuota((unsigned __int64)P);
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
