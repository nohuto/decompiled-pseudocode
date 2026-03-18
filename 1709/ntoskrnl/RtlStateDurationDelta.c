/*
 * XREFs of RtlStateDurationDelta @ 0x140013238
 * Callers:
 *     PopEtEnergyValuesDeltaCalculate @ 0x140457E10 (PopEtEnergyValuesDeltaCalculate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStateDurationDelta(__int64 a1, unsigned int *a2, int *a3)
{
  unsigned int v4; // ecx
  __int64 result; // rax
  int v6; // ecx

  *(_QWORD *)a1 = 0LL;
  v4 = a2[1] & 0x7FFFFFFF;
  if ( (a3[1] & 0x7FFFFFFFu) > v4 )
    *(_DWORD *)(a1 + 4) ^= (*(_DWORD *)(a1 + 4) ^ (a3[1] - v4)) & 0x7FFFFFFF;
  result = *a2;
  v6 = *a3;
  if ( (unsigned int)result > *a3 )
    v6 = *a2;
  *(_DWORD *)a1 = v6;
  return result;
}
