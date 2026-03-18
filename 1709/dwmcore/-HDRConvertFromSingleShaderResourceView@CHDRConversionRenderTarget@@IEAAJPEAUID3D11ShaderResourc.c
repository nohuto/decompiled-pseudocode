/*
 * XREFs of ?HDRConvertFromSingleShaderResourceView@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUPixelFormatInfo@@22@Z @ 0x1801B93DC
 * Callers:
 *     ?Present@CHDRConversionRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x1801B9960 (-Present@CHDRConversionRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x1800824B8 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x18011B3B4 (-GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z.c)
 *     ?HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@AEBUPixelFormatInfo@@1PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1801A7A60 (-HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV-$TMilRect_@HUtagRECT@@UM.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::HDRConvertFromSingleShaderResourceView(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        enum DXGI_MODE_ROTATION a5,
        unsigned int *a6,
        __int64 a7,
        unsigned int *a8,
        __int64 a9)
{
  CSwapChainBase *v12; // rcx
  signed int LogicalBackBuffer; // eax
  struct CD3DSurface *v15; // rbp
  unsigned int v16; // ebx
  __int64 v17; // rsi
  unsigned int v18; // edi
  char v19; // bl
  float v20; // xmm0_4
  signed int v21; // eax
  __int64 v23; // [rsp+80h] [rbp-38h] BYREF
  int v24; // [rsp+88h] [rbp-30h]
  int v25; // [rsp+8Ch] [rbp-2Ch]
  struct CD3DSurface *v26; // [rsp+C0h] [rbp+8h] BYREF

  v26 = 0LL;
  v12 = *(CSwapChainBase **)(a1 + 232);
  v23 = *(_QWORD *)a9;
  v24 = *(_DWORD *)(a9 + 8);
  v25 = *(_DWORD *)(a9 + 12);
  LogicalBackBuffer = CSwapChainBase::GetLogicalBackBuffer(v12, &v26);
  v15 = v26;
  v16 = LogicalBackBuffer;
  if ( LogicalBackBuffer < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, LogicalBackBuffer, 0x347u);
  }
  else
  {
    v17 = *((_QWORD *)v26 + 24);
    v18 = *(_DWORD *)(*(_QWORD *)(a1 + 232) + 192LL);
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1);
    v20 = (*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
    v21 = CD3DDeviceLevel1::HDRConvert(
            *(CSurfaceShaderComposer ***)(a1 + 200),
            a2,
            a3,
            a4,
            a6,
            a5,
            a7,
            a8,
            v17,
            *(_DWORD *)(a1 + 240),
            *(_DWORD *)(a1 + 244),
            v18,
            v20,
            v19,
            (__int64)&v23);
    v16 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v21, 0x356u);
  }
  ReleaseInterfaceNoNULL<CD3DSurface>((__int64)v15);
  return v16;
}
