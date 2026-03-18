/*
 * XREFs of ?OnShutdown@CComposition@@QEAAXXZ @ 0x18013F8A0
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x18013B684 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ??1CIndependentRefreshRateScheduler@@UEAA@XZ @ 0x18013C224 (--1CIndependentRefreshRateScheduler@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18005BFB0 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x18013FA90 (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x180144EF0 (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 *     ?Disconnect@CMessageConversationHost@@QEAAXXZ @ 0x180145400 (-Disconnect@CMessageConversationHost@@QEAAXXZ.c)
 *     ?HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z @ 0x180195868 (-HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z.c)
 */

void __fastcall CComposition::OnShutdown(CComposition *this)
{
  char *v1; // rdi
  CD3DDeviceManager *v3; // rcx

  v1 = (char *)this + 584;
  AcquireSRWLockExclusive((PSRWLOCK)this + 73);
  *((_DWORD *)v1 + 2) = GetCurrentThreadId();
  CD3DDeviceManager::HandleDeleteAssociatedDevices(v3, (const struct _GUID *)((char *)this + 324));
  CComposition::ReleaseNotificationChannels(this);
  CRenderTargetManager::ReleaseTargets(*((CRenderTargetManager **)this + 4));
  while ( *((_DWORD *)this + 92) )
    CComposition::CloseChannel(
      this,
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 43) + 8LL * (unsigned int)(*((_DWORD *)this + 92) - 1)) + 16LL));
  CMessageConversationHost::Disconnect(*((CMessageConversationHost **)this + 169));
  CMILCOMBase::InternalRelease(*((CMILCOMBase **)this + 169));
  *((_QWORD *)this + 169) = 0LL;
  *((_DWORD *)v1 + 2) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)v1);
}
