/*
 * XREFs of sub_180083E00 @ 0x180083E00
 * Callers:
 *     RtlLockModuleSection @ 0x180083C60 (RtlLockModuleSection.c)
 *     RtlUnlockModuleSection @ 0x180083D60 (RtlUnlockModuleSection.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall sub_180083E00(char *a1)
{
  _UNKNOWN **i; // rdx
  char *v2; // r8

  for ( i = (_UNKNOWN **)off_180155630; i != &off_180155630; i = (_UNKNOWN **)*i )
  {
    v2 = (char *)i[2];
    if ( a1 >= v2 && a1 < (char *)i[3] + (unsigned __int64)v2 )
      return i;
  }
  return 0LL;
}
