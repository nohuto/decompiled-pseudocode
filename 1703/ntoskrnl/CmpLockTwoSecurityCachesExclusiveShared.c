/*
 * XREFs of CmpLockTwoSecurityCachesExclusiveShared @ 0x140572228
 * Callers:
 *     CmpCopyKeyPartial @ 0x140571EDC (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x14058DFA4 (CmpSyncKeyValues.c)
 *     CmpReplicateKeyToVirtual @ 0x1406679E8 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
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
