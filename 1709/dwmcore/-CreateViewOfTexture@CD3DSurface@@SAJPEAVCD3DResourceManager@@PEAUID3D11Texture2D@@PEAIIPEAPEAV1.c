/*
 * XREFs of ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180082404
 * Callers:
 *     ?GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x18002F910 (-GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180081D60 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAV1@@Z @ 0x180084EF8 (-Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_D.c)
 *     ?Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x1801B2AB0 (-Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z.c)
 *     ?GetFrontBufferSurface@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x1801B7FA0 (-GetFrontBufferSurface@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurfa.c)
 *     ?Init@CHwStereoFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801B8130 (-Init@CHwStereoFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInit.c)
 * Callees:
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x18002E158 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 *     ??0CD3DSurface@@IEAA@PEAUID3D11Texture2D@@@Z @ 0x18002E36C (--0CD3DSurface@@IEAA@PEAUID3D11Texture2D@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x1800824B8 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DSurface::CreateViewOfTexture(
        struct CD3DResourceManager *a1,
        struct ID3D11Texture2D *a2,
        char *a3,
        unsigned int a4,
        struct CD3DSurface **a5)
{
  CD3DSurface *v9; // rax
  CD3DSurface *v10; // rax
  CD3DSurface *v11; // rdi
  signed int v12; // eax
  unsigned int v13; // ebx
  void *retaddr; // [rsp+48h] [rbp+0h]

  *a5 = 0LL;
  v9 = (CD3DSurface *)HeapAlloc(WPF::g_processHeap, 0, 0xF0uLL);
  if ( !v9 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v10 = CD3DSurface::CD3DSurface(v9, a2);
  v11 = v10;
  if ( v10 )
  {
    (**(void (__fastcall ***)(CD3DSurface *))v10)(v10);
    v12 = CD3DSurface::Init(v11, a1, a3, a4);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x8Eu);
    }
    else
    {
      *a5 = v11;
      v11 = 0LL;
    }
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x88u);
  }
  ReleaseInterfaceNoNULL<CD3DSurface>(v11);
  return v13;
}
