/*
 * XREFs of ?Init@CHwStereoFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801A05F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180070AE0 (-Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilR.c)
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x1800C54B8 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_x @ 0x18013BE18 (Template_x.c)
 *     ?UpdatePixelFormatInfo@CHwStereoFullScreenRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x1801A0850 (-UpdatePixelFormatInfo@CHwStereoFullScreenRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::Init(
        CHwStereoFullScreenRenderTarget *this,
        __int64 a2,
        CDisplay *a3,
        int a4)
{
  int v6; // eax
  unsigned int v7; // edi
  char v8; // al
  __int64 v9; // rcx
  __int64 v10; // rax
  int ViewOfTexture; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  _DWORD v16[6]; // [rsp+30h] [rbp-18h] BYREF

  v6 = CHwFullScreenRenderTarget::Init(this, a2, a3, a4);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x2Au);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 80LL))(*((_QWORD *)this + 27));
    v9 = *((_QWORD *)this + 23);
    *((_BYTE *)this + 400) = v8;
    v10 = *((_QWORD *)this + 21);
    *((_QWORD *)this + 48) = v10;
    ViewOfTexture = CD3DSurface::CreateViewOfTexture(
                      (struct CD3DResourceManager *)(v9 + 928),
                      *(struct ID3D11Texture2D **)(v10 + 136),
                      0LL,
                      1u,
                      (struct CD3DSurface **)this + 49);
    v7 = ViewOfTexture;
    if ( ViewOfTexture < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ViewOfTexture, 0x40u);
    }
    else
    {
      v12 = *(_QWORD *)(*((_QWORD *)a3 + 16) + 16LL);
      v16[0] = *((_DWORD *)this + 60);
      v16[1] = *((_DWORD *)this + 74);
      v13 = *((_DWORD *)this + 75);
      *((_QWORD *)this + 51) = v12;
      v16[2] = v13;
      CHwStereoFullScreenRenderTarget::UpdatePixelFormatInfo(this, (const struct PixelFormatInfo *)v16);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_x(v14, &EVTDESC_ETWGUID_STEREO_SWAPCHAINCREATEEVENT, *((_QWORD *)this + 51));
    }
  }
  return v7;
}
