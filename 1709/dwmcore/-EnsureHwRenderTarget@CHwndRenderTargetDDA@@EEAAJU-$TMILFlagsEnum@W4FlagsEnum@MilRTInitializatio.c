/*
 * XREFs of ?EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180147B90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ @ 0x180077F00 (-ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CreateHwRenderTarget@CDisplay@@AEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x180191368 (-CreateHwRenderTarget@CDisplay@@AEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV.c)
 */

__int64 __fastcall CHwndRenderTargetDDA::EnsureHwRenderTarget(__int64 a1, unsigned int a2)
{
  CDisplay *v2; // rbp
  DWORD v4; // edi
  __int64 v6; // rcx
  signed int HwRenderTarget; // eax
  __int64 v8; // rcx

  v2 = *(CDisplay **)(a1 + 112);
  v4 = 0;
  v6 = *((_QWORD *)v2 + 7);
  if ( v6 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6)
    || (CDisplay::ReleaseDDAHwRenderTarget(v2),
        HwRenderTarget = CDisplay::CreateHwRenderTarget(v2, a2, (char *)v2 + 56),
        v4 = HwRenderTarget,
        HwRenderTarget >= 0) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 56LL);
    *(_QWORD *)(a1 + 120) = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, HwRenderTarget, 0x313u);
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x25u);
  }
  return v4;
}
