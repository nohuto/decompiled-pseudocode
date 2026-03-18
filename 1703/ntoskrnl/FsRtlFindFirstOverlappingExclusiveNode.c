/*
 * XREFs of FsRtlFindFirstOverlappingExclusiveNode @ 0x140028DAC
 * Callers:
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x140028C50 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x140028D30 (FsRtlPrivateInsertExclusiveLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x14004F150 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x140051998 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x140131024 (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlGetNextFileLock @ 0x14014B5A0 (FsRtlGetNextFileLock.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall FsRtlFindFirstOverlappingExclusiveNode(
        _QWORD *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        _BYTE *a5)
{
  _QWORD *v7; // r11
  unsigned __int64 v8; // r10
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8

  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  v7 = 0LL;
  if ( !a1 )
    return v7;
  do
  {
    v8 = a1[8];
    v9 = a1;
    v10 = *a2;
    if ( v8 >= *a2 )
    {
      v11 = a1[3];
      if ( v11 || a1[4] )
      {
        if ( v11 <= *a3 && (*a3 != -1LL || v10) )
        {
          if ( v11 <= v10 )
            break;
          v7 = a1;
        }
        if ( a4 )
          *a4 = a1;
        if ( a5 )
          *a5 = 1;
        goto LABEL_16;
      }
    }
    if ( v8 == *a3 && a1[3] == v10 )
    {
      v7 = a1;
      if ( a4 )
        *a4 = a1;
      if ( a5 )
        *a5 = 0;
LABEL_16:
      a1 = (_QWORD *)a1[1];
      continue;
    }
    if ( a4 )
      *a4 = a1;
    if ( a5 )
      *a5 = 0;
    a1 = (_QWORD *)a1[2];
  }
  while ( a1 );
  if ( !a1 )
    return v7;
  return v9;
}
