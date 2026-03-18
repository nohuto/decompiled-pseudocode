/*
 * XREFs of PspLockUnlockProcessExclusive @ 0x14002F5E0
 * Callers:
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     PspDisablePrimaryTokenExchange @ 0x1404F8A10 (PspDisablePrimaryTokenExchange.c)
 *     NtGetNextProcess @ 0x14057BB10 (NtGetNextProcess.c)
 *     PspSetProcessAffinityUpdateMode @ 0x140595E2C (PspSetProcessAffinityUpdateMode.c)
 *     PspAssignPrimaryToken @ 0x1406E0B70 (PspAssignPrimaryToken.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x140136B30 (ExfAcquireReleasePushLockExclusive.c)
 */

__int64 __fastcall PspLockUnlockProcessExclusive(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a2 + 484);
  v3 = (_QWORD *)(a1 + 728);
  _InterlockedOr(v5, 0);
  if ( (*v3 & 1) != 0 )
    ExfAcquireReleasePushLockExclusive((ULONG_PTR)v3);
  return KiLeaveCriticalRegionUnsafe(a2);
}
