/*
 * XREFs of ?GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z @ 0x18003F7F8
 * Callers:
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18003A700 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180070AE0 (-Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilR.c)
 *     ?GetBackBuffer@CHwDisplayRenderTarget@@UEAAJPEAPEAVCD3DSurface@@@Z @ 0x18019C440 (-GetBackBuffer@CHwDisplayRenderTarget@@UEAAJPEAPEAVCD3DSurface@@@Z.c)
 *     ?HDRConvertFromIntermediateTargetBitmap@CHwFullScreenRenderTarget@@UEAAJPEAUtagRECT@@@Z @ 0x1801A0D70 (-HDRConvertFromIntermediateTargetBitmap@CHwFullScreenRenderTarget@@UEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwapChainBase::GetBackBuffer(CSwapChainBase *this, __int64 a2, struct CD3DSurface **a3)
{
  unsigned int v5; // ebx
  struct CD3DSurface *v6; // rcx

  v5 = 0;
  if ( (*(unsigned int (__fastcall **)(CSwapChainBase *))(*(_QWORD *)this + 296LL))(this) )
  {
    v6 = *(struct CD3DSurface **)(*((_QWORD *)this + 33)
                                + 8LL
                                * (*(unsigned int (__fastcall **)(CSwapChainBase *, _QWORD))(*(_QWORD *)this + 312LL))(
                                    this,
                                    0LL));
    *a3 = v6;
    (**(void (__fastcall ***)(struct CD3DSurface *))v6)(v6);
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x152u);
  }
  return v5;
}
