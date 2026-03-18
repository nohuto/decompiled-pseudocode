/*
 * XREFs of ?SetPrimaryVsyncPresentWaitTarget@CRenderTargetManager@@QEBAJI@Z @ 0x18001BB30
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?SetSyncRefreshCountWaitTargetInternal@CHwndRenderTarget@@IEBAJI_N@Z @ 0x180018490 (-SetSyncRefreshCountWaitTargetInternal@CHwndRenderTarget@@IEBAJI_N@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180019AA0 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ @ 0x18001B1B4 (-GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::SetPrimaryVsyncPresentWaitTarget(CRenderTargetManager *this, unsigned int a2)
{
  unsigned int v3; // ebx
  struct CRenderTarget *PrimaryRenderTargetNoRef; // rax
  CHwDisplayRenderTarget **v5; // rdi
  bool (__fastcall *v6)(__int64, int); // rax
  bool v7; // al
  int refreshed; // eax

  v3 = -2003304307;
  PrimaryRenderTargetNoRef = CRenderTargetManager::GetPrimaryRenderTargetNoRef(this);
  v5 = (CHwDisplayRenderTarget **)PrimaryRenderTargetNoRef;
  if ( PrimaryRenderTargetNoRef )
  {
    v6 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)PrimaryRenderTargetNoRef + 48LL);
    if ( v6 == CHwndRenderTarget::IsOfType )
      v7 = CHwndRenderTarget::IsOfType((__int64)v5, 70);
    else
      v7 = v6((__int64)v5, 70);
    if ( v7 )
    {
      refreshed = CHwndRenderTarget::SetSyncRefreshCountWaitTargetInternal(v5, a2, 1);
      v3 = refreshed;
      if ( refreshed < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D18, 2u, refreshed, 0x1A3u);
    }
    else
    {
      v3 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D18, 2u, -2003292412, 0x1A7u);
    }
  }
  return v3;
}
