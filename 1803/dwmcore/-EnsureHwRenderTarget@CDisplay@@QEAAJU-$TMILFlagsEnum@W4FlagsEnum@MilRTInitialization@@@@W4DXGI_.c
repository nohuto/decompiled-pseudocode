/*
 * XREFs of ?EnsureHwRenderTarget@CDisplay@@QEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@W4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800B72E0
 * Callers:
 *     ?EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180060240 (-EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseHwRenderTarget@CDisplay@@QEAAXXZ @ 0x1800B73B4 (-ReleaseHwRenderTarget@CDisplay@@QEAAXXZ.c)
 *     ?CreateHwRenderTarget@CDisplay@@AEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x1800B7648 (-CreateHwRenderTarget@CDisplay@@AEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplay::EnsureHwRenderTarget(CDisplay *this, unsigned int a2, int a3, int a4)
{
  _QWORD *v4; // r14
  __int64 v6; // rcx
  unsigned int v7; // edi
  int HwRenderTarget; // eax
  _DWORD v13[4]; // [rsp+30h] [rbp-38h] BYREF

  v4 = (_QWORD *)((char *)this + 72);
  *((_DWORD *)this + 74) = a3;
  *((_DWORD *)this + 77) = a4;
  v6 = *((_QWORD *)this + 9);
  v7 = 0;
  if ( !v6
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6)
    || ((*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)*v4 + 24LL))(*v4, v13), v13[0] != a3)
    || v13[2] != a4 )
  {
    CDisplay::ReleaseHwRenderTarget(this);
  }
  if ( !*v4 )
  {
    HwRenderTarget = CDisplay::CreateHwRenderTarget(this, a2, v4);
    v7 = HwRenderTarget;
    if ( HwRenderTarget < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277AC0, 2u, HwRenderTarget, 0x32Fu);
  }
  return v7;
}
