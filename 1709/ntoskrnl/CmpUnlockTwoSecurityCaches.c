/*
 * XREFs of CmpUnlockTwoSecurityCaches @ 0x1405A677C
 * Callers:
 *     CmpCopyKeyPartial @ 0x1405A5AF4 (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x1405A62E4 (CmpSyncKeyValues.c)
 *     CmpReplicateKeyToVirtual @ 0x1406924F8 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 */

char __fastcall CmpUnlockTwoSecurityCaches(__int64 a1, __int64 a2)
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
