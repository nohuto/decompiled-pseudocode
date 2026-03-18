/*
 * XREFs of CmpUnlockTwoSecurityCaches @ 0x1405DFDF4
 * Callers:
 *     CmpCopyKeyPartial @ 0x1405DFB94 (CmpCopyKeyPartial.c)
 *     CmpReplicateKeyToVirtual @ 0x1406F5730 (CmpReplicateKeyToVirtual.c)
 *     CmpSyncKeyValues @ 0x1406FEB90 (CmpSyncKeyValues.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

char __fastcall CmpUnlockTwoSecurityCaches(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rax

  v4 = a1 + 1776;
  if ( a1 != a2 )
  {
    ExReleasePushLockEx(a1 + 1776, 0LL, a3, a4);
    v4 = a2 + 1776;
  }
  return ExReleasePushLockEx(v4, 0LL, a3, a4);
}
