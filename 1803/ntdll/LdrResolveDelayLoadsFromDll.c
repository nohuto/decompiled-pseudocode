/*
 * XREFs of LdrResolveDelayLoadsFromDll @ 0x1800CB220
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CB260 @ 0x1800CB260 (sub_1800CB260.c)
 */

__int64 __fastcall LdrResolveDelayLoadsFromDll(char *a1, __int64 a2, int a3)
{
  __int64 v5; // rax

  if ( a3 )
    return 3221225485LL;
  v5 = sub_1800CB260();
  if ( v5 )
    return sub_180023294(a1, v5);
  else
    return 3221225781LL;
}
