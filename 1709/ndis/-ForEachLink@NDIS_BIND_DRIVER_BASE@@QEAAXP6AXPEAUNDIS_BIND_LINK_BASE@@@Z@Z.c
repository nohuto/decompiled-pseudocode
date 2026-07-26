/*
 * XREFs of ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00B474C
 * Callers:
 *     ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x1C00B4820 (-SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z.c)
 *     _lambda_727c6594aeeec297d735c04587a6780c_::_lambda_invoker_cdecl_ @ 0x1C00C94E0 (_lambda_727c6594aeeec297d735c04587a6780c_--_lambda_invoker_cdecl_.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C00E6070 (NdisReEnumerateProtocolBindings.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NDIS_BIND_DRIVER_BASE::ForEachLink(NDIS_BIND_DRIVER_BASE *this, void (__fastcall *a2)(_LIST_ENTRY *))
{
  __int64 v3; // rdi
  _LIST_ENTRY *p_BindLinks; // rsi
  _LIST_ENTRY *i; // rbx
  __int64 Flink; // rbp

  v3 = qword_1C0098800 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  p_BindLinks = &this->BindLinks;
  for ( i = p_BindLinks->Flink; i != p_BindLinks; i = i->Flink )
  {
    Flink = (__int64)i[-4].Flink;
    if ( *(_DWORD *)(Flink + 1520) && ndisReferenceMiniport((__int64)i[-4].Flink) )
    {
      ExReleasePushLockEx(v3, 0LL);
      KeLeaveCriticalRegion();
      a2(i - 4);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v3, 0LL);
      ndisDereferenceMiniport(Flink, 0x20u);
    }
  }
  ExReleasePushLockEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
