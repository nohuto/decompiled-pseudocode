/*
 * XREFs of CmpGetNextHive @ 0x14049CD7C
 * Callers:
 *     CmpDoFlushAll @ 0x1401551E0 (CmpDoFlushAll.c)
 *     CmLoadAppKey @ 0x14049C2A8 (CmLoadAppKey.c)
 *     CmpUnblockHiveWrites @ 0x1405C007C (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x1405C0380 (CmpBlockHiveWrites.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     CmpReferenceHive @ 0x14049D1FC (CmpReferenceHive.c)
 *     CmpDeleteHive @ 0x14054D76C (CmpDeleteHive.c)
 */

__int64 *__fastcall CmpGetNextHive(volatile signed __int32 *P)
{
  __int64 *v1; // rdi
  __int64 **v3; // rsi
  __int64 v4; // r9
  __int64 *v5; // r8

  v1 = 0LL;
  v3 = (__int64 **)&CmpHiveListHead;
  if ( P )
    v3 = (__int64 **)(P + 400);
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  v5 = *v3;
  while ( v5 != &CmpHiveListHead )
  {
    v1 = v5 - 200;
    if ( (unsigned __int8)CmpReferenceHive(v5 - 200) )
      break;
    v5 = (__int64 *)*v5;
    v1 = 0LL;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL, (__int64)v5, v4);
  if ( P && _InterlockedExchangeAdd(P + 1072, 0xFFFFFFFF) == 1 )
    CmpDeleteHive((PVOID)P);
  return v1;
}
