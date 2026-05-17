/*
 * XREFs of sub_180092E68 @ 0x180092E68
 * Callers:
 *     sub_180092F8C @ 0x180092F8C (sub_180092F8C.c)
 * Callees:
 *     WinSqmStartSqmOptinListener @ 0x180004030 (WinSqmStartSqmOptinListener.c)
 *     sub_180093D28 @ 0x180093D28 (sub_180093D28.c)
 *     sub_180093FF8 @ 0x180093FF8 (sub_180093FF8.c)
 */

double __fastcall sub_180092E68(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, __int64 a7)
{
  sub_180093FF8(a7, 65472LL);
  if ( !(unsigned int)WinSqmStartSqmOptinListener() )
    sub_180093D28(a1);
  return a6;
}
