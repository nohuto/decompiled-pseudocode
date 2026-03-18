/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z @ 0x1800183E0
 * Callers:
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x180014D80 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 * Callees:
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ @ 0x180017400 (-IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ.c)
 *     ?SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI_N@Z @ 0x18002BDC0 (-SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::SetSyncRefreshCountWaitTarget(CHwndRenderTarget *this, unsigned int a2)
{
  CHwndRenderTarget *v2; // rdi
  unsigned int v4; // ebx
  bool (__fastcall *v5)(CHwndRenderTarget *); // rax
  bool IsPrimaryMonitor; // al
  CHwDisplayRenderTarget *v7; // rcx
  int (*v8)(CHwDisplayRenderTarget *__hidden, unsigned int, bool); // rax
  int refreshed; // eax

  v2 = (CHwndRenderTarget *)((char *)this - 64);
  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 8) + 200LL))((char *)this - 64) )
    return v4;
  v5 = *(bool (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v2 + 224LL);
  if ( v5 == CHwndRenderTarget::IsPrimaryMonitor )
    IsPrimaryMonitor = CHwndRenderTarget::IsPrimaryMonitor(v2);
  else
    IsPrimaryMonitor = v5(v2);
  if ( !IsPrimaryMonitor || (v7 = (CHwDisplayRenderTarget *)*((_QWORD *)v2 + 15)) == 0LL )
  {
    v4 = -2147467263;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201DF8, 2u, -2147467263, 0x67Au);
LABEL_14:
    if ( (v4 & 0x80000000) != 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201DF8, 2u, v4, 0x68Du);
    return v4;
  }
  v8 = *(int (**)(CHwDisplayRenderTarget *__hidden, unsigned int, bool))(*(_QWORD *)v7 + 304LL);
  if ( v8 == CHwDisplayRenderTarget::SetSyncRefreshCountWaitTarget )
    refreshed = CHwDisplayRenderTarget::SetSyncRefreshCountWaitTarget(v7, a2, 0);
  else
    refreshed = ((__int64 (__fastcall *)(CHwDisplayRenderTarget *, _QWORD, _QWORD))v8)(v7, a2, 0LL);
  v4 = refreshed;
  if ( refreshed < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201DF8, 2u, refreshed, 0x676u);
    goto LABEL_14;
  }
  return v4;
}
