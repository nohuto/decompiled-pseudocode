/*
 * XREFs of PsGetWorkOnBehalfThread @ 0x1400E7974
 * Callers:
 *     IoReferenceIoAttributionFromThread @ 0x140023A10 (IoReferenceIoAttributionFromThread.c)
 *     PsGetEffectiveContainerId @ 0x140029820 (PsGetEffectiveContainerId.c)
 *     IopQueueWorkItemProlog @ 0x14004BEAC (IopQueueWorkItemProlog.c)
 *     NtQueryInformationThread @ 0x140424560 (NtQueryInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x140445FC4 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     AlpcpCaptureAttributes @ 0x140525C00 (AlpcpCaptureAttributes.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1406B1A68 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
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
