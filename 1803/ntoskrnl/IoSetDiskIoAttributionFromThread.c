/*
 * XREFs of IoSetDiskIoAttributionFromThread @ 0x140048A10
 * Callers:
 *     IoPageReadEx @ 0x140048610 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140048838 (IoSynchronousPageWriteEx.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140098370 (IopBuildAsynchronousFsdRequest.c)
 *     IoAsynchronousPageWrite @ 0x1400CCE90 (IoAsynchronousPageWrite.c)
 *     IoSetIoAttributionIrp @ 0x140236E30 (IoSetIoAttributionIrp.c)
 *     IopSynchronousServiceTail @ 0x14059D990 (IopSynchronousServiceTail.c)
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x14003F0B0 (IopSetDiskIoAttributionExtension.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x140137C20 (IopSetDiskIoAttributionFromProcess.c)
 */

__int64 __fastcall IoSetDiskIoAttributionFromThread(__int64 a1, struct _KTHREAD *a2)
{
  _QWORD *Object; // rsi
  BOOL v4; // edi
  _KPROCESS *Process; // rbx
  __int64 v7; // rbp
  int v8; // ebx
  KIRQL v10; // al
  __int64 v11; // rbx
  KIRQL v12; // r15
  KIRQL v13; // al
  KIRQL v14; // di

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
      ObfReferenceObjectWithTag(a2[1].WaitBlock[1].Object, 0x746C6644u);
    ExReleaseSpinLockSharedFromDpcLevel(&PspThreadWorkOnBehalfLock);
    __writecr8(v14);
    v4 = Object != 0LL;
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
