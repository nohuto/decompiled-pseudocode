/*
 * XREFs of IoSetDiskIoAttributionFromThread @ 0x14004B300
 * Callers:
 *     IoAsynchronousPageWrite @ 0x1400369F8 (IoAsynchronousPageWrite.c)
 *     IoPageReadEx @ 0x14004AFE0 (IoPageReadEx.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140081250 (IopBuildAsynchronousFsdRequest.c)
 *     IoSynchronousPageWriteEx @ 0x14012C59C (IoSynchronousPageWriteEx.c)
 *     IoSetIoAttributionIrp @ 0x1401F4160 (IoSetIoAttributionIrp.c)
 *     IopSynchronousServiceTail @ 0x14053A760 (IopSynchronousServiceTail.c)
 * Callees:
 *     IopSetDiskIoAttributionFromProcess @ 0x140023430 (IopSetDiskIoAttributionFromProcess.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400E19E0 (ObDereferenceObjectDeferDelete.c)
 *     IopSetDiskIoAttributionExtension @ 0x14012C8B4 (IopSetDiskIoAttributionExtension.c)
 */

__int64 __fastcall IoSetDiskIoAttributionFromThread(__int64 a1, struct _KTHREAD *a2)
{
  _QWORD *Object; // rsi
  int v4; // edi
  __int64 Process; // rdx
  _KPROCESS *v7; // rbx
  __int64 v8; // rbp
  int v9; // ebx
  KIRQL v11; // al
  __int64 v12; // rbx
  KIRQL v13; // r15
  KIRQL v14; // al
  KIRQL v15; // bp

  Object = a2[1].WaitBlock[1].Object;
  v4 = 0;
  if ( !Object )
    goto LABEL_16;
  if ( a2 != KeGetCurrentThread() )
  {
    v14 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
    Object = a2[1].WaitBlock[1].Object;
    v15 = v14;
    if ( Object )
    {
      ObfReferenceObjectWithTag(a2[1].WaitBlock[1].Object, 0x746C6644u);
      v4 = 1;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&PspThreadWorkOnBehalfLock);
    __writecr8(v15);
  }
  if ( Object )
  {
    v7 = (_KPROCESS *)Object[68];
  }
  else
  {
LABEL_16:
    if ( a2 == KeGetCurrentThread() )
    {
      Process = (__int64)a2->ApcState.Process;
      if ( (_KPROCESS *)Process != a2->Process && (int)IopSetDiskIoAttributionFromProcess(a1, Process) >= 0 )
      {
LABEL_17:
        v9 = 0;
        goto LABEL_8;
      }
    }
    v7 = a2->Process;
  }
  v8 = 0LL;
  if ( *(_QWORD *)&v7[2].ThreadSeed[10] )
  {
    v11 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
    v12 = *(_QWORD *)&v7[2].ThreadSeed[10];
    v13 = v11;
    if ( v12 )
      v8 = *(_QWORD *)(v12 + 24);
    ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
    __writecr8(v13);
    if ( v12 )
    {
      v9 = IopSetDiskIoAttributionExtension(a1, v8);
      if ( v9 >= 0 )
        v9 = 0;
    }
    else
    {
      v9 = -1073741275;
    }
  }
  else
  {
    v9 = -1073741275;
  }
  if ( v9 >= 0 )
    goto LABEL_17;
LABEL_8:
  if ( v4 )
    ObDereferenceObjectDeferDelete(Object);
  return (unsigned int)v9;
}
