/*
 * XREFs of ExpQueryNumaProcessorMap @ 0x1405533C0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeQueryHighestNodeNumber @ 0x1400FC850 (KeQueryHighestNodeNumber.c)
 *     KeQueryNodeActiveAffinity @ 0x1400FC870 (KeQueryNodeActiveAffinity.c)
 */

__int64 __fastcall ExpQueryNumaProcessorMap(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v6; // esi
  unsigned int v7; // ebx

  if ( a2 < 4 )
  {
    if ( a3 )
      *a3 = 4;
    return 3221225476LL;
  }
  else
  {
    *a1 = KeQueryHighestNodeNumber();
    v6 = KeQueryHighestNodeNumber() + 1;
    if ( (a2 - 8) >> 4 <= v6 )
      v6 = (a2 - 8) >> 4;
    if ( a2 >= 8 && (v7 = 0, v6) )
    {
      *a3 = 16 * v6 + 8;
      while ( v7 < v6 )
      {
        KeQueryNodeActiveAffinity(v7, (PGROUP_AFFINITY)&a1[4 * v7 + 2], 0LL);
        ++v7;
      }
      return 0LL;
    }
    else
    {
      *a3 = 4;
      return 0LL;
    }
  }
}
