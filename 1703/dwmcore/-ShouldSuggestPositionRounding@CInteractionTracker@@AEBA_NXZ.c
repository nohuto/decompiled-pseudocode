/*
 * XREFs of ?ShouldSuggestPositionRounding@CInteractionTracker@@AEBA_NXZ @ 0x18016E8A4
 * Callers:
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x18016CF50 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker::ShouldSuggestPositionRounding(CInteractionTracker *this)
{
  int v1; // edx
  bool result; // al
  float *v3; // rcx
  float v4; // xmm1_4
  float v5; // xmm1_4

  v1 = *((_DWORD *)this + 35);
  result = 0;
  if ( !v1 )
    return 1;
  if ( v1 == 1 )
  {
    v3 = (float *)*((_QWORD *)this + 64);
    if ( v3 )
    {
      if ( v3[91] < 10.0 && v3[92] < 10.0 )
      {
        v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v3[94]) & _xmm);
        if ( v4 <= 0.0000011920929 )
        {
          v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v3[95]) & _xmm);
          if ( v5 <= 0.0000011920929 )
            return 1;
        }
      }
    }
  }
  return result;
}
