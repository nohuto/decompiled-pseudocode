/*
 * XREFs of PopSetDripsWatchdog @ 0x14076E758
 * Callers:
 *     PdcPoResiliencyClient @ 0x140764CE0 (PdcPoResiliencyClient.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x14076E360 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     PopCalculateIdleInformation @ 0x14027B138 (PopCalculateIdleInformation.c)
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
    ExAcquireResourceExclusiveLite(&stru_1403D1AD8, 1u);
    qword_1403D1AA0 = 0LL;
    v1 = MEMORY[0xFFFFF78000000008];
    if ( !qword_1403D1A98 )
    {
      qword_1403D1A98 = MEMORY[0xFFFFF78000000008];
      qword_1403D1BF8 = MEMORY[0xFFFFF78000000008];
      PopCalculateIdleInformation((__int64)v4);
      qword_1403D1A78 = v5;
      qword_1403D1A80 = v6;
      qword_1403D1A68 = v7;
      dword_1403D1BF4 = v7;
    }
    if ( !qword_1403D1A88 )
    {
      dword_1403D1A70 = dword_1403AA2A4;
      qword_1403D1A88 = v1;
    }
    if ( !qword_1403D1A90 )
      qword_1403D1A90 = v1;
    if ( !qword_1403D1AA8 )
      qword_1403D1AA8 = qword_1403CDA28;
    qword_1403D1AB0 = 0LL;
    v3[1] = -1LL;
    v3[0] = 0LL;
    KeSetTimer2((__int64)&unk_1403D1B40, -10000000LL * (unsigned int)PopDripsWatchdog, 0LL, (__int64)v3);
    ExReleaseResourceLite(&stru_1403D1AD8);
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return result;
}
