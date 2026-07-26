/*
 * XREFs of ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006D594
 * Callers:
 *     ndisSetBusyAsync @ 0x1C0011810 (ndisSetBusyAsync.c)
 * Callees:
 *     Template_qq @ 0x1C004FC94 (Template_qq.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C005723C (ndisMSendNetBufferListsCompleteInternal.c)
 *     ?ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C006CAD8 (-ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@.c)
 *     ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C006CC98 (-ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXK.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C006CDF4 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006D378 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ndisCancelDequeuedDirectOidRequests @ 0x1C006E5B8 (ndisCancelDequeuedDirectOidRequests.c)
 *     ndisIsPowerReferencedForSelectiveSuspend @ 0x1C006EB30 (ndisIsPowerReferencedForSelectiveSuspend.c)
 */

bool __fastcall ndisWdfSetBusyAsync(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        unsigned __int32 a3,
        unsigned int *a4,
        unsigned int a5)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  struct _NET_BUFFER_LIST *v7; // rbx
  unsigned __int32 v10; // r12d
  char v11; // r13
  KIRQL v12; // al
  __int64 v13; // rdx
  char v14; // bl
  _DWORD *v15; // rcx
  unsigned __int8 v17; // r15
  __int64 v18; // rcx
  struct _NET_BUFFER_LIST *Alignment; // rax
  struct _NET_BUFFER_LIST **v20; // [rsp+20h] [rbp-40h]
  KIRQL NewIrql; // [rsp+40h] [rbp-20h]
  struct _NET_BUFFER_LIST *v22; // [rsp+48h] [rbp-18h] BYREF
  struct _LIST_ENTRY v23; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int8 v24; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v25; // [rsp+A8h] [rbp+48h]

  v25 = a2;
  SelectiveSuspend = a1->SelectiveSuspend;
  v23.Blink = &v23;
  v7 = 0LL;
  v23.Flink = &v23;
  v22 = 0LL;
  v24 = 0;
  v10 = 0;
  v11 = 0;
  v12 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  LOBYTE(v13) = 1;
  NewIrql = v12;
  if ( (unsigned __int8)ndisIsPowerReferencedForSelectiveSuspend(SelectiveSuspend, v13) )
  {
    v14 = ndisIncrementAsyncIdleCountersLocked(SelectiveSuspend, v25, (enum _NDIS_SS_BUSY_REASON)a3);
    ndisSelectiveSuspendSetResumeBusyReason(v15, 0, a3, 0);
    KeReleaseSpinLock(&SelectiveSuspend->Lock, NewIrql);
    return v14;
  }
  if ( a3 == 54 )
  {
    v17 = 1;
    goto LABEL_6;
  }
  ndisPendWorkOnSetBusyAsyncLocked(SelectiveSuspend, (enum _NDIS_SS_BUSY_REASON)a3, a4, a5, &v22, &v23, &v24);
  v17 = v24;
  v7 = v22;
  if ( v24 )
  {
LABEL_6:
    if ( !SelectiveSuspend->PendingControlOps.Value
      && !SelectiveSuspend->PendingPnPEventCount
      && !SelectiveSuspend->PendingDirectOidCount
      && !SelectiveSuspend->PendingCancelDirectOidCount
      && !SelectiveSuspend->PendingSendNblCount
      && !SelectiveSuspend->PendingCancelSendCount
      && !SelectiveSuspend->PendingReceiveReturnCount
      && !SelectiveSuspend->StopFlags.Value )
    {
      v11 = 1;
      KeClearEvent(&SelectiveSuspend->WdfD0LockedForSSEvent);
      v10 = a3;
    }
    ndisIncrementAsyncIdleCountersLocked(SelectiveSuspend, v25, (enum _NDIS_SS_BUSY_REASON)a3);
  }
  KeReleaseSpinLock(&SelectiveSuspend->Lock, NewIrql);
  if ( v17 && v11 )
    ndisWdfAcquirePowerReferenceHelper(a1, 0, 1);
  if ( v7 )
  {
    Alignment = v7;
    do
    {
      Alignment->Status = -1071448052;
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
    while ( Alignment );
    ndisMSendNetBufferListsCompleteInternal((__int64)a1, v7, 0, 0);
  }
  if ( v23.Flink != &v23 )
    ndisCancelDequeuedDirectOidRequests(a1, &v23);
  if ( v10 )
  {
    if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
    {
      LODWORD(v20) = v10;
      Template_qq(v18, &SSResumeRequested, &a1->InterfaceGuid, (a1->NetLuid.Value >> 24) & 0xFFFFFF, (__int64)v20);
    }
  }
  return a3 == 54;
}
