/*
 * XREFs of ?EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180155EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureDDAHwRenderTarget@CDisplay@@QEAAJAEBU_GUID@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180187CBC (-EnsureDDAHwRenderTarget@CDisplay@@QEAAJAEBU_GUID@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializat.c)
 */

__int64 __fastcall CHwndRenderTargetDDA::EnsureHwRenderTarget(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rcx

  v2 = CDisplay::EnsureDDAHwRenderTarget(*(CDisplay **)(a1 + 112));
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 56LL);
    *(_QWORD *)(a1 + 120) = v4;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x2Bu);
  }
  return v3;
}
