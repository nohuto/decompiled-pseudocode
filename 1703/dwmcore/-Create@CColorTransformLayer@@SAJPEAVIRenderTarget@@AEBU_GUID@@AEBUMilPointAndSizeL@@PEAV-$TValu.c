/*
 * XREFs of ?Create@CColorTransformLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@PEAPEAV1@@Z @ 0x180158258
 * Callers:
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@@Z @ 0x18014D448 (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180015244 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N66PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AD84 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorTransformLayer::Create(
        __int64 *a1,
        struct _GUID *a2,
        const struct MilPointAndSizeL *a3,
        __int64 a4,
        CExternalLayer **a5)
{
  struct IRenderTargetBitmap *v6; // rsi
  __int64 v8; // rax
  int v11; // eax
  unsigned int v12; // ebx
  char v13; // al
  int RenderTargetBitmap; // eax
  CExternalLayer *v15; // rax
  CExternalLayer *v16; // rdi
  unsigned int v18; // [rsp+20h] [rbp-51h]
  int v19; // [rsp+50h] [rbp-21h] BYREF
  struct IRenderTargetBitmap *v20; // [rsp+58h] [rbp-19h] BYREF
  struct _LUID v21; // [rsp+60h] [rbp-11h] BYREF
  const char *v22; // [rsp+68h] [rbp-9h] BYREF
  int v23; // [rsp+70h] [rbp-1h]
  __int64 v24; // [rsp+78h] [rbp+7h] BYREF
  int v25; // [rsp+80h] [rbp+Fh]

  v19 = 0;
  v24 = 0LL;
  v25 = 0;
  v6 = 0LL;
  *a5 = 0LL;
  v8 = *a1;
  v20 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v8 + 24))(a1, &v24);
  v12 = v11;
  if ( v11 < 0 )
  {
    v18 = 24;
    goto LABEL_12;
  }
  HIDWORD(v24) = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 32))(a1);
  v25 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 40))(a1);
  v11 = (*(__int64 (__fastcall **)(__int64 *, struct _LUID *, int *, _QWORD))(*a1 + 104))(a1, &v21, &v19, 0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    v18 = 29;
LABEL_12:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v18);
    goto LABEL_13;
  }
  v23 = 48;
  v22 = "DWM Scratch Rendertarget (color transform layer)";
  v13 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 168))(a1);
  RenderTargetBitmap = CExternalLayer::CreateRenderTargetBitmap(
                         (int)&v22,
                         a2,
                         a3,
                         (__int64)&v24,
                         v21,
                         v19,
                         v13,
                         1,
                         0,
                         (__int64 *)&v20);
  v12 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, 0x2Bu);
    v6 = v20;
  }
  else
  {
    v15 = (CExternalLayer *)operator new(0x78uLL);
    v6 = v20;
    v16 = v15;
    if ( v15 )
    {
      CExternalLayer::CExternalLayer(v15, a3, v20);
      *((_QWORD *)v16 + 14) = a4;
      *(_QWORD *)v16 = &CColorTransformLayer::`vftable';
    }
    else
    {
      v16 = 0LL;
    }
    *a5 = v16;
    if ( !v16 )
    {
      v12 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x30u);
    }
  }
LABEL_13:
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v6);
  return v12;
}
