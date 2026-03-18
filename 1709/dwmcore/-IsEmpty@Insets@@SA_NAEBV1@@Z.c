/*
 * XREFs of ?IsEmpty@Insets@@SA_NAEBV1@@Z @ 0x180155A94
 * Callers:
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01H@Z @ 0x18009F8A8 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01H@Z.c)
 *     ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801602C0 (-GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Insets::IsEmpty(const struct Insets *a1)
{
  float v1; // xmm1_4
  float v2; // xmm1_4
  float v3; // xmm1_4
  float v4; // xmm1_4
  bool result; // al

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
