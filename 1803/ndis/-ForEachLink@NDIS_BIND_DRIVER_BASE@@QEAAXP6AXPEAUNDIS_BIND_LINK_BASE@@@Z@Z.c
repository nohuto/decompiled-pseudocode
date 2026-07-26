/*
 * XREFs of ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00BFEA8
 * Callers:
 *     ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x1C00BFF6C (-SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z.c)
 *     _lambda_727c6594aeeec297d735c04587a6780c_::_lambda_invoker_cdecl_ @ 0x1C00CAB20 (_lambda_727c6594aeeec297d735c04587a6780c_--_lambda_invoker_cdecl_.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C00E78C0 (NdisReEnumerateProtocolBindings.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     ?AcquireShared@KLockHolder@@QEAAXXZ @ 0x1C00BEDEC (-AcquireShared@KLockHolder@@QEAAXXZ.c)
 *     ?ReleaseShared@KLockHolder@@QEAAXXZ @ 0x1C00BEE84 (-ReleaseShared@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NDIS_BIND_DRIVER_BASE::ForEachLink(NDIS_BIND_DRIVER_BASE *this, void (__fastcall *a2)(_LIST_ENTRY *))
{
  _LIST_ENTRY *p_BindLinks; // rsi
  _LIST_ENTRY *i; // rbx
  __int64 Flink; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  KLockHolder v9; // [rsp+20h] [rbp-28h] BYREF

  v9.m_State = Unlocked;
  v9.m_Lock = (KPushLockBase *)(qword_1C00996D8 + 8);
  v9.m_Region.m_Entered = 0;
  KLockHolder::AcquireShared(&v9);
  p_BindLinks = &this->BindLinks;
  for ( i = p_BindLinks->Flink; i != p_BindLinks; i = i->Flink )
  {
    Flink = (__int64)i[-4].Flink;
    if ( *(_DWORD *)(Flink + 1520) )
    {
      if ( ndisReferenceMiniport((__int64)i[-4].Flink) )
      {
        KLockHolder::ReleaseShared(&v9);
        a2(i - 4);
        KLockHolder::AcquireShared(&v9);
        ndisDereferenceMiniport(Flink, 0x20u, v7, v8);
      }
    }
  }
  KLockHolder::~KLockHolder(&v9);
}
