/*
 * XREFs of ?GetProperty@CCompositionSkyBoxBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18015D0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::GetProperty(
        CCompositionSkyBoxBrush *this,
        int a2,
        struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  int v7; // ecx

  v3 = 0;
  v4 = a2 - 6;
  if ( !v4 )
  {
    v5 = (__m128)*((unsigned int *)this + 24);
    v6 = (__m128)*((unsigned int *)this + 25);
    v7 = *((_DWORD *)this + 26);
    *(_QWORD *)a3 = _mm_unpacklo_ps(v5, v6).m128_u64[0];
    *((_DWORD *)a3 + 2) = v7;
    *((_DWORD *)a3 + 16) = 52;
    goto LABEL_6;
  }
  if ( v4 == 1 )
  {
    *(_DWORD *)a3 = *((_DWORD *)this + 28);
    *((_DWORD *)a3 + 16) = 18;
LABEL_6:
    *((_BYTE *)a3 + 68) = 1;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x47u);
  return v3;
}
