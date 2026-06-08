/*
 * XREFs of PepIdleVmTest @ 0x1C000A560
 * Callers:
 *     <none>
 * Callees:
 *     PepIdleTest @ 0x1C000A580 (PepIdleTest.c)
 */

__int64 __fastcall PepIdleVmTest(ULONG_PTR a1, __int64 a2, int a3)
{
  if ( a3 == -1 )
    return 0LL;
  else
    return PepIdleTest(a1);
}
