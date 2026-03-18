/*
 * XREFs of ?GetProperty@CDropShadow@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180171C40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDropShadow::GetProperty(CDropShadow *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // edx
  int v6; // xmm0_4
  int v7; // eax

  v3 = 0;
  if ( !a2 )
  {
    v6 = *((_DWORD *)this + 24);
    goto LABEL_10;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    *((_DWORD *)a3 + 16) = 70;
    *(_OWORD *)a3 = *((_OWORD *)this + 5);
    goto LABEL_11;
  }
  v5 = v4 - 2;
  if ( !v5 )
  {
    v7 = *((_DWORD *)this + 28);
    *(_QWORD *)a3 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 26), (__m128)*((unsigned int *)this + 27)).m128_u64[0];
    *((_DWORD *)a3 + 2) = v7;
    *((_DWORD *)a3 + 16) = 52;
LABEL_11:
    *((_BYTE *)a3 + 68) = 1;
    return v3;
  }
  if ( v5 == 1 )
  {
    v6 = *((_DWORD *)this + 25);
LABEL_10:
    *(_DWORD *)a3 = v6;
    *((_DWORD *)a3 + 16) = 18;
    goto LABEL_11;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x45u);
  return v3;
}
