/*
 * XREFs of PopSetDripsWatchdog @ 0x14070B03C
 * Callers:
 *     PdcPoResiliencyClient @ 0x1406FF380 (PdcPoResiliencyClient.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x14070AC40 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PopCalculateIdleInformation @ 0x140244980 (PopCalculateIdleInformation.c)
 */

_QWORD *PopSetDripsWatchdog()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rbx
  _QWORD *result; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v4[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+38h] [rbp-20h]
  __int64 v6; // [rsp+40h] [rbp-18h]
  __int64 v7; // [rsp+48h] [rbp-10h]

  if ( PopDripsWatchdog )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&stru_14038DC88, 1u);
    qword_14038DC50 = 0LL;
    v1 = MEMORY[0xFFFFF78000000008];
    if ( !qword_14038DC48 )
    {
      qword_14038DC48 = MEMORY[0xFFFFF78000000008];
      qword_14038DDA8 = MEMORY[0xFFFFF78000000008];
      PopCalculateIdleInformation((__int64)v4);
      qword_14038DC28 = v5;
      qword_14038DC30 = v6;
      qword_14038DC18 = v7;
      dword_14038DDA4 = v7;
    }
    if ( !qword_14038DC38 )
    {
      dword_14038DC20 = dword_140365944;
      qword_14038DC38 = v1;
    }
    if ( !qword_14038DC40 )
      qword_14038DC40 = v1;
    if ( !qword_14038DC58 )
      qword_14038DC58 = qword_140389C28;
    qword_14038DC60 = 0LL;
    v3[1] = -1LL;
    v3[0] = 0LL;
    KeSetTimer2((__int64)&unk_14038DCF0, -10000000LL * (unsigned int)PopDripsWatchdog, 0LL, (__int64)v3);
    ExReleaseResourceLite(&stru_14038DC88);
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return result;
}
