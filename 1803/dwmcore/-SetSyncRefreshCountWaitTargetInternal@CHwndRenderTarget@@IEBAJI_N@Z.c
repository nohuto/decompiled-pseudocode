/*
 * XREFs of ?SetSyncRefreshCountWaitTargetInternal@CHwndRenderTarget@@IEBAJI_N@Z @ 0x18013BE88
 * Callers:
 *     ?SetPrimaryVsyncPresentWaitTarget@CRenderTargetManager@@QEBAJI@Z @ 0x180152664 (-SetPrimaryVsyncPresentWaitTarget@CRenderTargetManager@@QEBAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ @ 0x180062F10 (-IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::SetSyncRefreshCountWaitTargetInternal(CDisplay **this, unsigned int a2, char a3)
{
  __int64 v6; // r8
  CDisplay *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx

  if ( CHwndRenderTarget::IsPrimaryMonitor(this) && (v7 = this[22]) != 0LL )
  {
    LOBYTE(v6) = a3;
    v8 = (*(__int64 (__fastcall **)(CDisplay *, _QWORD, __int64))(*(_QWORD *)v7 + 352LL))(v7, a2, v6);
    v9 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, v8, 0x639u);
  }
  else
  {
    v9 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, -2003304307, 0x63Du);
  }
  return v9;
}
