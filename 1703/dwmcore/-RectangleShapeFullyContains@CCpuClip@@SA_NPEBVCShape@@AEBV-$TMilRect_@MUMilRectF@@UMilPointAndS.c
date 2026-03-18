/*
 * XREFs of ?RectangleShapeFullyContains@CCpuClip@@SA_NPEBVCShape@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800C1400
 * Callers:
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C12E0 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006FF1C (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180094050 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CCpuClip::RectangleShapeFullyContains(__int64 a1, __int128 *a2, __int64 a3)
{
  char v5; // bl
  __int64 (__fastcall *v6)(__int64, __int64, __int64); // rax
  __m128 v8; // [rsp+20h] [rbp-30h] BYREF
  __int128 v9; // [rsp+30h] [rbp-20h] BYREF

  v5 = 0;
  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v6 == CRectanglesShape::GetTightBounds )
    CRectanglesShape::GetTightBounds(a1, (__int64)&v8, 0LL);
  else
    v6(a1, (__int64)&v8, 0LL);
  if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v8.m128_f32) )
  {
    v8 = _mm_add_ps(v8, (__m128)_xmm);
    if ( a3 )
      CMILMatrix::Transform2DBoundsHelper<0>(a3, (__int64)a2, (float *)&v9);
    else
      v9 = *a2;
    return TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(v8.m128_f32, (float *)&v9);
  }
  return v5;
}
