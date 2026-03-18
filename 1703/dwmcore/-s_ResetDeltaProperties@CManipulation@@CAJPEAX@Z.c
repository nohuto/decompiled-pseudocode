/*
 * XREFs of ?s_ResetDeltaProperties@CManipulation@@CAJPEAX@Z @ 0x1801693B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CManipulation::s_ResetDeltaProperties(_BYTE *a1)
{
  unsigned int v1; // ebx
  char v2; // dl
  char v3; // dl

  v1 = a1 == 0LL ? 0x80070057 : 0;
  if ( a1 )
  {
    v2 = a1[408];
    if ( (v2 & 1) != 0 )
    {
      *((_QWORD *)a1 + 31) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      *((_DWORD *)a1 + 64) = 0;
      a1[408] = v2 & 0xFE;
    }
    v3 = a1[408];
    if ( (v3 & 2) != 0 )
    {
      *((_QWORD *)a1 + 34) = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
      *((_DWORD *)a1 + 70) = 1065353216;
      a1[408] = v3 & 0xFD;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x39Du);
  }
  return v1;
}
