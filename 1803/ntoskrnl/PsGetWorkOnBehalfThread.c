/*
 * XREFs of PsGetWorkOnBehalfThread @ 0x140060460
 * Callers:
 *     IopQueueWorkItemProlog @ 0x14008FB9C (IopQueueWorkItemProlog.c)
 *     PsGetEffectiveContainerId @ 0x1400BDCA0 (PsGetEffectiveContainerId.c)
 *     IoReferenceIoAttributionFromThread @ 0x140137A70 (IoReferenceIoAttributionFromThread.c)
 *     AlpcpCaptureAttributes @ 0x1404CDA80 (AlpcpCaptureAttributes.c)
 *     NtQueryInformationThread @ 0x1404CF440 (NtQueryInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1405709E4 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407474A4 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

PVOID __fastcall PsGetWorkOnBehalfThread(struct _KTHREAD *a1, _DWORD *a2)
{
  PVOID Object; // rbx
  KIRQL v6; // al
  KIRQL v7; // bp

  Object = a1[1].WaitBlock[1].Object;
  *a2 = 0;
  if ( Object && a1 != KeGetCurrentThread() )
  {
    v6 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
    Object = a1[1].WaitBlock[1].Object;
    v7 = v6;
    if ( Object )
    {
      ObfReferenceObjectWithTag(a1[1].WaitBlock[1].Object, 0x746C6644u);
      *a2 = 1;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&PspThreadWorkOnBehalfLock);
    __writecr8(v7);
  }
  return Object;
}
