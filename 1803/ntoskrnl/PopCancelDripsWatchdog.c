/*
 * XREFs of PopCancelDripsWatchdog @ 0x14076DCD4
 * Callers:
 *     PdcPoResiliencyClient @ 0x140764CE0 (PdcPoResiliencyClient.c)
 * Callees:
 *     KeCancelTimer2 @ 0x1400873D0 (KeCancelTimer2.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

_QWORD *PopCancelDripsWatchdog()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *result; // rax

  if ( PopDripsWatchdog )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&stru_1403D1AD8, 1u);
    KeCancelTimer2((__int64)&unk_1403D1B40);
    qword_1403D1A68 = 0LL;
    dword_1403D1BF4 = 0;
    qword_1403D1A78 = 0LL;
    qword_1403D1A80 = 0LL;
    qword_1403D1A88 = 0LL;
    qword_1403D1A90 = 0LL;
    dword_1403D1A70 = 0;
    qword_1403D1A98 = 0LL;
    qword_1403D1BF8 = 0LL;
    qword_1403D1AA0 = 0LL;
    qword_1403D1AA8 = 0LL;
    memset(&qword_1403D1AB0, 0, 0x28uLL);
    ExReleaseResourceLite(&stru_1403D1AD8);
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return result;
}
