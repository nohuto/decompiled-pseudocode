/*
 * XREFs of ?SetSyncRefreshCountWaitTargetInternal@CHwndRenderTarget@@IEBAJI_N@Z @ 0x180018490
 * Callers:
 *     ?SetPrimaryVsyncPresentWaitTarget@CRenderTargetManager@@QEBAJI@Z @ 0x18001BB30 (-SetPrimaryVsyncPresentWaitTarget@CRenderTargetManager@@QEBAJI@Z.c)
 * Callees:
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ @ 0x180017400 (-IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ.c)
 *     ?SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI_N@Z @ 0x18002BDC0 (-SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::SetSyncRefreshCountWaitTargetInternal(
        CHwDisplayRenderTarget **this,
        unsigned int a2,
        bool a3)
{
  unsigned int v6; // ebx
  bool (__fastcall *v7)(CHwndRenderTarget *); // rax
  bool IsPrimaryMonitor; // al
  __int64 v9; // r8
  CHwDisplayRenderTarget *v10; // rcx
  int (*v11)(CHwDisplayRenderTarget *__hidden, unsigned int, bool); // rax
  int refreshed; // eax

  v6 = 0;
  if ( !(*((unsigned __int8 (__fastcall **)(CHwDisplayRenderTarget **))*this + 25))(this) )
  {
    v7 = (bool (__fastcall *)(CHwndRenderTarget *))*((_QWORD *)*this + 28);
    if ( v7 == CHwndRenderTarget::IsPrimaryMonitor )
      IsPrimaryMonitor = CHwndRenderTarget::IsPrimaryMonitor((CHwndRenderTarget *)this);
    else
      IsPrimaryMonitor = v7((CHwndRenderTarget *)this);
    if ( IsPrimaryMonitor && (v10 = this[15]) != 0LL )
    {
      LOBYTE(v9) = a3;
      v11 = *(int (**)(CHwDisplayRenderTarget *__hidden, unsigned int, bool))(*(_QWORD *)v10 + 304LL);
      if ( v11 == CHwDisplayRenderTarget::SetSyncRefreshCountWaitTarget )
        refreshed = CHwDisplayRenderTarget::SetSyncRefreshCountWaitTarget(v10, a2, a3);
      else
        refreshed = ((__int64 (__fastcall *)(CHwDisplayRenderTarget *, _QWORD, __int64))v11)(v10, a2, v9);
      v6 = refreshed;
      if ( refreshed < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201DF8, 2u, refreshed, 0x676u);
    }
    else
    {
      v6 = -2147467263;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201DF8, 2u, -2147467263, 0x67Au);
    }
  }
  return v6;
}
