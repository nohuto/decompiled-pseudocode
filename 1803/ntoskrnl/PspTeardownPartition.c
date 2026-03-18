/*
 * XREFs of PspTeardownPartition @ 0x14077EC60
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x14006FEF8 (PsDereferencePartition.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiDeletePartition @ 0x14025B0C0 (MiDeletePartition.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     ExpPartitionDestroy @ 0x1407C56B0 (ExpPartitionDestroy.c)
 */

LONG_PTR __fastcall PspTeardownPartition(PVOID Object)
{
  unsigned __int16 *v2; // rcx
  void *v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r15
  _DWORD *v9; // rbp
  void *v10; // r12
  PVOID v11; // rax

  if ( Object == PspSystemPartition )
    KeBugCheckEx(0x18Eu, 1uLL, (ULONG_PTR)Object, 0LL, 0LL);
  v2 = *(unsigned __int16 **)Object;
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
  v8 = *((_QWORD *)Object + 7);
  v9 = (_DWORD *)*((_QWORD *)Object + 13);
  v10 = (void *)*((_QWORD *)Object + 14);
  *((_QWORD *)Object + 7) = MmBadPointer;
  v11 = MmBadPointer;
  *((_QWORD *)Object + 14) = 0LL;
  *((_QWORD *)Object + 13) = v11;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)Object + 12, v5, v6, v7);
  KeAbPostRelease((ULONG_PTR)Object + 96);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v9 )
  {
    if ( v9[294] )
      KeWaitForSingleObject(v9, Executive, 0, 0, 0LL);
    ObfDereferenceObject(v9);
    ObCloseHandle(v10, 0);
  }
  PsDereferencePartition(v8);
  return ObfDereferenceObjectWithTag(Object, 0x64726148u);
}
