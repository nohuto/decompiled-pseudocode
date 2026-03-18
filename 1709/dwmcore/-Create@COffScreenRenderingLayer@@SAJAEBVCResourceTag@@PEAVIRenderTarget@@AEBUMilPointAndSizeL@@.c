/*
 * XREFs of ?Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@_NPEAPEAV1@@Z @ 0x1800BF430
 * Callers:
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18003E870 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N55PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800812B8 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFo.c)
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180081418 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
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
  signed int v13; // eax
  unsigned int v14; // edi
  char v15; // al
  signed int v16; // eax
  CExternalLayer *v17; // rax
  struct COffScreenRenderingLayer *v18; // rbx
  unsigned int v20; // [rsp+50h] [rbp-31h] BYREF
  struct IRenderTargetBitmap *v21; // [rsp+58h] [rbp-29h] BYREF
  __int64 v22; // [rsp+60h] [rbp-21h] BYREF
  int v23; // [rsp+68h] [rbp-19h]
  __int64 v24; // [rsp+70h] [rbp-11h] BYREF
  _BYTE v25[16]; // [rsp+78h] [rbp-9h] BYREF

  v5 = 0LL;
  v20 = 0;
  v21 = 0LL;
  *a5 = 0LL;
  v10 = (*(__int64 (__fastcall **)(struct IRenderTarget *, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v25);
  v11 = *(_QWORD *)v10;
  v23 = *(_DWORD *)(v10 + 8);
  v12 = *(_QWORD *)a2;
  v22 = (unsigned int)v11 | 0x100000000LL;
  v13 = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *, unsigned int *))(v12 + 88))(a2, &v24, &v20);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x24u);
  }
  else
  {
    v15 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a2 + 152LL))(a2);
    v16 = CExternalLayer::CreateRenderTargetBitmap((__int64)a1, a3, &v22, v24, v20, v15, a4, 1, (__int64 *)&v21);
    v14 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x32u);
      v5 = v21;
    }
    else
    {
      v17 = (CExternalLayer *)operator new(0x70uLL);
      v5 = v21;
      v18 = v17;
      if ( v17 )
      {
        CExternalLayer::CExternalLayer(v17, a3, v21);
        *(_QWORD *)v18 = &COffScreenRenderingLayer::`vftable';
      }
      else
      {
        v18 = 0LL;
      }
      *a5 = v18;
      if ( !v18 )
      {
        v14 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x37u);
      }
    }
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v5);
  return v14;
}
