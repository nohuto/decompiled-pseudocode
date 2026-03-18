/*
 * XREFs of ?CreateHwRenderTarget@CDisplay@@AEAAJAEBU_GUID@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x1800B796C
 * Callers:
 *     ?EnsureHwRenderTarget@CDisplay@@QEAAJAEBU_GUID@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@W4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800B7858 (-EnsureHwRenderTarget@CDisplay@@QEAAJAEBU_GUID@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization.c)
 *     ?EnsureDDAHwRenderTarget@CDisplay@@QEAAJAEBU_GUID@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180187CBC (-EnsureDDAHwRenderTarget@CDisplay@@QEAAJAEBU_GUID@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializat.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800C93E0 (-Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTIn.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplay::CreateHwRenderTarget(CDisplay *this, struct _GUID *a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax

  v5 = CHwDisplayRenderTarget::Create(a2, this);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x2C0u);
  }
  else
  {
    v7 = ((__int64 (__fastcall *)(_QWORD, GUID *, __int64))*MEMORY[0])(
           0LL,
           &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
           a4);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x2C3u);
  }
  return v6;
}
