/*
 * XREFs of RtlStateDurationCapture @ 0x140234EC4
 * Callers:
 *     PoEnergyContextCleanup @ 0x140498B70 (PoEnergyContextCleanup.c)
 *     PsQueryProcessEnergyValues @ 0x1405400F0 (PsQueryProcessEnergyValues.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStateDurationCapture(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned int v3; // r10d
  unsigned int v4; // r9d
  int v5; // r9d
  int v6; // eax
  int v7; // r9d

  v3 = 0;
  *(_QWORD *)a1 = *a2;
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 >= 0x80000000 )
  {
    v5 = v4 & 0x7FFFFFFF;
    *(_DWORD *)(a1 + 4) = v5;
    v6 = *(_DWORD *)a2;
    if ( a3 > *(_DWORD *)a2 )
    {
      *(_DWORD *)a1 = a3;
      v3 = a3 - v6;
      if ( a3 - v6 == -1 || ~v3 < (v5 & 0x7FFFFFFFu) )
        v7 = -1;
      else
        v7 = v3 + (v5 & 0x7FFFFFFF);
      *(_DWORD *)(a1 + 4) ^= (v7 ^ *(_DWORD *)(a1 + 4)) & 0x7FFFFFFF;
    }
  }
  return v3;
}
