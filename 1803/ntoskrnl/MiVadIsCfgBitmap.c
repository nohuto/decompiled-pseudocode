/*
 * XREFs of MiVadIsCfgBitmap @ 0x1404C0424
 * Callers:
 *     MiUnlockVadRangeHelper @ 0x1404BFFFC (MiUnlockVadRangeHelper.c)
 *     MiLockVadRangeHelper @ 0x1404C0260 (MiLockVadRangeHelper.c)
 *     NtAreMappedFilesTheSame @ 0x1405F1D00 (NtAreMappedFilesTheSame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadIsCfgBitmap(__int64 a1)
{
  int v1; // r8d
  _QWORD *i; // rax

  v1 = 0;
  for ( i = (_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 392LL); *i != a1; i += 3 )
  {
    if ( (unsigned int)++v1 >= 2 )
      return 0LL;
  }
  return 1LL;
}
