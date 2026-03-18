/*
 * XREFs of ?GetRectangles@CRegionShape@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18006EF50
 * Callers:
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBVCMILMatrix@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV6@W4Enum@MilCompositingMode@@@Z @ 0x180049D78 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 *     ?FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800AD490 (-FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetRectCount@CRegionShape@@QEBAIXZ @ 0x18006F270 (-GetRectCount@CRegionShape@@QEBAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CRegionShape::GetRectangles(CRegionShape *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  int v6; // edi
  char *v7; // rbp
  __int64 v8; // rdi
  char *v9; // rax
  float *v10; // rcx
  char *v11; // rdx
  __m128i v12; // xmm0

  v3 = a3;
  v6 = -2147467259;
  v7 = 0LL;
  if ( a3 && a3 == CRegionShape::GetRectCount(a1) )
  {
    v8 = (unsigned int)v3;
    v9 = (char *)operator new(saturated_mul(v3, 0x10uLL));
    v7 = v9;
    if ( v9 )
    {
      (*(void (__fastcall **)(_QWORD *, char *, _QWORD))(**((_QWORD **)a1 + 1) + 144LL))(
        *((_QWORD **)a1 + 1),
        v9,
        (unsigned int)v3);
      if ( (_DWORD)v3 )
      {
        v10 = (float *)(a2 + 4);
        v11 = &v7[-a2];
        do
        {
          *(v10 - 1) = (float)*(int *)((char *)v10 + (_QWORD)v11 - 4);
          *v10 = (float)*(int *)((char *)v10 + (_QWORD)v11);
          v12 = _mm_cvtsi32_si128(*(_DWORD *)((char *)v10 + (_QWORD)v11 + 4));
          v10 += 4;
          *((_DWORD *)v10 - 3) = _mm_cvtepi32_ps(v12).m128_u32[0];
          *(v10 - 2) = (float)*(int *)((char *)v10 + (_QWORD)v11 - 8);
          --v8;
        }
        while ( v8 );
      }
      v6 = 0;
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xBEu);
    }
  }
  WPF::ProcessHeapImpl::Free(v7);
  return v6 >= 0;
}
