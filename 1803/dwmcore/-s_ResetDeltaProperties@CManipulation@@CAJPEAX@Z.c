/*
 * XREFs of ?s_ResetDeltaProperties@CManipulation@@CAJPEAX@Z @ 0x18019AF60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CManipulation::s_ResetDeltaProperties(char *a1)
{
  unsigned int v1; // ebx
  char v2; // dl

  v1 = a1 == 0LL ? 0x80070057 : 0;
  if ( a1 )
  {
    v2 = a1[440];
    if ( (v2 & 1) != 0 )
    {
      v2 &= ~1u;
      *(_QWORD *)(a1 + 268) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      *((_DWORD *)a1 + 69) = 0;
      a1[440] = v2;
    }
    if ( (v2 & 2) != 0 )
    {
      *(_QWORD *)(a1 + 292) = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
      *((_DWORD *)a1 + 75) = 1065353216;
      a1[440] = v2 & 0xFD;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x41Eu);
  }
  return v1;
}
