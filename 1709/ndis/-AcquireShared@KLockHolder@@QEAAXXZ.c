/*
 * XREFs of ?AcquireShared@KLockHolder@@QEAAXXZ @ 0x1C00DA08C
 * Callers:
 *     ?ndisMpHookGetHook@@YA?AV?$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT_HOOK_DRIVER_TYPE@@@Z @ 0x1C00FB958 (-ndisMpHookGetHook@@YA-AV-$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT.c)
 *     FindExtensionByName @ 0x1C00FB9F4 (FindExtensionByName.c)
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
