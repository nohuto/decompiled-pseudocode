/*
 * XREFs of ?GetProperty@CCompositionDistantLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18015ACC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionDistantLight::GetProperty(
        CCompositionDistantLight *this,
        int a2,
        struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // edx
  int v6; // eax

  v3 = 0;
  v4 = a2 - 2;
  if ( !v4 )
  {
    *((_DWORD *)a3 + 16) = 70;
    *(_OWORD *)a3 = *((_OWORD *)this + 10);
    goto LABEL_8;
  }
  v5 = v4 - 2;
  if ( !v5 )
  {
    v6 = *((_DWORD *)this + 48);
    *(_QWORD *)a3 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 46), (__m128)*((unsigned int *)this + 47)).m128_u64[0];
    *((_DWORD *)a3 + 2) = v6;
    *((_DWORD *)a3 + 16) = 52;
    goto LABEL_8;
  }
  if ( v5 == 1 )
  {
    *(_DWORD *)a3 = *((_DWORD *)this + 49);
    *((_DWORD *)a3 + 16) = 18;
LABEL_8:
    *((_BYTE *)a3 + 68) = 1;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x7Cu);
  return v3;
}
