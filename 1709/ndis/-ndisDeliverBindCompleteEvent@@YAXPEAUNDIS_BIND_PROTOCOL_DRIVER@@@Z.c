/*
 * XREFs of ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00B51F8
 * Callers:
 *     _lambda_544ec5177f50874f26890ac2c9d93654_::_lambda_invoker_cdecl_ @ 0x1C00B51B0 (_lambda_544ec5177f50874f26890ac2c9d93654_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ndisReferenceProtocol @ 0x1C00062A4 (ndisReferenceProtocol.c)
 *     ndisDereferenceProtocol @ 0x1C0006BC0 (ndisDereferenceProtocol.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDC84 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ReleaseShared@KLockHolder@@QEAAXXZ @ 0x1C00DA0C0 (-ReleaseShared@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall ndisDeliverBindCompleteEvent(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  __int64 v2; // rsi
  _NDIS_PROTOCOL_BLOCK *RunningDriver; // rbx
  KLockHolder::<unnamed_type_m_State> m_State; // edi
  __int64 v5; // rdx
  __int32 v6; // edi
  KLockHolder v7; // [rsp+20h] [rbp-28h] BYREF

  v2 = qword_1C0098800 + 16;
  v7.m_Lock = (KPushLockBase *)(qword_1C0098800 + 16);
  KeEnterCriticalRegion();
  v7.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  RunningDriver = a1->RunningDriver;
  m_State = Exclusive;
  v7.m_State = Exclusive;
  if ( RunningDriver
    && (RunningDriver->MajorNdisVersion >= 6u || RunningDriver->PnPEventHandler)
    && ndisReferenceProtocol((__int64)RunningDriver, 0xCu) )
  {
    ExReleasePushLockExclusiveEx(v2, 0LL);
    v7.m_State = Unlocked;
    v7.m_Region.m_Entered = 0;
    KeLeaveCriticalRegion();
    if ( _InterlockedCompareExchange(&RunningDriver->NotifyBindCompleteWorkItem.m_queued, 1, 0) )
      ndisDereferenceProtocol(RunningDriver, v5, 0xCu);
    else
      ExQueueWorkItem(&RunningDriver->NotifyBindCompleteWorkItem.m_workitem, NormalWorkQueue);
    m_State = v7.m_State;
  }
  v6 = m_State - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
      KLockHolder::ReleaseExclusive(&v7);
  }
  else
  {
    KLockHolder::ReleaseShared(&v7);
  }
  if ( v7.m_Region.m_Entered )
    KeLeaveCriticalRegion();
}
