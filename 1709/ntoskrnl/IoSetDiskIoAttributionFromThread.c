/*
 * XREFs of IoSetDiskIoAttributionFromThread @ 0x1400668D0
 * Callers:
 *     IoPageReadEx @ 0x140064A60 (IoPageReadEx.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400DE350 (IopBuildAsynchronousFsdRequest.c)
 *     IoSynchronousPageWriteEx @ 0x140114DBC (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x14012EDB0 (IoAsynchronousPageWrite.c)
 *     IoSetIoAttributionIrp @ 0x1401F9B30 (IoSetIoAttributionIrp.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x140008E14 (IopSetDiskIoAttributionExtension.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x14012BBFC (IopSetDiskIoAttributionFromProcess.c)
 */

__int64 __fastcall IoSetDiskIoAttributionFromThread(__int64 a1, struct _KTHREAD *a2)
{
  _QWORD *Object; // rsi
  int v4; // edi
  _KPROCESS *Process; // rbx
  __int64 v7; // rbp
  int v8; // ebx
  KIRQL v10; // al
  __int64 v11; // rbx
  KIRQL v12; // r15
  KIRQL v13; // al
  KIRQL v14; // bp

  Object = a2[1].WaitBlock[1].Object;
  v4 = 0;
  if ( !Object )
    goto LABEL_19;
  if ( a2 != KeGetCurrentThread() )
  {
    v13 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
    Object = a2[1].WaitBlock[1].Object;
    v14 = v13;
    if ( Object )
    {
      ObfReferenceObjectWithTag(a2[1].WaitBlock[1].Object, 0x746C6644u);
      v4 = 1;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&PspThreadWorkOnBehalfLock);
    __writecr8(v14);
  }
  if ( Object )
  {
    Process = (_KPROCESS *)Object[68];
  }
  else
  {
LABEL_19:
    if ( a2 == KeGetCurrentThread()
      && a2->ApcState.Process != a2->Process
      && (int)IopSetDiskIoAttributionFromProcess(a1) >= 0 )
    {
LABEL_20:
      v8 = 0;
      goto LABEL_8;
    }
    Process = a2->Process;
  }
  v7 = 0LL;
  if ( *(_QWORD *)&Process[2].ThreadSeed[16] )
  {
    v10 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
    v11 = *(_QWORD *)&Process[2].ThreadSeed[16];
    v12 = v10;
    if ( v11 )
      v7 = *(_QWORD *)(v11 + 24);
    ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
    __writecr8(v12);
    if ( v11 )
    {
      v8 = IopSetDiskIoAttributionExtension(a1, v7, (__int64)KeGetCurrentThread(), 0);
      if ( v8 >= 0 )
        v8 = 0;
    }
    else
    {
      v8 = -1073741275;
    }
  }
  else
  {
    v8 = -1073741275;
  }
  if ( v8 >= 0 )
    goto LABEL_20;
LABEL_8:
  if ( v4 )
    ObDereferenceObjectDeferDelete(Object);
  return (unsigned int)v8;
}
