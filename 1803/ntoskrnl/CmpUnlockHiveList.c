/*
 * XREFs of CmpUnlockHiveList @ 0x140495B30
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400070F8 (CmpLoadKeyCommon.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

char __fastcall CmpUnlockHiveList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL, a3, a4);
}
