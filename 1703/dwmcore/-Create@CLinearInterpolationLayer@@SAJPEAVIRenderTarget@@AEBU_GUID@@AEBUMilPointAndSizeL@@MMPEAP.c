/*
 * XREFs of ?Create@CLinearInterpolationLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@MMPEAPEAV1@@Z @ 0x1800AFA28
 * Callers:
 *     ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z @ 0x1800A6430 (-PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N66PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AD84 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CLinearInterpolationLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@MM@Z @ 0x1800AF9DC (--0CLinearInterpolationLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@MM@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearInterpolationLayer::Create(
        struct IRenderTarget *a1,
        struct _GUID *a2,
        const struct MilPointAndSizeL *a3,
        float a4,
        float a5,
        struct CLinearInterpolationLayer **a6)
{
  struct IRenderTargetBitmap *v7; // rdi
  __int64 v8; // rax
  int v11; // eax
  unsigned int v12; // ebx
  char v13; // al
  int RenderTargetBitmap; // eax
  CLinearInterpolationLayer *v15; // rax
  unsigned int v17; // [rsp+28h] [rbp-69h]
  int v18; // [rsp+58h] [rbp-39h] BYREF
  struct IRenderTargetBitmap *v19; // [rsp+60h] [rbp-31h] BYREF
  struct _LUID v20; // [rsp+68h] [rbp-29h] BYREF
  const char *v21; // [rsp+70h] [rbp-21h] BYREF
  int v22; // [rsp+78h] [rbp-19h]
  __int64 v23; // [rsp+80h] [rbp-11h] BYREF
  int v24; // [rsp+88h] [rbp-9h]

  v18 = 0;
  v23 = 0LL;
  v24 = 0;
  v7 = 0LL;
  *a6 = 0LL;
  v8 = *(_QWORD *)a1;
  v19 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *))(v8 + 24))(a1, &v23);
  v12 = v11;
  if ( v11 < 0 )
  {
    v17 = 25;
    goto LABEL_13;
  }
  HIDWORD(v23) = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 32LL))(a1);
  v24 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 40LL))(a1);
  v11 = (*(__int64 (__fastcall **)(struct IRenderTarget *, struct _LUID *, int *, _QWORD))(*(_QWORD *)a1 + 104LL))(
          a1,
          &v20,
          &v18,
          0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    v17 = 29;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v17);
    goto LABEL_8;
  }
  v22 = 52;
  v21 = "DWM Scratch Rendertarget (linear interpolation layer";
  v13 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 168LL))(a1);
  RenderTargetBitmap = CExternalLayer::CreateRenderTargetBitmap(
                         (int)&v21,
                         a2,
                         a3,
                         (__int64)&v23,
                         v20,
                         v18,
                         v13,
                         1,
                         0,
                         (__int64 *)&v19);
  v12 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, 0x2Bu);
    v7 = v19;
  }
  else
  {
    v15 = (CLinearInterpolationLayer *)operator new(0x88uLL);
    v7 = v19;
    if ( v15 )
      v15 = CLinearInterpolationLayer::CLinearInterpolationLayer(v15, a3, v19, a4, a5);
    *a6 = v15;
    if ( !v15 )
    {
      v12 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x31u);
    }
  }
LABEL_8:
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v7);
  return v12;
}
