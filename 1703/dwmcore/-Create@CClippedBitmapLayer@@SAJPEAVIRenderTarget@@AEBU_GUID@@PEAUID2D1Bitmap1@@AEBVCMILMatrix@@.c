/*
 * XREFs of ?Create@CClippedBitmapLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@PEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@PEAPEAV1@@Z @ 0x1801576CC
 * Callers:
 *     ?PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@@Z @ 0x18014D2B0 (-PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@U_LUID@@VDisplayId@@_N66PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AD84 (-CreateRenderTargetBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBU_GUID@@AEBUMilPointAndSizeL@@.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800729E4 (-GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??0CClippedBitmapLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@AEBUMilPoint2F@@PEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@@Z @ 0x1801574CC (--0CClippedBitmapLayer@@IEAA@AEBUMilPointAndSizeL@@PEAVIRenderTargetBitmap@@AEBUMilPoint2F@@PEAU.c)
 */

__int64 __fastcall CClippedBitmapLayer::Create(
        struct IRenderTarget *a1,
        const struct _GUID *a2,
        struct ID2D1Bitmap1 *a3,
        const struct CMILMatrix *a4,
        struct CShape *a5,
        struct CClippedBitmapLayer **a6)
{
  struct IRenderTargetBitmap *v8; // rdi
  int TightBoundsNoBadNumber; // eax
  __m128 v11; // xmm4
  unsigned int v12; // ebx
  __m128 v13; // xmm0
  int v14; // eax
  __m128 v15; // xmm2
  int v16; // eax
  __int64 v17; // rax
  char v18; // al
  int RenderTargetBitmap; // eax
  CClippedBitmapLayer *v20; // rax
  unsigned int v22; // [rsp+20h] [rbp-89h]
  int v23; // [rsp+54h] [rbp-55h] BYREF
  struct IRenderTargetBitmap *v24; // [rsp+58h] [rbp-51h] BYREF
  unsigned __int64 v25; // [rsp+60h] [rbp-49h] BYREF
  _DWORD v26[4]; // [rsp+68h] [rbp-41h] BYREF
  struct _LUID v27; // [rsp+78h] [rbp-31h] BYREF
  struct _GUID *v28; // [rsp+80h] [rbp-29h]
  const char *v29; // [rsp+88h] [rbp-21h] BYREF
  int v30; // [rsp+90h] [rbp-19h]
  __int64 v31; // [rsp+98h] [rbp-11h] BYREF
  int v32; // [rsp+A0h] [rbp-9h]
  __m128 v33; // [rsp+A8h] [rbp-1h] BYREF

  v23 = 0;
  v28 = (struct _GUID *)a2;
  v8 = 0LL;
  *a6 = 0LL;
  v24 = 0LL;
  v31 = 0LL;
  v32 = 0;
  TightBoundsNoBadNumber = CShape::GetTightBoundsNoBadNumber(a5, &v33, 0LL);
  v12 = TightBoundsNoBadNumber;
  if ( TightBoundsNoBadNumber < 0 )
  {
    v22 = 27;
    goto LABEL_13;
  }
  v13 = (__m128)v33.m128_u32[2];
  v26[0] = 0;
  v26[1] = 0;
  v25 = v33.m128_u64[0];
  v14 = (int)(float)(v33.m128_f32[2] - v33.m128_f32[0]);
  v15.m128_f32[0] = v33.m128_f32[2] - v33.m128_f32[0];
  v13.m128_f32[0] = (float)v14;
  v26[2] = v14 - _mm_cmplt_ss(v13, v15).m128_u32[0];
  v13.m128_f32[0] = v33.m128_f32[3] - v33.m128_f32[1];
  v16 = (int)(float)(v33.m128_f32[3] - v33.m128_f32[1]);
  v11.m128_f32[0] = (float)v16;
  v26[3] = v16 - _mm_cmplt_ss(v11, v13).m128_u32[0];
  TightBoundsNoBadNumber = (*(__int64 (__fastcall **)(struct IRenderTarget *, __int64 *))(*(_QWORD *)a1 + 24LL))(
                             a1,
                             &v31);
  v12 = TightBoundsNoBadNumber;
  if ( TightBoundsNoBadNumber < 0 )
  {
    v22 = 43;
    goto LABEL_13;
  }
  v17 = *(_QWORD *)a1;
  HIDWORD(v31) = 1;
  v32 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(v17 + 40))(a1);
  TightBoundsNoBadNumber = (*(__int64 (__fastcall **)(struct IRenderTarget *, struct _LUID *, int *, _QWORD))(*(_QWORD *)a1 + 104LL))(
                             a1,
                             &v27,
                             &v23,
                             0LL);
  v12 = TightBoundsNoBadNumber;
  if ( TightBoundsNoBadNumber < 0 )
  {
    v22 = 47;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBoundsNoBadNumber, v22);
    goto LABEL_14;
  }
  v30 = 37;
  v29 = "DWM Scratch Rendertarget (clip layer)";
  v18 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 168LL))(a1);
  RenderTargetBitmap = CExternalLayer::CreateRenderTargetBitmap(
                         (int)&v29,
                         v28,
                         v26,
                         (__int64)&v31,
                         v27,
                         v23,
                         v18,
                         1,
                         0,
                         (__int64 *)&v24);
  v12 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderTargetBitmap, 0x3Du);
    v8 = v24;
  }
  else
  {
    v20 = (CClippedBitmapLayer *)operator new(0xD8uLL);
    v8 = v24;
    if ( v20 )
      v20 = CClippedBitmapLayer::CClippedBitmapLayer(
              v20,
              (const struct MilPointAndSizeL *)v26,
              v24,
              (const struct MilPoint2F *)&v25,
              a3,
              a4,
              a5);
    *a6 = v20;
    if ( !v20 )
    {
      v12 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x45u);
    }
  }
LABEL_14:
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v8);
  return v12;
}
