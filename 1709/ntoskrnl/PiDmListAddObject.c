/*
 * XREFs of PiDmListAddObject @ 0x140518388
 * Callers:
 *     IopRegisterDeviceInterface @ 0x140517BAC (IopRegisterDeviceInterface.c)
 *     PiPnpRtlCmActionCallback @ 0x140520F60 (PiPnpRtlCmActionCallback.c)
 *     PiDmListInitEnumCallback @ 0x1405B9CF0 (PiDmListInitEnumCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PiDmListAddObjectWorker @ 0x140518454 (PiDmListAddObjectWorker.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140523BF4 (PiDmGetObjectManagerForObjectType.c)
 */

_QWORD *__fastcall PiDmListAddObject(unsigned int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4)
{
  __int64 ObjectManagerForObjectType; // rax
  struct _KTHREAD *CurrentThread; // r10
  __int64 v10; // rbx
  struct _KTHREAD *v11; // r8

  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(*(unsigned int *)(a2 + 28));
  CurrentThread = KeGetCurrentThread();
  v10 = ObjectManagerForObjectType;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a2, 0LL);
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  ExAcquirePushLockSharedEx(a3, 0LL);
  PiDmListAddObjectWorker(a1, v10, a2, a3, a4);
  ExReleasePushLockEx(a3, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ExReleasePushLockEx(a2, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
