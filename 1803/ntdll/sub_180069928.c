/*
 * XREFs of sub_180069928 @ 0x180069928
 * Callers:
 *     sub_180069810 @ 0x180069810 (sub_180069810.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_180069928(int a1)
{
  _DWORD *v1; // rax
  __int64 v2; // rdx

  v1 = off_180156690;
  v2 = 0LL;
  while ( v1 != (_DWORD *)&off_180156690 )
  {
    if ( v1[4] == a1 )
      return (char *)(v1 + 6);
    v1 = *(_DWORD **)v1;
  }
  return (char *)v2;
}
