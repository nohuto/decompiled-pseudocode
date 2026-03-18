/*
 * XREFs of PspGetNextJobProcess @ 0x14054D334
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x14011E790 (PspExecuteJobFreezeThawCallback.c)
 *     PspBoostJobIoPriorityCallback @ 0x14054D1E0 (PspBoostJobIoPriorityCallback.c)
 *     PspTerminateProcessesJobCallback @ 0x14054D280 (PspTerminateProcessesJobCallback.c)
 *     PspSetCpuRateControlJobPostCallback @ 0x14054DEC0 (PspSetCpuRateControlJobPostCallback.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1406DF834 (PspTerminateSiloSubsystemProcesses.c)
 *     PspWaitOnAllProcessesJobCallback @ 0x1406E2290 (PspWaitOnAllProcessesJobCallback.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400EFD50 (ObReferenceObjectSafeWithTag.c)
 *     PspUnlockJob @ 0x140479650 (PspUnlockJob.c)
 */

_QWORD *__fastcall PspGetNextJobProcess(__int64 a1, __int64 a2, _QWORD *a3, void *a4)
{
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *i; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rbp

  if ( a2 )
    --*(_WORD *)(a2 + 486);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
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
      goto LABEL_11;
  }
  v11 = *a3;
  v12 = (_QWORD *)a3[1];
  if ( *(_QWORD **)(*a3 + 8LL) != a3 || (_QWORD *)*v12 != a3 )
    __fastfail(3u);
  *v12 = v11;
  v13 = 0LL;
  *(_QWORD *)(v11 + 8) = v12;
LABEL_11:
  a3[2] = i;
  PspUnlockJob(a1, a2);
  if ( a4 )
    ObfDereferenceObjectWithTag(a4, 0x624A7350u);
  return v13;
}
