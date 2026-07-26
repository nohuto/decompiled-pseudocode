/*
 * XREFs of ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00B2380
 * Callers:
 *     ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x1C00B2450 (-SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z.c)
 *     _lambda_727c6594aeeec297d735c04587a6780c_::_lambda_invoker_cdecl_ @ 0x1C00BE270 (_lambda_727c6594aeeec297d735c04587a6780c_--_lambda_invoker_cdecl_.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C00DC030 (NdisReEnumerateProtocolBindings.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     ?AcquireShared@KLockHolder@@QEAAXXZ @ 0x1C00B4FC8 (-AcquireShared@KLockHolder@@QEAAXXZ.c)
 *     ?ReleaseShared@KLockHolder@@QEAAXXZ @ 0x1C00B5060 (-ReleaseShared@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NDIS_BIND_DRIVER_BASE::ForEachLink(NDIS_BIND_DRIVER_BASE *this, void (__fastcall *a2)(_LIST_ENTRY *))
{
  __int64 v3; // rbx
  _LIST_ENTRY *p_BindLinks; // rsi
  _LIST_ENTRY *i; // rbx
  __int64 Flink; // rdi
  KLockHolder v8; // [rsp+20h] [rbp-28h] BYREF

  v3 = qword_1C00926E0 + 8;
  v8.m_Lock = (KPushLockBase *)(qword_1C00926E0 + 8);
  KeEnterCriticalRegion();
  v8.m_Region.m_Entered = 1;
  ExAcquirePushLockSharedEx(v3, 0LL);
  p_BindLinks = &this->BindLinks;
  v8.m_State = Shared;
  for ( i = p_BindLinks->Flink; i != p_BindLinks; i = i->Flink )
  {
    Flink = (__int64)i[-4].Flink;
    if ( *(_DWORD *)(Flink + 1520) && ndisReferenceMiniport((__int64)i[-4].Flink, 0x20u) )
    {
      KLockHolder::ReleaseShared(&v8);
      a2(i - 4);
      KLockHolder::AcquireShared(&v8);
      ndisDereferenceMiniport(Flink, 0x20u);
    }
  }
  KLockHolder::~KLockHolder(&v8);
}
