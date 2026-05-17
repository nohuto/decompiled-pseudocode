/*
 * XREFs of sub_18010B040 @ 0x18010B040
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryEvent @ 0x18009B580 (ZwQueryEvent.c)
 */

__int64 __fastcall sub_18010B040(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  *a4 = 0;
  if ( a3 >= 8 )
    return ZwQueryEvent();
  else
    return 3221225507LL;
}
