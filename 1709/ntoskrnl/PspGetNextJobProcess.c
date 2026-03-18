/*
 * XREFs of PspGetNextJobProcess @ 0x14050CEAC
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x1400D4270 (PspExecuteJobFreezeThawCallback.c)
 *     PspBoostJobIoPriorityCallback @ 0x1404D99C0 (PspBoostJobIoPriorityCallback.c)
 *     PspTerminateProcessesJobCallback @ 0x14050BBC0 (PspTerminateProcessesJobCallback.c)
 *     PspAssignProcessToJob @ 0x14050BFAC (PspAssignProcessToJob.c)
 *     PspSetCpuRateControlJobPostCallback @ 0x14059AA30 (PspSetCpuRateControlJobPostCallback.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140715CA8 (PspTerminateSiloSubsystemProcesses.c)
 *     PspWaitOnAllProcessesJobCallback @ 0x1407186C0 (PspWaitOnAllProcessesJobCallback.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140083060 (ObReferenceObjectSafeWithTag.c)
 *     PspUnlockJob @ 0x1405102A0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1405102E0 (PspLockJobExclusive.c)
 */

_QWORD *__fastcall PspGetNextJobProcess(__int64 a1, __int64 a2, _QWORD *a3, void *a4)
{
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *i; // rdi
  __int64 v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rsi

  PspLockJobExclusive(a1, a2);
  if ( !a4 )
  {
    v8 = (_QWORD *)(a1 + 1088);
    v9 = *(_QWORD *)(a1 + 1088);
    if ( *(_QWORD *)(v9 + 8) != a1 + 1088 )
      __fastfail(3u);
    a3[1] = v8;
    *a3 = v9;
    *(_QWORD *)(v9 + 8) = a3;
    *v8 = a3;
    a3[2] = a1 + 40;
  }
  for ( i = *(_QWORD **)a3[2]; i != (_QWORD *)(a1 + 40); i = (_QWORD *)*i )
  {
    v13 = i - 142;
    if ( ObReferenceObjectSafeWithTag((__int64)(i - 142)) )
      goto LABEL_9;
  }
  v11 = *a3;
  if ( *(_QWORD **)(*a3 + 8LL) != a3 || (v12 = (_QWORD *)a3[1], (_QWORD *)*v12 != a3) )
    __fastfail(3u);
  *v12 = v11;
  v13 = 0LL;
  *(_QWORD *)(v11 + 8) = v12;
LABEL_9:
  a3[2] = i;
  PspUnlockJob(a1, a2);
  if ( a4 )
    ObfDereferenceObjectWithTag(a4, 0x624A7350u);
  return v13;
}
