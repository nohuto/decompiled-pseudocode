/*
 * XREFs of PpmPerfGetCurrentFrequency @ 0x140167AD8
 * Callers:
 *     PpmPerfGetCurrentState @ 0x140031BD8 (PpmPerfGetCurrentState.c)
 *     PpmCheckComputeEnergy @ 0x140046D20 (PpmCheckComputeEnergy.c)
 *     PoGetFrequencyBucket @ 0x140167AAC (PoGetFrequencyBucket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmPerfGetCurrentFrequency(__int64 a1, char a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 result; // rax
  unsigned int v5; // ecx

  v2 = *(_QWORD *)(a1 + 24304);
  v3 = *(_QWORD *)(a1 + 24312);
  if ( !v2 || !v3 )
    return 100LL;
  if ( *(_BYTE *)(v2 + 485) )
  {
    result = *(unsigned int *)(v3 + 96);
    a2 = 1;
  }
  else
  {
    result = *(unsigned int *)(v3 + 140);
  }
  if ( a2 )
  {
    v5 = *(_DWORD *)(v2 + 376);
    if ( (unsigned int)result >= v5 )
      return v5;
  }
  return result;
}
