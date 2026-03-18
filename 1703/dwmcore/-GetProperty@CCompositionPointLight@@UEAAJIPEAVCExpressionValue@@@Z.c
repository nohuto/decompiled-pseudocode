/*
 * XREFs of ?GetProperty@CCompositionPointLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180173820
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
  int v8; // eax
  int v9; // xmm0_4

  v3 = 0;
  v4 = a2 - 1;
  if ( !v4 )
  {
    v9 = *((_DWORD *)this + 28);
    goto LABEL_12;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v9 = *((_DWORD *)this + 29);
    goto LABEL_12;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v9 = *((_DWORD *)this + 30);
LABEL_12:
    *(_DWORD *)a3 = v9;
    *((_DWORD *)a3 + 16) = 18;
    goto LABEL_13;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    *((_DWORD *)a3 + 16) = 70;
    *(_OWORD *)a3 = *(_OWORD *)((char *)this + 124);
    goto LABEL_13;
  }
  if ( v7 == 2 )
  {
    v8 = *((_DWORD *)this + 40);
    *(_QWORD *)a3 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 38), (__m128)*((unsigned int *)this + 39)).m128_u64[0];
    *((_DWORD *)a3 + 2) = v8;
    *((_DWORD *)a3 + 16) = 52;
LABEL_13:
    *((_BYTE *)a3 + 68) = 1;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x84u);
  return v3;
}
