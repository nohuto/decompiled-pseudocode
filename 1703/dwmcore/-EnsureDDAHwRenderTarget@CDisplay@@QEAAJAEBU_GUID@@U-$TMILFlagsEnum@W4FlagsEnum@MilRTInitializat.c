/*
 * XREFs of ?EnsureDDAHwRenderTarget@CDisplay@@QEAAJAEBU_GUID@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180187CBC
 * Callers:
 *     ?EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180155EF0 (-EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateHwRenderTarget@CDisplay@@AEAAJAEBU_GUID@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x1800B796C (-CreateHwRenderTarget@CDisplay@@AEAAJAEBU_GUID@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization.c)
 *     ?ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ @ 0x1800B7FB0 (-ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplay::EnsureDDAHwRenderTarget(CDisplay *this, struct _GUID *a2, unsigned int a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  int HwRenderTarget; // eax

  v4 = 0;
  v5 = *((_QWORD *)this + 7);
  if ( !v5 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5) )
  {
    CDisplay::ReleaseDDAHwRenderTarget(this);
    HwRenderTarget = CDisplay::CreateHwRenderTarget(this, a2, a3, (__int64)this + 56);
    v4 = HwRenderTarget;
    if ( HwRenderTarget < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, HwRenderTarget, 0x2E2u);
  }
  return v4;
}
