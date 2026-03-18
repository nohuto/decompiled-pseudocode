/*
 * XREFs of ?Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@_NPEAPEAV1@@Z @ 0x1800244D8
 * Callers:
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18006CEC8 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x18002472C (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x18002488C (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COffScreenRenderingLayer::Create(
        const struct CResourceTag *a1,
        struct IRenderTarget *a2,
        const struct MilPointAndSizeL *a3,
        char a4,
        struct COffScreenRenderingLayer **a5)
{
  struct IRenderTargetBitmap *v5; // rsi
  __int64 v10; // rax
  __int64 v11; // xmm0_8
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
  CExternalLayer *v16; // rax
  struct COffScreenRenderingLayer *v17; // rbx
  char v19; // [rsp+28h] [rbp-59h]
  int v20; // [rsp+50h] [rbp-31h] BYREF
  struct IRenderTargetBitmap *v21; // [rsp+58h] [rbp-29h] BYREF
  _DWORD v22[4]; // [rsp+60h] [rbp-21h] BYREF
  __int64 v23; // [rsp+70h] [rbp-11h] BYREF
  _BYTE v24[16]; // [rsp+78h] [rbp-9h] BYREF

  v5 = 0LL;
  v20 = 0;
  v21 = 0LL;
  *a5 = 0LL;
  v10 = (*(__int64 (__fastcall **)(struct IRenderTarget *, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v24);
  v11 = *(_QWORD *)v10;
  v22[2] = *(_DWORD *)(v10 + 8);
  v12 = *(_QWORD *)a2;
  v22[0] = v11;
  v22[1] = 1;
  v13 = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *, int *))(v12 + 136))(a2, &v23, &v20);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x24u);
  }
  else
  {
    v19 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a2 + 160LL))(a2);
    v15 = CExternalLayer::CreateRenderTargetBitmap(a1, a3, v22, v23, v20, v19, a4, 1, &v21);
    v14 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x32u);
      v5 = v21;
    }
    else
    {
      v16 = (CExternalLayer *)operator new(0x70uLL);
      v5 = v21;
      v17 = v16;
      if ( v16 )
      {
        CExternalLayer::CExternalLayer(v16, a3, v21);
        *(_QWORD *)v17 = &COffScreenRenderingLayer::`vftable';
      }
      else
      {
        v17 = 0LL;
      }
      *a5 = v17;
      if ( !v17 )
      {
        v14 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x37u);
      }
    }
  }
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v5);
  return v14;
}
