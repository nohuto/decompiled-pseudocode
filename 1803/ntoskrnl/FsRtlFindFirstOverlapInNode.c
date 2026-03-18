/*
 * XREFs of FsRtlFindFirstOverlapInNode @ 0x140224D84
 * Callers:
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1400BA854 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlCheckNoSharedConflict @ 0x140224CD8 (FsRtlCheckNoSharedConflict.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall FsRtlFindFirstOverlapInNode(_QWORD *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  _QWORD *result; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r8

  result = (_QWORD *)*a1;
  if ( !*a1 )
    return 0LL;
  v5 = *a2;
  while ( 1 )
  {
    v6 = result[6];
    if ( v6 >= v5 )
    {
      v7 = result[1];
      if ( v7 || result[2] )
        break;
    }
    if ( v6 == *a3 && result[1] == v5 )
      return result;
    result = (_QWORD *)*result;
    if ( !result )
      return 0LL;
  }
  if ( v7 > *a3 )
    return 0LL;
  return result;
}
