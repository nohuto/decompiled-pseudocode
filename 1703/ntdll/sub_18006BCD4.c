/*
 * XREFs of sub_18006BCD4 @ 0x18006BCD4
 * Callers:
 *     sub_18006BBAC @ 0x18006BBAC (sub_18006BBAC.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_18006BCD4(int a1)
{
  _DWORD *v1; // rax
  __int64 v2; // rdx

  v1 = off_180155640;
  v2 = 0LL;
  while ( v1 != (_DWORD *)&off_180155640 )
  {
    if ( v1[4] == a1 )
      return (char *)(v1 + 6);
    v1 = *(_DWORD **)v1;
  }
  return (char *)v2;
}
