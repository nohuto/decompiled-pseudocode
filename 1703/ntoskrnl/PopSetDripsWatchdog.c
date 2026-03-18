/*
 * XREFs of PopSetDripsWatchdog @ 0x1406D5530
 * Callers:
 *     PdcPoResiliencyClient @ 0x1406CB3C0 (PdcPoResiliencyClient.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x1406D52E0 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     KeSetTimer2 @ 0x140049180 (KeSetTimer2.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     PopCalculateIdleInformation @ 0x1402300FC (PopCalculateIdleInformation.c)
 */

__int64 PopSetDripsWatchdog()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rbx
  __int64 result; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v4[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]

  if ( PopDripsWatchdog )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&stru_14036F408, 1u);
    qword_14036F3D8 = 0LL;
    v1 = MEMORY[0xFFFFF78000000008];
    if ( !qword_14036F3D0 )
    {
      qword_14036F3D0 = MEMORY[0xFFFFF78000000008];
      PopCalculateIdleInformation((__int64)v4);
      qword_14036F3B8 = v5;
      dword_14036F3A8 = v6;
      dword_14036F3AC = v7;
    }
    if ( !qword_14036F3C0 )
    {
      dword_14036F3B0 = unk_14034B3C4;
      qword_14036F3C0 = v1;
    }
    if ( !qword_14036F3C8 )
      qword_14036F3C8 = v1;
    if ( !qword_14036F3E0 )
      qword_14036F3E0 = qword_14036E1A8;
    qword_14036F3E8 = 0LL;
    v3[1] = -1LL;
    v3[0] = 0LL;
    KeSetTimer2((__int64)&unk_14036F470, -10000000LL * (unsigned int)PopDripsWatchdog, 0LL, (__int64)v3);
    ExReleaseResourceLite(&stru_14036F408);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return result;
}
