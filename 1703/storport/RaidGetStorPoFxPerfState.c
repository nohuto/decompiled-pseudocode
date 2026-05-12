/*
 * XREFs of RaidGetStorPoFxPerfState @ 0x1C0032064
 * Callers:
 *     RaidAdapterCacheOperationalPowerRange @ 0x1C0031F90 (RaidAdapterCacheOperationalPowerRange.c)
 *     RaidRegisterPerfStates @ 0x1C0035FB0 (RaidRegisterPerfStates.c)
 *     RaidValidatePerfSets @ 0x1C00369D8 (RaidValidatePerfSets.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetStorPoFxPerfState(_DWORD *a1, int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r8

  if ( a1[5] )
    return 0LL;
  v2 = a1[6];
  if ( !v2 )
    return 0LL;
  if ( v2 < a2 + 1 )
    return 0LL;
  v3 = (unsigned int)a1[7];
  if ( (unsigned int)v3 < 0x28 )
    return 0LL;
  else
    return (__int64)&a1[6 * a2] + v3;
}
