/*
 * XREFs of ?HDRConvertWithFakeOverlay@CHDRConversionRenderTarget@@IEAAJPEAUID3D11ShaderResourceView@@II0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801B9564
 * Callers:
 *     ?Present@CHDRConversionRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x1801B9960 (-Present@CHDRConversionRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x1800824B8 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x18011B3B4 (-GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@12PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1801A7E1C (-HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatI.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::HDRConvertWithFakeOverlay(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8)
{
  __int64 v10; // rcx
  __int64 v11; // rax
  CSwapChainBase *v12; // rcx
  __int64 v13; // xmm0_8
  signed int LogicalBackBuffer; // eax
  struct CD3DSurface *v15; // r13
  unsigned int v16; // ebx
  __int64 v17; // r14
  __int64 v18; // rdi
  unsigned int v19; // esi
  char v20; // bl
  double v21; // xmm0_8
  __int64 *v22; // rax
  signed int v23; // eax
  struct CD3DSurface *v27; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-70h] BYREF
  int v29; // [rsp+B0h] [rbp-68h]
  int v30; // [rsp+B4h] [rbp-64h]
  __int64 v31; // [rsp+B8h] [rbp-60h]
  __int64 v32; // [rsp+C0h] [rbp-58h] BYREF
  int v33; // [rsp+C8h] [rbp-50h]
  __int64 v34; // [rsp+D0h] [rbp-48h] BYREF
  int v35; // [rsp+D8h] [rbp-40h]
  int v36; // [rsp+DCh] [rbp-3Ch]
  __int64 v37; // [rsp+E0h] [rbp-38h] BYREF
  int v38; // [rsp+E8h] [rbp-30h]
  int v39; // [rsp+ECh] [rbp-2Ch]
  _BYTE v40[16]; // [rsp+F0h] [rbp-28h] BYREF

  v27 = 0LL;
  v31 = a5;
  v28 = *(_QWORD *)a8;
  v29 = *(_DWORD *)(a8 + 8);
  v10 = *(_QWORD *)(a1 + 952);
  v30 = *(_DWORD *)(a8 + 12);
  v37 = *(_QWORD *)(a1 + 836);
  v38 = *(_DWORD *)(a1 + 844);
  v39 = *(_DWORD *)(a1 + 848);
  v34 = *(_QWORD *)(a1 + 852);
  v35 = *(_DWORD *)(a1 + 860);
  v36 = *(_DWORD *)(a1 + 864);
  v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v10 + 144) + 24LL))(v10 + 144, v40);
  v12 = *(CSwapChainBase **)(a1 + 232);
  v13 = *(_QWORD *)v11;
  LODWORD(v11) = *(_DWORD *)(v11 + 8);
  v32 = v13;
  v33 = v11;
  LogicalBackBuffer = CSwapChainBase::GetLogicalBackBuffer(v12, &v27);
  v15 = v27;
  v16 = LogicalBackBuffer;
  if ( LogicalBackBuffer < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, LogicalBackBuffer, 0x38Cu);
  }
  else
  {
    v17 = *((_QWORD *)v27 + 24);
    v18 = *(_QWORD *)(a1 + 568);
    v19 = *(_DWORD *)(*(_QWORD *)(a1 + 232) + 192LL);
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1);
    v21 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
    v22 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v18 + 24LL))(v18, v40);
    v23 = CD3DDeviceLevel1::HDRConvertWithFakeOverlay(
            *(CSurfaceShaderComposer ***)(a1 + 200),
            a2,
            v22,
            v31,
            a6,
            a7,
            (unsigned int *)&v37,
            (enum DXGI_MODE_ROTATION)*(_DWORD *)(a1 + 884),
            &v32,
            (__int64)&v34,
            v17,
            a3,
            a4,
            v19,
            *(float *)&v21,
            v20,
            (__int64)&v28);
    v16 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, 0x39Du);
  }
  ReleaseInterfaceNoNULL<CD3DSurface>((__int64)v15);
  return v16;
}
