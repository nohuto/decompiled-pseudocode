/*
 * XREFs of MiPageHasRelocations @ 0x140754694
 * Callers:
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageHasRelocations(__int64 a1, unsigned int a2)
{
  _QWORD *v3; // rcx
  int v5; // edx

  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 96) + 32LL);
  if ( (unsigned __int64)a2 >= v3[7] )
    return 0LL;
  v5 = 0;
  while ( !*(_QWORD *)(*v3 + 8LL * (v5 + a2)) )
  {
    if ( ++v5 )
      return 0LL;
  }
  return 1LL;
}
