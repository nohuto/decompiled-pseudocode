/*
 * XREFs of CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x140496660
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x140006AD0 (CmpRecheckHiveVolumePolicy.c)
 *     CmpCreateHive @ 0x140497630 (CmpCreateHive.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 */

bool __fastcall CmpVolumeContextMustHiveFilePagesBeKeptLocal(__int64 a1)
{
  signed __int64 *v1; // rdi
  bool v3; // bl

  v1 = (signed __int64 *)(a1 + 56);
  ExAcquirePushLockSharedEx(a1 + 56, 0LL);
  v3 = *(_BYTE *)(a1 + 64) == 0;
  if ( _InterlockedCompareExchange64(v1, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  return v3;
}
