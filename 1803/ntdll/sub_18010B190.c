/*
 * XREFs of sub_18010B190 @ 0x18010B190
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySemaphore @ 0x18009D550 (ZwQuerySemaphore.c)
 */

__int64 __fastcall sub_18010B190(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  *a4 = 0;
  if ( a3 >= 8 )
    return ZwQuerySemaphore();
  else
    return 3221225507LL;
}
