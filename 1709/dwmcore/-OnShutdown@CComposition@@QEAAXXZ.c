/*
 * XREFs of ?OnShutdown@CComposition@@QEAAXXZ @ 0x180128560
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x180125EB4 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1800AAF98 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x18011B56C (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ @ 0x18011DD58 (-DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x180128ED8 (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x180130EF8 (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 *     ?Disconnect@CMessageConversationHost@@QEAAXXZ @ 0x1801319B4 (-Disconnect@CMessageConversationHost@@QEAAXXZ.c)
 */

void __fastcall CComposition::OnShutdown(CComposition *this)
{
  char *v1; // rsi
  CD3DDeviceManager *v3; // rcx
  int v4; // edi
  CD3DDeviceLevel1 *v5; // rcx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)this + 552;
  AcquireSRWLockExclusive((PSRWLOCK)this + 69);
  *((_DWORD *)v1 + 2) = GetCurrentThreadId();
  v6 = &CriticalSection;
  EnterCriticalSection(&CriticalSection);
  v4 = qword_18026EFB0;
  BYTE4(qword_18026EFB0) = 1;
  while ( v4 )
  {
    v5 = *(CD3DDeviceLevel1 **)(qword_18026EF60 + 24LL * (unsigned int)--v4);
    *((_DWORD *)v5 + 222) = -2003304307;
    CD3DDeviceLevel1::ProcessDeviceLost(v5);
  }
  CD3DDeviceManager::DeleteUnusableDevices(v3);
  BYTE4(qword_18026EFB0) = 0;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v6);
  CComposition::ReleaseNotificationChannels(this);
  CRenderTargetManager::ReleaseTargets(*((CRenderTargetManager **)this + 9));
  while ( *((_DWORD *)this + 82) )
    CComposition::CloseChannel(
      this,
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38) + 8LL * (unsigned int)(*((_DWORD *)this + 82) - 1)) + 16LL));
  CMessageConversationHost::Disconnect(*((CMessageConversationHost **)this + 161));
  CMILCOMBase::InternalRelease(*((CMILCOMBase **)this + 161));
  *((_QWORD *)this + 161) = 0LL;
  *((_DWORD *)v1 + 2) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)v1);
}
