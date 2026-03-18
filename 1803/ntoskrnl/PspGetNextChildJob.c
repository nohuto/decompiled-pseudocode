/*
 * XREFs of PspGetNextChildJob @ 0x140536680
 * Callers:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140536910 (PspEnumJobsAndProcessesInJobHierarchy.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x1400FED50 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockJob @ 0x140536FD0 (PspUnlockJob.c)
 *     PspLockJobShared @ 0x140537038 (PspLockJobShared.c)
 */

_QWORD *__fastcall PspGetNextChildJob(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *v5; // rbp
  _QWORD *v6; // rbx

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  PspLockJobShared(a1, CurrentThread);
  if ( a2 )
    v6 = (_QWORD *)a2[130];
  else
    v6 = *(_QWORD **)(a1 + 1056);
  while ( v6 != (_QWORD *)(a1 + 1056) )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)(v6 - 130)) )
    {
      v5 = v6 - 130;
      break;
    }
    v6 = (_QWORD *)*v6;
  }
  PspUnlockJob(a1, CurrentThread);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  return v5;
}
