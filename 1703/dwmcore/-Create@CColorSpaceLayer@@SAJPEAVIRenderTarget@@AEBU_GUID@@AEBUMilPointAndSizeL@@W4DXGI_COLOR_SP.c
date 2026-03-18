/*
 * XREFs of ?Create@CColorSpaceLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x180157F58
 * Callers:
 *     ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18014D35C (-PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ??0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z @ 0x180015244 (--0CExternalLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N66PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AD84 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorSpaceLayer::Create(
        struct IRenderTarget *a1,
        struct _GUID *a2,
        const struct MilPointAndSizeL *a3,
        enum DXGI_COLOR_SPACE_TYPE a4,
        struct CColorSpaceLayer **a5)
{
  struct CColorSpaceLayer **v5; // r14
  __int64 v8; // rax
  struct IRenderTargetBitmap *v9; // rsi
  int v11; // eax
  unsigned int v12; // edi
  char v13; // al
  int RenderTargetBitmap; // eax
  CExternalLayer *v15; // rax
  CExternalLayer *v16; // rbx
  _DWORD v18[4]; // [rsp+50h] [rbp-20h] BYREF
  const char *v19; // [rsp+60h] [rbp-10h] BYREF
  int v20; // [rsp+68h] [rbp-8h]
  struct IRenderTargetBitmap *v21; // [rsp+A0h] [rbp+30h] BYREF
  int v22; // [rsp+B8h] [rbp+48h] BYREF

  v5 = a5;
  v22 = 0;
  v18[1] = 0;
  v18[2] = a4;
  *a5 = 0LL;
  v8 = *(_QWORD *)a1;
  v9 = 0LL;
  v21 = 0LL;
  v18[0] = 28;
  v11 = (*(__int64 (__fastcall **)(struct IRenderTarget *, struct CColorSpaceLayer ***, int *, _QWORD))(v8 + 104))(
          a1,
          &a5,
          &v22,
          0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1Eu);
  }
  else
  {
    v20 = 43;
    v19 = "DWM Scratch Rendertarget (colorspace layer)";
    v13 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 168LL))(a1);
    RenderTargetBitmap = CExternalLayer::CreateRenderTargetBitmap(
                           (int)&v19,
                           a2,
                           a3,
                           (__int64)v18,
                           (struct _LUID)a5,
                           v22,
                           v13,
                           1,
                           0,
                           (__int64 *)&v21);
    v12 = RenderTargetBitmap;
    if ( RenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, 0x29u);
      v9 = v21;
    }
    else
    {
      v15 = (CExternalLayer *)operator new(0x78uLL);
      v9 = v21;
      v16 = v15;
      if ( v15 )
      {
        CExternalLayer::CExternalLayer(v15, a3, v21);
        *(_QWORD *)v16 = &CColorSpaceLayer::`vftable';
      }
      else
      {
        v16 = 0LL;
      }
      *v5 = v16;
      if ( !v16 )
      {
        v12 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2Du);
      }
    }
  }
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v9);
  return v12;
}
