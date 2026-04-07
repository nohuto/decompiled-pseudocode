/*
 * XREFs of ?ComputeFadeValues@CButton@@AEAAXPEAM0@Z @ 0x180074410
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x1800169FC (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x1800744C0 (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CButton::ComputeFadeValues(CButton *this, float *a2, float *a3)
{
  float v3; // xmm4_4
  float v4; // xmm2_4
  float v5; // xmm3_4

  v3 = *((float *)this + 100);
  v4 = *(double *)(*((_QWORD *)this + 49) + 48LL);
  v5 = (float)((float)(v3 - *((float *)this + 95)) * (float)(v4 + v4)) + *((float *)this + 95);
  *a3 = (float)(v3 - v4) * *((float *)this + 96);
  *a2 = v5;
  if ( v5 > v3 )
    *a2 = v3;
}
