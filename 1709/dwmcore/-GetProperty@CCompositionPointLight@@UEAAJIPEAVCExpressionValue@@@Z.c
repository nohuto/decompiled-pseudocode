/*
 * XREFs of ?GetProperty@CCompositionPointLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18015C090
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionPointLight::GetProperty(
        CCompositionPointLight *this,
        int a2,
        struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // xmm0_4
  int v10; // eax

  v3 = 0;
  v4 = a2 - 2;
  if ( !v4 )
  {
    v9 = *((_DWORD *)this + 40);
    goto LABEL_14;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v9 = *((_DWORD *)this + 41);
    goto LABEL_14;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v9 = *((_DWORD *)this + 42);
    goto LABEL_14;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    *((_DWORD *)a3 + 16) = 70;
    *(_OWORD *)a3 = *(_OWORD *)((char *)this + 172);
    goto LABEL_15;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    v10 = *((_DWORD *)this + 52);
    *(_QWORD *)a3 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 50), (__m128)*((unsigned int *)this + 51)).m128_u64[0];
    *((_DWORD *)a3 + 2) = v10;
    *((_DWORD *)a3 + 16) = 52;
LABEL_15:
    *((_BYTE *)a3 + 68) = 1;
    return v3;
  }
  if ( v8 == 1 )
  {
    v9 = *((_DWORD *)this + 53);
LABEL_14:
    *(_DWORD *)a3 = v9;
    *((_DWORD *)a3 + 16) = 18;
    goto LABEL_15;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x8Cu);
  return v3;
}
