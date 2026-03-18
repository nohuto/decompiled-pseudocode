/*
 * XREFs of ?OnShutdown@CComposition@@QEAAXXZ @ 0x18014A4C0
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x18014886C (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18002DA70 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x180076548 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ @ 0x18008906C (-DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ProcessOffTheadPreComputeRequests@CComposition@@IEAAPEAU_SLIST_ENTRY@@XZ @ 0x18013E474 (-ProcessOffTheadPreComputeRequests@CComposition@@IEAAPEAU_SLIST_ENTRY@@XZ.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x18014AA6C (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x180152540 (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 *     ?Disconnect@CMessageConversationHost@@QEAAXXZ @ 0x180152AF4 (-Disconnect@CMessageConversationHost@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x180153A54 (-InternalRelease@-$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CComposition::OnShutdown(CComposition *this)
{
  char *v1; // rsi
  struct _SLIST_ENTRY *v3; // rbp
  int v4; // edi
  CD3DDeviceLevel1 *v5; // rcx
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  CMILCOMBase *v8; // rcx
  CComposition *v9; // rcx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)this + 576;
  *((_BYTE *)this + 1348) = 1;
  AcquireSRWLockExclusive((PSRWLOCK)this + 72);
  *((_DWORD *)v1 + 2) = GetCurrentThreadId();
  v3 = CComposition::ProcessOffTheadPreComputeRequests((union _SLIST_HEADER *)this);
  v10 = &stru_1802D6738;
  EnterCriticalSection(&stru_1802D6738);
  v4 = qword_1802D67F0;
  BYTE4(qword_1802D67F0) = 1;
  while ( v4 )
  {
    v5 = *(CD3DDeviceLevel1 **)(qword_1802D67A0 + 24LL * (unsigned int)--v4);
    *((_DWORD *)v5 + 222) = -2003304307;
    CD3DDeviceLevel1::ProcessDeviceLost(v5);
  }
  CD3DDeviceManager::DeleteUnusableDevices((CD3DDeviceManager *)&g_D3DDeviceManager);
  BYTE4(qword_1802D67F0) = 0;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v10);
  CComposition::ReleaseNotificationChannels(this);
  CRenderTargetManager::ReleaseTargets(*((CRenderTargetManager **)this + 9));
  while ( *((_DWORD *)this + 88) )
    CComposition::CloseChannel(
      this,
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 41) + 8LL * (unsigned int)(*((_DWORD *)this + 88) - 1)) + 16LL));
  CMessageConversationHost::Disconnect(*((CMessageConversationHost **)this + 164));
  CMILCOMBase::InternalRelease(*((CMILCOMBase **)this + 164));
  v6 = (_QWORD *)*((_QWORD *)this + 165);
  *((_QWORD *)this + 164) = 0LL;
  Microsoft::WRL::ComPtr<DataProviderRegistrarConnection>::InternalRelease(v6 + 4);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v6 + 5);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v6 + 3);
  v7 = v6[2];
  if ( v7 )
  {
    v6[2] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = (CMILCOMBase *)*((_QWORD *)this + 165);
  if ( v8 )
  {
    *((_QWORD *)this + 165) = 0LL;
    CMILCOMBase::InternalRelease(v8);
  }
  *((_DWORD *)v1 + 2) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)v1);
  CComposition::CompleteOffTheadPreComputeRequests(v9, v3);
}
