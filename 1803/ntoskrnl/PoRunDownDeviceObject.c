/*
 * XREFs of PoRunDownDeviceObject @ 0x14009F930
 * Callers:
 *     IoDeleteDevice @ 0x14009F890 (IoDeleteDevice.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14000B0B0 (MiLockPagableImageSection.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoRegisterDeviceForIdleDetection @ 0x14009FA10 (PoRegisterDeviceForIdleDetection.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MmLockPagableSectionByHandle @ 0x14053EAD0 (MmLockPagableSectionByHandle.c)
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
    Flink = Dope->Volume.Flink;
    if ( Flink )
    {
      if ( Flink->Blink != p_Volume || (Blink = Dope->Volume.Blink, Blink->Flink != p_Volume) )
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
    MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
  }
}
