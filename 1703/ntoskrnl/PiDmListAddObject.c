/*
 * XREFs of PiDmListAddObject @ 0x1404E44B8
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140483340 (PiPnpRtlCmActionCallback.c)
 *     IopRegisterDeviceInterface @ 0x1404E3CE0 (IopRegisterDeviceInterface.c)
 *     PiDmListInitEnumCallback @ 0x1405ADAE0 (PiDmListInitEnumCallback.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140485AA0 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmListAddObjectWorker @ 0x1404E4584 (PiDmListAddObjectWorker.c)
 */

__int64 __fastcall PiDmListAddObject(unsigned int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4)
{
  void *ObjectManagerForObjectType; // rax
  struct _KTHREAD *CurrentThread; // r10
  void *v10; // rbx
  struct _KTHREAD *v11; // r8

  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(*(_DWORD *)(a2 + 28));
  CurrentThread = KeGetCurrentThread();
  v10 = ObjectManagerForObjectType;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a2, 0LL);
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  ExAcquirePushLockSharedEx(a3, 0LL);
  PiDmListAddObjectWorker(a1, v10, a2, a3, a4);
  ExReleasePushLockEx(a3, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  ExReleasePushLockEx(a2, 0LL);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
