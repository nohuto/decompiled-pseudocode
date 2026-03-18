/*
 * XREFs of ?IsSufficientPresentCountForEligibility@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@IM@Z @ 0x180151AA0
 * Callers:
 *     ?IsEligibleForOverlays@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180151368 (-IsEligibleForOverlays@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall COverlayContext::IsSufficientPresentCountForEligibility(
        COverlayContext *this,
        struct COverlayContext::OverlayPlaneInfo *a2,
        int a3,
        float a4)
{
  __m128 v4; // xmm2
  char v5; // cl
  int v6; // r9d
  unsigned int v7; // r8d
  float v8; // xmm0_4
  unsigned int v9; // eax
  __m128 v10; // rt1
  float v11; // xmm0_4
  unsigned int v12; // edx
  __m128 v13; // rt1
  float v15; // [rsp+8h] [rbp+8h]
  float v16; // [rsp+8h] [rbp+8h]

  v5 = 0;
  v6 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 192LL);
  if ( v6 )
  {
    v7 = a3 - v6;
    if ( *((_BYTE *)a2 + 184) )
    {
      v8 = (float)(int)CCommonRegistryData::m_uOverlayDisqualifyCount * a4;
      if ( COERCE_UNSIGNED_INT(fabs(v8)) > 0x497FFFF0 )
      {
        v4.m128_f32[0] = (float)(int)v8 - v8;
        v10.m128_f32[0] = FLOAT_N0_5;
        v9 = (int)v8 - _mm_cmple_ss(v4, v10).m128_u32[0];
      }
      else
      {
        v15 = v8 + 6291456.25;
        v9 = (int)(LODWORD(v15) << 10) >> 11;
      }
      return v7 >= v9;
    }
    else
    {
      v11 = (float)(int)CCommonRegistryData::m_uOverlayQualifyCount * a4;
      if ( COERCE_UNSIGNED_INT(fabs(v11)) > 0x497FFFF0 )
      {
        v4.m128_f32[0] = (float)(int)v11 - v11;
        v13.m128_f32[0] = FLOAT_N0_5;
        v12 = (int)v11 - _mm_cmple_ss(v4, v13).m128_u32[0];
      }
      else
      {
        v16 = v11 + 6291456.25;
        v12 = (int)(LODWORD(v16) << 10) >> 11;
      }
      return v7 >= v12;
    }
  }
  return v5;
}
