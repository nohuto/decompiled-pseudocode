/*
 * XREFs of CmpGetNextHive @ 0x1404D64B4
 * Callers:
 *     CmpUnblockHiveWrites @ 0x1404D451C (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x1404D5900 (CmpBlockHiveWrites.c)
 *     CmLoadAppKey @ 0x1404D59A0 (CmLoadAppKey.c)
 * Callees:
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     CmpReferenceHive @ 0x1400F0030 (CmpReferenceHive.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 */

__int64 *__fastcall CmpGetNextHive(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 **v3; // rsi
  __int64 *v4; // r8
  __int64 **v5; // r8

  v1 = 0LL;
  v3 = (__int64 **)&CmpHiveListHead;
  if ( a1 )
    v3 = (__int64 **)(a1 + 2728);
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  v4 = *v3;
  while ( v4 != &CmpHiveListHead )
  {
    v1 = v4 - 341;
    if ( CmpReferenceHive((__int64)(v4 - 341)) )
      break;
    v4 = *v5;
    v1 = 0LL;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  if ( a1 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5496), 0xFFFFFFFF) == 1 )
    CmpDeleteHive(a1);
  return v1;
}
