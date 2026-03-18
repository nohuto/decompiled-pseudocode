/*
 * XREFs of ?EnsureHwRenderTarget@CDisplay@@QEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@W4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180077F9C
 * Callers:
 *     ?EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180017D40 (-EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseHwRenderTarget@CDisplay@@QEAAXXZ @ 0x18007805C (-ReleaseHwRenderTarget@CDisplay@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CreateHwRenderTarget@CDisplay@@AEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x180191368 (-CreateHwRenderTarget@CDisplay@@AEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV.c)
 */

__int64 __fastcall CDisplay::EnsureHwRenderTarget(CDisplay *this, unsigned int a2, int a3, int a4)
{
  _QWORD *v4; // r14
  __int64 v6; // rcx
  unsigned int v7; // edi
  signed int HwRenderTarget; // eax
  _DWORD v13[4]; // [rsp+30h] [rbp-38h] BYREF

  v4 = (_QWORD *)((char *)this + 48);
  *((_DWORD *)this + 69) = a3;
  *((_DWORD *)this + 72) = a4;
  v6 = *((_QWORD *)this + 6);
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
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, HwRenderTarget, 0x2D6u);
  }
  return v7;
}
