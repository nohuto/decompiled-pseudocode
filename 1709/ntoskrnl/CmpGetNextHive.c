/*
 * XREFs of CmpGetNextHive @ 0x1404E1EC8
 * Callers:
 *     CmLoadAppKey @ 0x1404E13B4 (CmLoadAppKey.c)
 *     CmpBlockHiveWrites @ 0x14068F0F0 (CmpBlockHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x14068F308 (CmpUnblockHiveWrites.c)
 * Callees:
 *     CmpReferenceHive @ 0x140084160 (CmpReferenceHive.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     CmpDeleteHive @ 0x1400AFD08 (CmpDeleteHive.c)
 */

__int64 *__fastcall CmpGetNextHive(char *P)
{
  __int64 *v1; // rdi
  __int64 **v3; // rsi
  __int64 *v4; // r8
  __int64 **v5; // r8

  v1 = 0LL;
  v3 = (__int64 **)&CmpHiveListHead;
  if ( P )
    v3 = (__int64 **)(P + 2728);
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
  if ( P && _InterlockedExchangeAdd((volatile signed __int32 *)P + 1374, 0xFFFFFFFF) == 1 )
    CmpDeleteHive((PERESOURCE *)P);
  return v1;
}
