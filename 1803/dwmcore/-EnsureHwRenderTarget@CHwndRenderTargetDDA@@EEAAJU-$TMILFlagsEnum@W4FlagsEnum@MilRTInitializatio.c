/*
 * XREFs of ?EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18016FFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateHwRenderTarget@CDisplay@@AEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x1800B7648 (-CreateHwRenderTarget@CDisplay@@AEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV.c)
 *     ?ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ @ 0x1800B784C (-ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ.c)
 *     ??$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z @ 0x1800C8F28 (--$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTargetDDA::EnsureHwRenderTarget(__int64 a1, unsigned int a2)
{
  CDisplay *v2; // rbp
  unsigned int v4; // edi
  __int64 v6; // rcx
  int HwRenderTarget; // eax

  v2 = *(CDisplay **)(a1 + 168);
  v4 = 0;
  v6 = *((_QWORD *)v2 + 10);
  if ( v6 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6)
    || (CDisplay::ReleaseDDAHwRenderTarget(v2),
        HwRenderTarget = CDisplay::CreateHwRenderTarget(v2, a2, (__int64)v2 + 80),
        v4 = HwRenderTarget,
        HwRenderTarget >= 0) )
  {
    ReplaceInterface<IRenderTargetDisplay,IRenderTargetDisplay>(
      (__int64 *)(a1 + 176),
      *(_QWORD *)(*(_QWORD *)(a1 + 168) + 80LL));
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, HwRenderTarget, 0x371u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x25u);
  }
  return v4;
}
