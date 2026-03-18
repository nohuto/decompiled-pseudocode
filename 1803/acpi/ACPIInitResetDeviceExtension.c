/*
 * XREFs of ACPIInitResetDeviceExtension @ 0x1C0028D74
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C00144B0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIDispatchIrpDepRemoveDevice @ 0x1C0015330 (ACPIDispatchIrpDepRemoveDevice.c)
 *     ACPIFilterFastIoDetachCallback @ 0x1C00245D0 (ACPIFilterFastIoDetachCallback.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C00282F4 (ACPIInitDeleteChildDeviceList.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     ACPIBuildProcessNotifyPepDeleteDevice @ 0x1C000EC80 (ACPIBuildProcessNotifyPepDeleteDevice.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C00286A0 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIInternalInterruptPolarityCacheCleanup @ 0x1C0029EAC (ACPIInternalInterruptPolarityCacheCleanup.c)
 *     PnpiCleanupForceActiveBothInterrupts @ 0x1C003881C (PnpiCleanupForceActiveBothInterrupts.c)
 *     AcpiArblibFreeArbiterInstance @ 0x1C0075190 (AcpiArblibFreeArbiterInstance.c)
 */

void __fastcall ACPIInitResetDeviceExtension(ULONG_PTR BugCheckParameter4)
{
  struct _DEVICE_OBJECT *v2; // r12
  KIRQL v3; // r13
  __int64 v4; // rcx
  void *v5; // rcx
  void *v6; // r14
  void *v7; // rsi
  void *v8; // rdi
  struct _DEVICE_OBJECT *v9; // rbp
  __int64 v10; // r15
  __int64 v11; // r8
  _QWORD *v12; // rcx
  PVOID *v13; // rbx
  _BYTE v14[24]; // [rsp+20h] [rbp-48h] BYREF

  memset(v14, 0, sizeof(v14));
  v2 = 0LL;
  ACPIBuildProcessNotifyPepDeleteDevice(BugCheckParameter4, 0);
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  v4 = *(_QWORD *)(BugCheckParameter4 + 8);
  if ( (v4 & 0x40) != 0 )
  {
    if ( (v4 & 0x20) != 0 )
    {
      v5 = *(void **)(BugCheckParameter4 + 728);
      if ( v5 )
        ObfDereferenceObject(v5);
    }
    else
    {
      v2 = *(struct _DEVICE_OBJECT **)(BugCheckParameter4 + 728);
    }
  }
  PnpiCleanupForceActiveBothInterrupts(BugCheckParameter4);
  ACPIInternalInterruptPolarityCacheCleanup(BugCheckParameter4);
  v6 = *(void **)(BugCheckParameter4 + 640);
  if ( v6 )
    *(_QWORD *)(BugCheckParameter4 + 640) = 0LL;
  v7 = *(void **)(BugCheckParameter4 + 624);
  if ( v7 )
    *(_QWORD *)(BugCheckParameter4 + 624) = 0LL;
  v8 = *(void **)(BugCheckParameter4 + 632);
  if ( v8 )
    *(_QWORD *)(BugCheckParameter4 + 632) = 0LL;
  v9 = *(struct _DEVICE_OBJECT **)(BugCheckParameter4 + 720);
  v10 = 3LL;
  if ( !v9 )
    goto LABEL_19;
  v9->DeviceExtension = 0LL;
  *(_QWORD *)(BugCheckParameter4 + 720) = 0LL;
  if ( (*(_QWORD *)(BugCheckParameter4 + 8) & 0x2000000000LL) != 0 && *(_BYTE *)(BugCheckParameter4 + 184) )
  {
    v11 = 3LL;
    v12 = (_QWORD *)(BugCheckParameter4 + 192);
    do
    {
      *(_QWORD *)&v14[(_QWORD)v12 - BugCheckParameter4 - 192] = *v12;
      *v12++ = 0LL;
      --v11;
    }
    while ( v11 );
  }
  if ( ACPIInitDereferenceDeviceExtensionLocked(BugCheckParameter4) )
  {
    v7 = 0LL;
    v8 = 0LL;
    v6 = 0LL;
  }
  else
  {
LABEL_19:
    *(_QWORD *)(BugCheckParameter4 + 728) = 0LL;
    *(_QWORD *)(BugCheckParameter4 + 736) = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 952), 0xFFFFFFFFFFFFFFBFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 952), 0xFFFFFFFFDFFFFFFFuLL);
    if ( (*(_BYTE *)(BugCheckParameter4 + 8) & 1) == 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 8), 0xFFFFFFFFFFFFFC00uLL);
      _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter4 + 8), 8uLL);
      _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter4 + 8), 4uLL);
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v3);
  v13 = (PVOID *)v14;
  do
  {
    if ( *v13 )
      AcpiArblibFreeArbiterInstance(*v13);
    ++v13;
    --v10;
  }
  while ( v10 );
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v2 )
    IoDetachDevice(v2);
  if ( v9 )
    IoDeleteDevice(v9);
}
