/*
 * XREFs of ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006F340
 * Callers:
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006F2A4 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ndisSelectiveSuspendStop @ 0x1C0071928 (ndisSelectiveSuspendStop.c)
 *     NdisWdfAsyncPowerReferenceCompleteNotification @ 0x1C00F54B0 (NdisWdfAsyncPowerReferenceCompleteNotification.c)
 * Callees:
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C0056D2C (ndisMSendNetBufferListsCompleteInternal.c)
 *     ndisCancelDequeuedDirectOidRequests @ 0x1C00704CC (ndisCancelDequeuedDirectOidRequests.c)
 *     ndisMoveLinkedList @ 0x1C0070B74 (ndisMoveLinkedList.c)
 *     ndisReplayDirectOids @ 0x1C0070F88 (ndisReplayDirectOids.c)
 *     ndisReplayRecvNbls @ 0x1C0071014 (ndisReplayRecvNbls.c)
 *     ndisReplaySendNbls @ 0x1C0071078 (ndisReplaySendNbls.c)
 */

void __fastcall ndisWdfSelectiveSuspendResumeOperations(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, char a3)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rdx
  struct _NET_BUFFER_LIST *First; // rsi
  _NET_BUFFER_LIST *v10; // r14
  KIRQL v11; // r9
  __int64 v12; // r8
  struct _NET_BUFFER_LIST *Alignment; // rax
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  SelectiveSuspend = a1->SelectiveSuspend;
  KeSetEvent(&SelectiveSuspend->WdfD0LockedForSSEvent, 0, 0);
  LOBYTE(v6) = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  v7 = (MEMORY[0xFFFFF78000000014] - SelectiveSuspend->LastCancelTime.QuadPart) / 10000;
  SelectiveSuspend->TotalResumeLatencyMs += v7;
  SelectiveSuspend->LastResumeLatencyMs = v7;
  v8 = (MEMORY[0xFFFFF78000000014] - SelectiveSuspend->LastSuspendTime.QuadPart) / 10000;
  SelectiveSuspend->TotalSuspendedTimeMs += v8;
  SelectiveSuspend->LastSuspendIntervalMs = v8;
  First = SelectiveSuspend->PendingSendNblQueue.First;
  SelectiveSuspend->PendingSendNblQueue.First = 0LL;
  SelectiveSuspend->PendingSendNblQueue.Last = &SelectiveSuspend->PendingSendNblQueue.First;
  v10 = SelectiveSuspend->PendingReceiveNblQueue.First;
  SelectiveSuspend->PendingReceiveNblQueue.First = 0LL;
  SelectiveSuspend->PendingReceiveNblQueue.Last = &SelectiveSuspend->PendingReceiveNblQueue.First;
  ndisMoveLinkedList(v14, &SelectiveSuspend->PendingDirectOidQueue, 0x346DC5D63886594BLL, v6);
  KeReleaseSpinLock(&SelectiveSuspend->Lock, v11);
  if ( First )
  {
    if ( a3 )
    {
      Alignment = First;
      do
      {
        Alignment->Status = -1073676271;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
      ndisMSendNetBufferListsCompleteInternal((__int64)a1, First, 0, 0);
    }
    else
    {
      LOBYTE(v12) = 1;
      ndisReplaySendNbls(a1, First, v12);
    }
  }
  if ( v10 )
    ndisReplayRecvNbls(a1, v10);
  if ( a3 )
  {
    ndisCancelDequeuedDirectOidRequests(a1, v14);
  }
  else
  {
    LOBYTE(v12) = 1;
    ndisReplayDirectOids(a1, v14, v12);
  }
}
