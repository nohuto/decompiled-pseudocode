/*
 * XREFs of MiVadIsCfgBitmap @ 0x14054BAF4
 * Callers:
 *     MiUnlockVadRangeHelper @ 0x14054B70C (MiUnlockVadRangeHelper.c)
 *     MiLockVadRangeHelper @ 0x14054B948 (MiLockVadRangeHelper.c)
 *     NtAreMappedFilesTheSame @ 0x1405833D4 (NtAreMappedFilesTheSame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadIsCfgBitmap(__int64 a1)
{
  int v1; // edx
  _QWORD *i; // rax

  v1 = 0;
  for ( i = (_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 288LL); *i != a1; i += 3 )
  {
    if ( (unsigned int)++v1 >= 2 )
      return 0LL;
  }
  return 1LL;
}
