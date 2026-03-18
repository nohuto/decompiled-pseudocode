/*
 * XREFs of ?Init@CHwStereoFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801B8130
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180082404 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x @ 0x180126C58 (McTemplateU0x.c)
 *     ?UpdatePixelFormatInfo@CHwStereoFullScreenRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x1801B8410 (-UpdatePixelFormatInfo@CHwStereoFullScreenRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801B8790 (-Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializa.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::Init(CHwStereoFullScreenRenderTarget *this, __int64 a2)
{
  signed int v4; // eax
  unsigned int v5; // edi
  char v6; // al
  __int64 v7; // rcx
  __int64 v8; // rax
  signed int ViewOfTexture; // eax
  __int64 v10; // rcx
  int v11; // eax
  _DWORD v13[6]; // [rsp+30h] [rbp-18h] BYREF

  v4 = CHwFullScreenRenderTarget::Init(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x26u);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 29) + 80LL))(*((_QWORD *)this + 29));
    v7 = *((_QWORD *)this + 25);
    *((_BYTE *)this + 592) = v6;
    v8 = *((_QWORD *)this + 23);
    *((_QWORD *)this + 72) = v8;
    ViewOfTexture = CD3DSurface::CreateViewOfTexture(
                      (struct CD3DResourceManager *)(v7 + 896),
                      *(struct ID3D11Texture2D **)(v8 + 128),
                      0LL,
                      1u,
                      (struct CD3DSurface **)this + 73);
    v5 = ViewOfTexture;
    if ( ViewOfTexture < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ViewOfTexture, 0x3Cu);
    }
    else
    {
      v10 = *(_QWORD *)(*(_QWORD *)(a2 + 128) + 16LL);
      v13[0] = *((_DWORD *)this + 64);
      v13[1] = *((_DWORD *)this + 78);
      v11 = *((_DWORD *)this + 79);
      *((_QWORD *)this + 75) = v10;
      v13[2] = v11;
      CHwStereoFullScreenRenderTarget::UpdatePixelFormatInfo(this, (const struct PixelFormatInfo *)v13);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0x(
          Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_STEREO_SWAPCHAINCREATEEVENT,
          *((_QWORD *)this + 75));
    }
  }
  return v5;
}
