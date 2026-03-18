/*
 * XREFs of CmpLockTwoSecurityCachesExclusiveShared @ 0x1405DFE24
 * Callers:
 *     CmpCopyKeyPartial @ 0x1405DFB94 (CmpCopyKeyPartial.c)
 *     CmpReplicateKeyToVirtual @ 0x1406F5730 (CmpReplicateKeyToVirtual.c)
 *     CmpSyncKeyValues @ 0x1406FEB90 (CmpSyncKeyValues.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall CmpLockTwoSecurityCachesExclusiveShared(unsigned __int64 a1, unsigned __int64 a2)
{
  ULONG_PTR v2; // rdi
  ULONG_PTR v4; // rcx

  v2 = a2 + 1776;
  if ( a1 < a2 )
  {
    ExAcquirePushLockExclusiveEx(a1 + 1776, 0LL);
    ExAcquirePushLockSharedEx(v2, 0LL);
  }
  else
  {
    v4 = a2 + 1776;
    if ( a1 > a2 )
    {
      ExAcquirePushLockSharedEx(v4, 0LL);
      v4 = a1 + 1776;
    }
    ExAcquirePushLockExclusiveEx(v4, 0LL);
  }
}
