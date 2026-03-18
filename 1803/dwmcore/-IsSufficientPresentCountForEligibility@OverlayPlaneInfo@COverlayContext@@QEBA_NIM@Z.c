/*
 * XREFs of ?IsSufficientPresentCountForEligibility@OverlayPlaneInfo@COverlayContext@@QEBA_NIM@Z @ 0x1801671E4
 * Callers:
 *     ?IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x180166910 (-IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
char __fastcall COverlayContext::OverlayPlaneInfo::IsSufficientPresentCountForEligibility(
        COverlayContext::OverlayPlaneInfo *this,
        int a2,
        double a3)
{
  char v3; // r8
  int v4; // r9d
  unsigned int v5; // edx
  float v6; // xmm0_4
  unsigned int v7; // eax
  __m128 v8; // rt1
  float v9; // xmm0_4
  unsigned int v10; // ecx
  __m128 v11; // rt1
  float v13; // [rsp+8h] [rbp+8h]
  float v14; // [rsp+8h] [rbp+8h]

  v3 = 0;
  v4 = *(_DWORD *)(*((_QWORD *)this + 3) + 192LL);
  if ( v4 )
  {
    v5 = a2 - v4;
    if ( *((_BYTE *)this + 192) )
    {
      v6 = (float)(int)CCommonRegistryData::m_uOverlayDisqualifyCount * *(float *)&a3;
      if ( COERCE_UNSIGNED_INT(fabs(v6)) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v6 - v6;
        v8.m128_f32[0] = FLOAT_N0_5;
        v7 = (int)v6 - _mm_cmple_ss(*(__m128 *)&a3, v8).m128_u32[0];
      }
      else
      {
        v13 = v6 + 6291456.25;
        v7 = (int)(LODWORD(v13) << 10) >> 11;
      }
      return v5 >= v7;
    }
    else
    {
      v9 = (float)(int)CCommonRegistryData::m_uOverlayQualifyCount * *(float *)&a3;
      if ( COERCE_UNSIGNED_INT(fabs(v9)) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v9 - v9;
        v11.m128_f32[0] = FLOAT_N0_5;
        v10 = (int)v9 - _mm_cmple_ss(*(__m128 *)&a3, v11).m128_u32[0];
      }
      else
      {
        v14 = v9 + 6291456.25;
        v10 = (int)(LODWORD(v14) << 10) >> 11;
      }
      return v5 >= v10;
    }
  }
  return v3;
}
