/*
 * XREFs of PepIdleVmTest @ 0x1C000D350
 * Callers:
 *     <none>
 * Callees:
 *     PepIdleTest @ 0x1C000D2A0 (PepIdleTest.c)
 */

__int64 __fastcall PepIdleVmTest(__int64 *a1, __int64 a2, int a3)
{
  if ( a3 == -1 )
    return 0LL;
  else
    return PepIdleTest(a1, 0xFFFFFFFF, a3);
}
