/*
 * XREFs of PoRunDownDeviceObject @ 0x1400FACA0
 * Callers:
 *     IoDeleteDevice @ 0x1400FAC00 (IoDeleteDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     MiLockPagableImageSection @ 0x1400BC630 (MiLockPagableImageSection.c)
 *     PoRegisterDeviceForIdleDetection @ 0x1400FAD80 (PoRegisterDeviceForIdleDetection.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MmLockPagableSectionByHandle @ 0x140507380 (MmLockPagableSectionByHandle.c)
 */

void __fastcall PoRunDownDeviceObject(struct _DEVICE_OBJECT *a1)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdi
  struct _DEVICE_OBJECT_POWER_EXTENSION *Dope; // rbx
  KIRQL v3; // al
  _LIST_ENTRY *p_Volume; // rcx
  KIRQL v5; // si
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // r8

  DeviceObjectExtension = a1->DeviceObjectExtension;
  PoRegisterDeviceForIdleDetection(a1, 0, 0, PowerDeviceUnspecified);
  Dope = DeviceObjectExtension->Dope;
  if ( Dope )
  {
    MmLockPagableSectionByHandle(ExPageLockHandle);
    ExAcquireFastMutex(&PopVolumeLock);
    v3 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
    p_Volume = &Dope->Volume;
    v5 = v3;
    if ( Dope->Volume.Flink )
    {
      Flink = p_Volume->Flink;
      if ( p_Volume->Flink->Blink != p_Volume || (Blink = Dope->Volume.Blink, Blink->Flink != p_Volume) )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      p_Volume->Flink = 0LL;
      Dope->Volume.Blink = 0LL;
    }
    DeviceObjectExtension->Dope = 0LL;
    ExFreePoolWithTag(Dope, 0);
    KxReleaseSpinLock(&PopDopeGlobalLock);
    __writecr8(v5);
    KeReleaseGuardedMutex(&PopVolumeLock);
    MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0);
  }
}
