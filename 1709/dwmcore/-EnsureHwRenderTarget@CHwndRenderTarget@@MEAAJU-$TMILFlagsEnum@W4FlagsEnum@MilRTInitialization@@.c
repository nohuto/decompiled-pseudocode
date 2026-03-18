/*
 * XREFs of ?EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180017D40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureHwRenderTarget@CDisplay@@QEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@W4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180077F9C (-EnsureHwRenderTarget@CDisplay@@QEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@W4DXGI_.c)
 *     ??$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z @ 0x1800C0930 (--$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::EnsureHwRenderTarget(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi

  v2 = CDisplay::EnsureHwRenderTarget(*(CDisplay **)(a1 + 112));
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x8E6u);
  }
  else
  {
    ReplaceInterface<IRenderTargetDisplay,IRenderTargetDisplay>(a1 + 120, *(_QWORD *)(*(_QWORD *)(a1 + 112) + 48LL));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 120) + 168LL))(*(_QWORD *)(a1 + 120));
  }
  return v3;
}
