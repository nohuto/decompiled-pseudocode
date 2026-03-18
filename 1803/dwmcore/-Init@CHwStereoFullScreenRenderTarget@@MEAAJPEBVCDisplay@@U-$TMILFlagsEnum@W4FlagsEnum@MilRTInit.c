/*
 * XREFs of ?Init@CHwStereoFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801F1550
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180021DA4 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18007CA60 (-Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializa.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x @ 0x180148F68 (McTemplateU0x.c)
 *     ?UpdatePixelFormatInfo@CHwStereoFullScreenRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x1801F1890 (-UpdatePixelFormatInfo@CHwStereoFullScreenRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::Init(CHwStereoFullScreenRenderTarget *this, __int64 a2, int a3)
{
  int v5; // eax
  unsigned int v6; // edi
  char v7; // al
  __int64 v8; // rcx
  __int64 v9; // rax
  int ViewOfTexture; // eax
  __int64 v11; // rcx
  int v12; // eax
  _DWORD v14[6]; // [rsp+30h] [rbp-18h] BYREF

  v5 = CHwFullScreenRenderTarget::Init(this, (struct _LUID *)a2, a3);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x26u);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 88LL))(*((_QWORD *)this + 31));
    v8 = *((_QWORD *)this + 28);
    *((_BYTE *)this + 648) = v7;
    v9 = *((_QWORD *)this + 25);
    *((_QWORD *)this + 77) = v9;
    ViewOfTexture = CD3DSurface::CreateViewOfTexture(
                      (struct CD3DResourceManager *)(v8 + 896),
                      *(struct ID3D11Texture2D **)(v9 + 128),
                      0LL,
                      1u,
                      (struct CD3DSurface **)this + 79);
    v6 = ViewOfTexture;
    if ( ViewOfTexture < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ViewOfTexture, 0x3Cu);
    }
    else
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a2 + 152) + 16LL);
      v14[0] = *((_DWORD *)this + 68);
      v14[1] = *((_DWORD *)this + 82);
      v12 = *((_DWORD *)this + 83);
      *((_QWORD *)this + 82) = v11;
      v14[2] = v12;
      CHwStereoFullScreenRenderTarget::UpdatePixelFormatInfo(this, (const struct PixelFormatInfo *)v14);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0x(
          Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_STEREO_SWAPCHAINCREATEEVENT,
          *((_QWORD *)this + 82));
    }
  }
  return v6;
}
