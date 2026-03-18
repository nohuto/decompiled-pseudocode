/*
 * XREFs of PpmPerfGetCurrentFrequency @ 0x140060A30
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x1400607C0 (KeQueryTotalCycleTimeThread.c)
 *     KiStartThreadCycleAccumulation @ 0x140060940 (KiStartThreadCycleAccumulation.c)
 *     PpmPerfGetCurrentState @ 0x1400C6838 (PpmPerfGetCurrentState.c)
 *     KiChooseTargetProcessor @ 0x1400FC8B0 (KiChooseTargetProcessor.c)
 *     PoGetFrequencyBucket @ 0x140271730 (PoGetFrequencyBucket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmPerfGetCurrentFrequency(__int64 a1, char a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  unsigned int v4; // ecx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 24176);
  v3 = *(_QWORD *)(a1 + 24184);
  if ( !v2 || !v3 )
    return 100LL;
  if ( *(_BYTE *)(v3 + 100) )
  {
    v4 = *(_DWORD *)(v3 + 116);
    if ( !a2 )
      return v4;
  }
  else
  {
    v4 = *(_DWORD *)(v3 + 72);
  }
  result = *(unsigned int *)(v2 + 368);
  if ( v4 < (unsigned int)result )
    return v4;
  return result;
}
