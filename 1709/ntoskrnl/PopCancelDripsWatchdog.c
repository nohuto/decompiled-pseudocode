/*
 * XREFs of PopCancelDripsWatchdog @ 0x14070A52C
 * Callers:
 *     PdcPoResiliencyClient @ 0x1406FF380 (PdcPoResiliencyClient.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     KeCancelTimer2 @ 0x1400E3990 (KeCancelTimer2.c)
 *     memset @ 0x140192F40 (memset.c)
 */

_QWORD *PopCancelDripsWatchdog()
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *result; // rax

  if ( PopDripsWatchdog )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&stru_14038DC88, 1u);
    KeCancelTimer2((__int64)&unk_14038DCF0);
    qword_14038DC18 = 0LL;
    dword_14038DDA4 = 0;
    qword_14038DC28 = 0LL;
    qword_14038DC30 = 0LL;
    qword_14038DC38 = 0LL;
    qword_14038DC40 = 0LL;
    dword_14038DC20 = 0;
    qword_14038DC48 = 0LL;
    qword_14038DDA8 = 0LL;
    qword_14038DC50 = 0LL;
    qword_14038DC58 = 0LL;
    memset(&qword_14038DC60, 0, 0x28uLL);
    ExReleaseResourceLite(&stru_14038DC88);
    return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return result;
}
