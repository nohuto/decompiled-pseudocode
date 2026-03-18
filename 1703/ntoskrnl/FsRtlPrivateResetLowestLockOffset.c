/*
 * XREFs of FsRtlPrivateResetLowestLockOffset @ 0x14004DB2C
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x14000C934 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlFastUnlockSingleShared @ 0x14004E064 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x14004F150 (FsRtlFastUnlockSingleExclusive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlPrivateResetLowestLockOffset(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // r8
  __int64 i; // rcx
  __int64 v5; // rcx
  __int64 *v6; // rax
  __int64 j; // rax

  result = a1[4];
  v2 = 0LL;
  if ( result )
  {
    for ( i = *(_QWORD *)(result + 8); i; i = *(_QWORD *)(i + 8) )
      result = i;
    v2 = *(_QWORD *)(result - 24);
  }
  else if ( !a1[5] )
  {
    *a1 = -1LL;
    return result;
  }
  v5 = a1[5];
  if ( !v5 )
    goto LABEL_6;
  for ( j = *(_QWORD *)(v5 + 8); j; j = *(_QWORD *)(j + 8) )
    v5 = j;
  if ( v2 && *(_QWORD *)(v5 + 24) >= *(_QWORD *)(v2 + 8) )
LABEL_6:
    v6 = (__int64 *)(v2 + 8);
  else
    v6 = (__int64 *)(v5 + 24);
  result = *v6;
  *a1 = result;
  return result;
}
