/*
 * XREFs of ?IsEmpty@Insets@@SA_NAEBV1@@Z @ 0x18015F9E8
 * Callers:
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01H@Z @ 0x180057750 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01H@Z.c)
 *     ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180171530 (-GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall Insets::IsEmpty(const struct Insets *a1)
{
  float v1; // xmm1_4
  float v2; // xmm1_4
  float v3; // xmm1_4
  float v4; // xmm1_4
  _BOOL8 result; // rax

  v1 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)a1) & _xmm);
  result = 0;
  if ( v1 < 0.0000011920929 )
  {
    v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a1 + 1)) & _xmm);
    if ( v2 < 0.0000011920929 )
    {
      v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a1 + 2)) & _xmm);
      if ( v3 < 0.0000011920929 )
      {
        v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a1 + 3)) & _xmm);
        if ( v4 < 0.0000011920929 )
          return 1;
      }
    }
  }
  return result;
}
