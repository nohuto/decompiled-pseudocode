/*
 * XREFs of CmpUnlockTwoSecurityCaches @ 0x1405721FC
 * Callers:
 *     CmpCopyKeyPartial @ 0x140571EDC (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x14058DFA4 (CmpSyncKeyValues.c)
 *     CmpReplicateKeyToVirtual @ 0x1406679E8 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 */

__int64 __fastcall CmpUnlockTwoSecurityCaches(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rcx

  if ( a1 == a2 )
  {
    v3 = a1 + 2952;
  }
  else
  {
    ExReleasePushLockEx(a1 + 2952, 0LL);
    v3 = a2 + 2952;
  }
  return ExReleasePushLockEx(v3, 0LL);
}
