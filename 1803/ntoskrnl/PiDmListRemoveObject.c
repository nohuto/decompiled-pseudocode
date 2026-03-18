/*
 * XREFs of PiDmListRemoveObject @ 0x140728FBC
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140504E60 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     PiDmGetObjectManagerForObjectType @ 0x14050784C (PiDmGetObjectManagerForObjectType.c)
 *     PiDmListRemoveObjectWorker @ 0x140729088 (PiDmListRemoveObjectWorker.c)
 */

_QWORD *__fastcall PiDmListRemoveObject(unsigned int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4)
{
  void *ObjectManagerForObjectType; // rax
  struct _KTHREAD *CurrentThread; // r10
  void *v10; // rbx
  struct _KTHREAD *v11; // r8
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9

  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(*(_DWORD *)(a2 + 28));
  CurrentThread = KeGetCurrentThread();
  v10 = ObjectManagerForObjectType;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a2, 0LL);
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  ExAcquirePushLockSharedEx(a3, 0LL);
  PiDmListRemoveObjectWorker(a1, v10, a2, a3, a4);
  ExReleasePushLockEx(a3, 0LL, v12, v13);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ExReleasePushLockEx(a2, 0LL, v14, v15);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
