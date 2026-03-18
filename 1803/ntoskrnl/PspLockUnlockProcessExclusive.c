/*
 * XREFs of PspLockUnlockProcessExclusive @ 0x1400C5D40
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x1404B8C60 (PspDisablePrimaryTokenExchange.c)
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1405F33FC (PspSetProcessAffinityUpdateMode.c)
 *     NtGetNextProcess @ 0x14060E220 (NtGetNextProcess.c)
 *     PspAssignPrimaryToken @ 0x1406408AC (PspAssignPrimaryToken.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x1400C5D80 (ExfAcquireReleasePushLockExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
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
  return KeLeaveCriticalRegionThread(a2);
}
