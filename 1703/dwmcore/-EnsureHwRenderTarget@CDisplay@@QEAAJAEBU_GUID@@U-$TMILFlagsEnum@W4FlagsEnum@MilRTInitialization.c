/*
 * XREFs of ?EnsureHwRenderTarget@CDisplay@@QEAAJAEBU_GUID@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@W4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800B7858
 * Callers:
 *     ?EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18006C800 (-EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseHwRenderTarget@CDisplay@@QEAAXXZ @ 0x1800B7934 (-ReleaseHwRenderTarget@CDisplay@@QEAAXXZ.c)
 *     ?CreateHwRenderTarget@CDisplay@@AEAAJAEBU_GUID@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x1800B796C (-CreateHwRenderTarget@CDisplay@@AEAAJAEBU_GUID@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization.c)
 *     ?GetPixelFormatInfo@IPixelFormat@@QEAAJPEAUPixelFormatInfo@@@Z @ 0x1800CB044 (-GetPixelFormatInfo@IPixelFormat@@QEAAJPEAUPixelFormatInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplay::EnsureHwRenderTarget(CDisplay *this, struct _GUID *a2, __int64 a3, int a4, int a5)
{
  IPixelFormat **v5; // rsi
  unsigned int v7; // edi
  __int64 v8; // rcx
  int HwRenderTarget; // eax
  _DWORD v13[4]; // [rsp+30h] [rbp-48h] BYREF

  v5 = (IPixelFormat **)((char *)this + 48);
  *((_DWORD *)this + 71) = a5;
  *((_DWORD *)this + 68) = a4;
  v7 = 0;
  v8 = *((_QWORD *)this + 6);
  if ( !v8
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8)
    || (int)IPixelFormat::GetPixelFormatInfo(*v5, (struct PixelFormatInfo *)v13) < 0
    || v13[0] != a4
    || v13[2] != a5 )
  {
    CDisplay::ReleaseHwRenderTarget(this);
  }
  if ( !*v5 )
  {
    HwRenderTarget = CDisplay::CreateHwRenderTarget(this, a2);
    v7 = HwRenderTarget;
    if ( HwRenderTarget < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, HwRenderTarget, 0x2A1u);
  }
  return v7;
}
