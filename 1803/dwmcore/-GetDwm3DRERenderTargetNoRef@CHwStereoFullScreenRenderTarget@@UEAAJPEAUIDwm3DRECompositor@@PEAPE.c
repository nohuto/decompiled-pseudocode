/*
 * XREFs of ?GetDwm3DRERenderTargetNoRef@CHwStereoFullScreenRenderTarget@@UEAAJPEAUIDwm3DRECompositor@@PEAPEAUIDwm3DRERenderTarget@@@Z @ 0x1801F1330
 * Callers:
 *     ?GetDwm3DRERenderTargetNoRef@CHwStereoFullScreenRenderTarget@@WNI@EAAJPEAUIDwm3DRECompositor@@PEAPEAUIDwm3DRERenderTarget@@@Z @ 0x1800DE2E0 (-GetDwm3DRERenderTargetNoRef@CHwStereoFullScreenRenderTarget@@WNI@EAAJPEAUIDwm3DRECompositor@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??4?$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradientStop@@@Z @ 0x1801B3050 (--4-$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradi.c)
 *     ?GetDwm3DRERenderTargetNoRef@CHwSurfaceRenderTarget@@UEAAJPEAUIDwm3DRECompositor@@PEAPEAUIDwm3DRERenderTarget@@@Z @ 0x1801ED8F0 (-GetDwm3DRERenderTargetNoRef@CHwSurfaceRenderTarget@@UEAAJPEAUIDwm3DRECompositor@@PEAPEAUIDwm3DR.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::GetDwm3DRERenderTargetNoRef(
        CHwStereoFullScreenRenderTarget *this,
        struct IDwm3DRECompositor *a2,
        struct IDwm3DRERenderTarget **a3)
{
  int Dwm3DRERenderTargetNoRef; // eax
  unsigned int v6; // edi
  int v7; // edx
  __int64 *v8; // rcx

  Dwm3DRERenderTargetNoRef = CHwSurfaceRenderTarget::GetDwm3DRERenderTargetNoRef(this, a2, a3);
  v6 = Dwm3DRERenderTargetNoRef;
  if ( Dwm3DRERenderTargetNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Dwm3DRERenderTargetNoRef, 0x83u);
    return v6;
  }
  v7 = *((_DWORD *)this + 152);
  if ( v7 >= 0 )
  {
    if ( v7 <= 1 )
    {
      v8 = (__int64 *)((char *)this + 624);
    }
    else
    {
      if ( v7 != 2 )
        return v6;
      v8 = (__int64 *)((char *)this + 640);
    }
    if ( !*v8 )
      wil::com_ptr_t<CColorGradientStop,wil::err_returncode_policy>::operator=(v8, (__int64)*a3);
  }
  return v6;
}
