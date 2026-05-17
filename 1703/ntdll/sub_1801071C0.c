/*
 * XREFs of sub_1801071C0 @ 0x1801071C0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySemaphore @ 0x1800A7CF0 (ZwQuerySemaphore.c)
 */

__int64 __fastcall sub_1801071C0(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  *a4 = 0;
  if ( a3 >= 8 )
    return ZwQuerySemaphore();
  else
    return 3221225507LL;
}
