/*
 * XREFs of sub_18009DBEC @ 0x18009DBEC
 * Callers:
 *     sub_18009DD10 @ 0x18009DD10 (sub_18009DD10.c)
 * Callees:
 *     WinSqmStartSqmOptinListener @ 0x180087C00 (WinSqmStartSqmOptinListener.c)
 *     sub_18009EAB4 @ 0x18009EAB4 (sub_18009EAB4.c)
 *     sub_18009ED7C @ 0x18009ED7C (sub_18009ED7C.c)
 */

double __fastcall sub_18009DBEC(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, __int64 a7)
{
  sub_18009ED7C(a7, 65472LL);
  if ( !(unsigned int)WinSqmStartSqmOptinListener() )
    sub_18009EAB4(a1);
  return a6;
}
