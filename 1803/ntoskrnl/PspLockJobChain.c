/*
 * XREFs of PspLockJobChain @ 0x1404F101C
 * Callers:
 *     PspGetMemoryPartitionImplicit @ 0x1404F0EAC (PspGetMemoryPartitionImplicit.c)
 *     PspLockJobsAndProcessExclusive @ 0x140530470 (PspLockJobsAndProcessExclusive.c)
 *     PspImplicitAssignProcessToJob @ 0x140531810 (PspImplicitAssignProcessToJob.c)
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     PspUnlockJobAssignment @ 0x1404F10B4 (PspUnlockJobAssignment.c)
 *     PspLockJobAssignment @ 0x1404F1104 (PspLockJobAssignment.c)
 */

BOOLEAN __fastcall PspLockJobChain(__int64 a1, __int64 a2, char a3)
{
  char v5; // si
  unsigned __int64 v6; // rax
  BOOLEAN result; // al
  unsigned __int64 v8; // rbp
  unsigned __int64 i; // rbp

  if ( a2 )
    --*(_WORD *)(a2 + 486);
  v5 = a3 & 1;
  if ( (a3 & 1) == 0 )
    PspLockJobAssignment(a2);
  v6 = *(_QWORD *)(a1 + 1104);
  if ( v6 )
  {
    if ( v6 > 1 )
    {
      ExAcquireResourceExclusiveLite((PERESOURCE)(*(_QWORD *)(a1 + 1080) + 56LL), 1u);
      v8 = *(_QWORD *)(a1 + 1104);
      if ( v8 > 2 )
      {
        for ( i = v8 - 2; i; --i )
          ExAcquireResourceExclusiveLite((PERESOURCE)(*(_QWORD *)(*(_QWORD *)(a1 + 1112) + 8 * i - 8) + 56LL), 1u);
      }
    }
    ExAcquireResourceExclusiveLite((PERESOURCE)(*(_QWORD *)(a1 + 1072) + 56LL), 1u);
  }
  result = ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
  if ( !v5 )
    return PspUnlockJobAssignment(a2);
  return result;
}
