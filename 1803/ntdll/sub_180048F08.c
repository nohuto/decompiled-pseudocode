/*
 * XREFs of sub_180048F08 @ 0x180048F08
 * Callers:
 *     RtlUnlockModuleSection @ 0x180048D60 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x180048E10 (RtlLockModuleSection.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall sub_180048F08(char *a1)
{
  _UNKNOWN **i; // rdx
  char *v2; // r8

  for ( i = (_UNKNOWN **)off_180156638; i != &off_180156638; i = (_UNKNOWN **)*i )
  {
    v2 = (char *)i[2];
    if ( a1 >= v2 && a1 < (char *)i[3] + (unsigned __int64)v2 )
      return i;
  }
  return 0LL;
}
