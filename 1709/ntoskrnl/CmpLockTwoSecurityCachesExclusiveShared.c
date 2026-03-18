/*
 * XREFs of CmpLockTwoSecurityCachesExclusiveShared @ 0x1405A6A4C
 * Callers:
 *     CmpCopyKeyPartial @ 0x1405A5AF4 (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x1405A62E4 (CmpSyncKeyValues.c)
 *     CmpReplicateKeyToVirtual @ 0x1406924F8 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall CmpLockTwoSecurityCachesExclusiveShared(unsigned __int64 a1, unsigned __int64 a2)
{
  ULONG_PTR v4; // rcx

  if ( a1 < a2 )
  {
    ExAcquirePushLockExclusiveEx(a1 + 2952, 0LL);
    ExAcquirePushLockSharedEx(a2 + 2952, 0LL);
  }
  else
  {
    v4 = a2 + 2952;
    if ( a1 > a2 )
    {
      ExAcquirePushLockSharedEx(v4, 0LL);
      v4 = a1 + 2952;
    }
    ExAcquirePushLockExclusiveEx(v4, 0LL);
  }
}
