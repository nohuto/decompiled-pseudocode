/*
 * XREFs of ?GetRectangles@CRegionShape@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18000B7B0
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180008334 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U-$TMIL.c)
 * Callees:
 *     ?GetRectCount@CRegionShape@@QEBAIXZ @ 0x18000B78C (-GetRectCount@CRegionShape@@QEBAIXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CRegionShape::GetRectangles(CRegionShape *a1, __int64 a2, unsigned int a3)
{
  char *v3; // rsi
  unsigned __int64 v4; // rdi
  int v7; // ebx
  __int64 v8; // rbx
  char *v9; // rax
  float *v10; // rax
  char *v11; // rcx
  __m128i v12; // xmm0

  v3 = 0LL;
  v4 = a3;
  v7 = -2147467259;
  if ( a3 && a3 == (unsigned int)CRegionShape::GetRectCount(a1) )
  {
    v8 = (unsigned int)v4;
    v9 = (char *)operator new(saturated_mul(v4, 0x10uLL));
    v3 = v9;
    if ( v9 )
    {
      (*(void (__fastcall **)(_QWORD *, char *, _QWORD))(**((_QWORD **)a1 + 2) + 144LL))(
        *((_QWORD **)a1 + 2),
        v9,
        (unsigned int)v4);
      if ( (_DWORD)v4 )
      {
        v10 = (float *)(a2 + 4);
        v11 = &v3[-a2];
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
      v7 = 0;
    }
    else
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xE5u);
    }
  }
  operator delete(v3);
  return v7 >= 0;
}
