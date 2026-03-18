/*
 * XREFs of MiLockWorkingSetOptimal @ 0x140048EC8
 * Callers:
 *     MiDirtySystemCachePte @ 0x140046508 (MiDirtySystemCachePte.c)
 *     MiMarkPteDirty @ 0x140048BD0 (MiMarkPteDirty.c)
 *     MiMakeSystemCachePteValid @ 0x140048C70 (MiMakeSystemCachePteValid.c)
 *     MiReleaseSystemCacheView @ 0x1400DD1D0 (MiReleaseSystemCacheView.c)
 *     MmSetAddressRangeModifiedEx @ 0x140124A90 (MmSetAddressRangeModifiedEx.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 */

__int64 __fastcall MiLockWorkingSetOptimal(__int64 a1, unsigned __int64 a2, _BYTE *a3)
{
  __int64 v4; // rsi

  v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a3 = MiLockWorkingSetShared(a1);
  MiLockPageTableInternal(a1, v4, 0LL);
  return v4;
}
