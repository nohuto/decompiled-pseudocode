/*
 * XREFs of ?AcquireShared@KLockHolder@@QEAAXXZ @ 0x1C00B4FC8
 * Callers:
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C00B1E8C (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00B2380 (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 *     ?ndisMpHookGetHook@@YA?AV?$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT_HOOK_DRIVER_TYPE@@@Z @ 0x1C00F2470 (-ndisMpHookGetHook@@YA-AV-$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT.c)
 *     FindExtensionByName @ 0x1C00F250C (FindExtensionByName.c)
 * Callees:
 *     <none>
 */

void __fastcall KLockHolder::AcquireShared(KLockHolder *this)
{
  KPushLockBase *m_Lock; // rcx

  KeEnterCriticalRegion();
  m_Lock = this->m_Lock;
  this->m_Region.m_Entered = 1;
  ExAcquirePushLockSharedEx(m_Lock, 0LL);
  this->m_State = Shared;
}
