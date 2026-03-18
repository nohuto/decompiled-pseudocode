/*
 * XREFs of PspTeardownPartition @ 0x14071B190
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x1400B8F3C (PsDereferencePartition.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiDeletePartition @ 0x14021F520 (MiDeletePartition.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     ExpPartitionDestroy @ 0x14075E934 (ExpPartitionDestroy.c)
 */

LONG_PTR __fastcall PspTeardownPartition(PVOID Object)
{
  volatile LONG *v2; // rcx
  void *v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r15
  _DWORD *v6; // rbp
  void *v7; // r12
  PVOID v8; // rax

  if ( Object == PspSystemPartition )
    KeBugCheckEx(0x18Eu, 1uLL, (ULONG_PTR)Object, 0LL, 0LL);
  v2 = *(volatile LONG **)Object;
  if ( v2 )
  {
    MiDeletePartition(v2);
    *(_QWORD *)Object = 0LL;
  }
  v3 = (void *)*((_QWORD *)Object + 2);
  if ( v3 )
  {
    ExpPartitionDestroy(v3);
    *((_QWORD *)Object + 2) = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 96, 0LL);
  v5 = *((_QWORD *)Object + 7);
  v6 = (_DWORD *)*((_QWORD *)Object + 13);
  v7 = (void *)*((_QWORD *)Object + 14);
  *((_QWORD *)Object + 7) = MmBadPointer;
  v8 = MmBadPointer;
  *((_QWORD *)Object + 14) = 0LL;
  *((_QWORD *)Object + 13) = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)Object + 12);
  KeAbPostRelease((ULONG_PTR)Object + 96);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v6 )
  {
    if ( v6[294] )
      KeWaitForSingleObject(v6, Executive, 0, 0, 0LL);
    ObfDereferenceObject(v6);
    ObCloseHandle(v7, 0);
  }
  PsDereferencePartition(v5);
  return ObfDereferenceObjectWithTag(Object, 0x64726148u);
}
