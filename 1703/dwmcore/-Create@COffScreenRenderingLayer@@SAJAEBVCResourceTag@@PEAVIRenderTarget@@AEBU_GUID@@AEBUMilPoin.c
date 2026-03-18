/*
 * XREFs of ?Create@COffScreenRenderingLayer@@SAJAEBVCResourceTag@@PEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@_NPEAPEAV1@@Z @ 0x18001BB38
 * Callers:
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18000EB44 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180015244 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N66PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AD84 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COffScreenRenderingLayer::Create(
        const struct CResourceTag *a1,
        struct IRenderTarget *a2,
        struct _GUID *a3,
        const struct MilPointAndSizeL *a4,
        char a5,
        struct COffScreenRenderingLayer **a6)
{
  int v7; // r12d
  struct IRenderTargetBitmap *v8; // rsi
  __int64 v9; // rax
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rax
  char v15; // al
  int RenderTargetBitmap; // eax
  CExternalLayer *v17; // rax
  struct COffScreenRenderingLayer *v18; // rdi
  unsigned int v20; // [rsp+20h] [rbp-59h]
  int v21; // [rsp+50h] [rbp-29h] BYREF
  struct IRenderTargetBitmap *v22; // [rsp+58h] [rbp-21h] BYREF
  struct _LUID v23; // [rsp+60h] [rbp-19h] BYREF
  __int64 v24; // [rsp+68h] [rbp-11h] BYREF
  int v25; // [rsp+70h] [rbp-9h]

  v21 = 0;
  v24 = 0LL;
  v7 = (int)a1;
  v25 = 0;
  v8 = 0LL;
  *a6 = 0LL;
  v9 = *(_QWORD *)a2;
  v22 = 0LL;
  v12 = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *))(v9 + 24))(a2, &v24);
  v13 = v12;
  if ( v12 < 0 )
  {
    v20 = 34;
    goto LABEL_13;
  }
  v14 = *(_QWORD *)a2;
  HIDWORD(v24) = 1;
  v25 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(v14 + 40))(a2);
  v12 = (*(__int64 (__fastcall **)(struct IRenderTarget *, struct _LUID *, int *, _QWORD))(*(_QWORD *)a2 + 104LL))(
          a2,
          &v23,
          &v21,
          0LL);
  v13 = v12;
  if ( v12 < 0 )
  {
    v20 = 38;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v20);
    goto LABEL_8;
  }
  v15 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a2 + 168LL))(a2);
  RenderTargetBitmap = CExternalLayer::CreateRenderTargetBitmap(
                         v7,
                         a3,
                         a4,
                         (__int64)&v24,
                         v23,
                         v21,
                         v15,
                         a5,
                         1,
                         (__int64 *)&v22);
  v13 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, 0x35u);
    v8 = v22;
  }
  else
  {
    v17 = (CExternalLayer *)operator new(0x70uLL);
    v8 = v22;
    v18 = v17;
    if ( v17 )
    {
      CExternalLayer::CExternalLayer(v17, a4, v22);
      *(_QWORD *)v18 = &COffScreenRenderingLayer::`vftable';
    }
    else
    {
      v18 = 0LL;
    }
    *a6 = v18;
    if ( !v18 )
    {
      v13 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Au);
    }
  }
LABEL_8:
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v8);
  return v13;
}
