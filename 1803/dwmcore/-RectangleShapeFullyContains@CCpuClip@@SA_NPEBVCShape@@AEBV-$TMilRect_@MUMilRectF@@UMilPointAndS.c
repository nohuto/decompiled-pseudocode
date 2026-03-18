/*
 * XREFs of ?RectangleShapeFullyContains@CCpuClip@@SA_NPEBVCShape@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18008AB74
 * Callers:
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008AA4C (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 * Callees:
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180064200 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800651F0 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CCpuClip::RectangleShapeFullyContains(__int64 a1, struct D2D_RECT_F *a2, CMILMatrix *a3)
{
  char v5; // bl
  __int64 (__fastcall *v6)(__int64, __int64, CMILMatrix *); // rax
  struct D2D_RECT_F v8; // [rsp+20h] [rbp-30h] BYREF
  struct D2D_RECT_F v9; // [rsp+30h] [rbp-20h] BYREF

  v5 = 0;
  v6 = *(__int64 (__fastcall **)(__int64, __int64, CMILMatrix *))(*(_QWORD *)a1 + 32LL);
  if ( v6 == CRectanglesShape::GetTightBounds )
    CRectanglesShape::GetTightBounds(a1, (__int64)&v8, 0LL);
  else
    v6(a1, (__int64)&v8, 0LL);
  if ( !IsEmpty(&v8) )
  {
    v8.left = v8.left + -0.015625;
    v8.top = v8.top + -0.015625;
    v8.right = v8.right + 0.015625;
    v8.bottom = v8.bottom + 0.015625;
    if ( a3 )
      CMILMatrix::Transform2DBoundsHelper<0>(a3);
    else
      v9 = *a2;
    return TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((__int64)&v8, &v9);
  }
  return v5;
}
