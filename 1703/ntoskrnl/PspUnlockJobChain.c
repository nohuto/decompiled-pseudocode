/*
 * XREFs of PspUnlockJobChain @ 0x140545EBC
 * Callers:
 *     PspGetMemoryPartitionImplicit @ 0x140545DE4 (PspGetMemoryPartitionImplicit.c)
 *     PspImplicitAssignProcessToJob @ 0x140546C9C (PspImplicitAssignProcessToJob.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x14054BD0C (PspUnlockJobsAndProcessExclusive.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 */

void __fastcall PspUnlockJobChain(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 i; // rsi

  if ( *(_QWORD *)(a1 + 1104) > 1uLL )
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 1080) + 56LL));
  v6 = *(_QWORD *)(a1 + 1104);
  if ( v6 > 2 )
  {
    for ( i = v6 - 2; i; --i )
      ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(*(_QWORD *)(a1 + 1112) + 8 * i - 8) + 56LL));
  }
  if ( *(_QWORD *)(a1 + 1104) )
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 1072) + 56LL));
  if ( (a3 & 1) == 0 )
  {
    ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    if ( a2 )
      KiLeaveGuardedRegionUnsafe(a2);
  }
}
