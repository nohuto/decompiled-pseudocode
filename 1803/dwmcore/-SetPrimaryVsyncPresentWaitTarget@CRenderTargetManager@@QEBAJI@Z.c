/*
 * XREFs of ?SetPrimaryVsyncPresentWaitTarget@CRenderTargetManager@@QEBAJI@Z @ 0x180152664
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ @ 0x18005F088 (-GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?SetSyncRefreshCountWaitTargetInternal@CHwndRenderTarget@@IEBAJI_N@Z @ 0x18013BE88 (-SetSyncRefreshCountWaitTargetInternal@CHwndRenderTarget@@IEBAJI_N@Z.c)
 */

__int64 __fastcall CRenderTargetManager::SetPrimaryVsyncPresentWaitTarget(CRenderTargetManager *this, unsigned int a2)
{
  unsigned int v3; // ebx
  struct CRenderTarget *PrimaryRenderTargetNoRef; // rax
  CDisplay **v5; // rdi
  int refreshed; // eax

  v3 = -2003304307;
  PrimaryRenderTargetNoRef = CRenderTargetManager::GetPrimaryRenderTargetNoRef(this);
  v5 = (CDisplay **)PrimaryRenderTargetNoRef;
  if ( PrimaryRenderTargetNoRef )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)PrimaryRenderTargetNoRef + 48LL))(
           PrimaryRenderTargetNoRef,
           76LL) )
    {
      refreshed = CHwndRenderTarget::SetSyncRefreshCountWaitTargetInternal(v5, a2, 1);
      v3 = refreshed;
      if ( refreshed < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACE40, 2u, refreshed, 0x16Du);
    }
    else
    {
      v3 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACE40, 2u, -2003292412, 0x171u);
    }
  }
  return v3;
}
