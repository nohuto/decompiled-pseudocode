/*
 * XREFs of ACPIInitResetDeviceExtension @ 0x1C004FC10
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C0045F80 (ACPIBusIrpRemoveDevice.c)
 *     ACPIDispatchIrpDepRemoveDevice @ 0x1C0046780 (ACPIDispatchIrpDepRemoveDevice.c)
 *     ACPIFilterFastIoDetachCallback @ 0x1C004E480 (ACPIFilterFastIoDetachCallback.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C004F634 (ACPIInitDeleteChildDeviceList.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     ACPIBuildProcessNotifyPepDeleteDevice @ 0x1C0043F34 (ACPIBuildProcessNotifyPepDeleteDevice.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C004F9D8 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIInternalInterruptPolarityCacheCleanup @ 0x1C00502F8 (ACPIInternalInterruptPolarityCacheCleanup.c)
 *     PnpiCleanupForceActiveBothInterrupts @ 0x1C0056F7C (PnpiCleanupForceActiveBothInterrupts.c)
 *     AcpiArblibFreeArbiterInstance @ 0x1C009CAB0 (AcpiArblibFreeArbiterInstance.c)
 */

void __fastcall ACPIInitResetDeviceExtension(__int64 a1)
{
  struct _DEVICE_OBJECT *v2; // r15
  KIRQL v3; // r13
  __int64 v4; // rcx
  void *v5; // rcx
  void *v6; // r14
  void *v7; // rsi
  void *v8; // rdi
  struct _DEVICE_OBJECT *v9; // rbp
  __int64 v10; // r12
  __int64 v11; // r8
  _QWORD *v12; // rcx
  _QWORD *v13; // rbx
  _BYTE v14[24]; // [rsp+20h] [rbp-48h] BYREF

  memset(v14, 0, sizeof(v14));
  v2 = 0LL;
  ACPIBuildProcessNotifyPepDeleteDevice(a1, 0);
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  v4 = *(_QWORD *)(a1 + 8);
  if ( (v4 & 0x40) != 0 )
  {
    if ( (v4 & 0x20) != 0 )
    {
      v5 = *(void **)(a1 + 728);
      if ( v5 )
        ObfDereferenceObject(v5);
    }
    else
    {
      v2 = *(struct _DEVICE_OBJECT **)(a1 + 728);
    }
  }
  PnpiCleanupForceActiveBothInterrupts(a1);
  ACPIInternalInterruptPolarityCacheCleanup(a1);
  v6 = *(void **)(a1 + 640);
  if ( v6 )
    *(_QWORD *)(a1 + 640) = 0LL;
  v7 = *(void **)(a1 + 624);
  if ( v7 )
    *(_QWORD *)(a1 + 624) = 0LL;
  v8 = *(void **)(a1 + 632);
  if ( v8 )
    *(_QWORD *)(a1 + 632) = 0LL;
  v9 = *(struct _DEVICE_OBJECT **)(a1 + 720);
  v10 = 3LL;
  if ( !v9 )
    goto LABEL_19;
  v9->DeviceExtension = 0LL;
  *(_QWORD *)(a1 + 720) = 0LL;
  if ( (*(_QWORD *)(a1 + 8) & 0x2000000000LL) != 0 && *(_BYTE *)(a1 + 184) )
  {
    v11 = 3LL;
    v12 = (_QWORD *)(a1 + 192);
    do
    {
      *(_QWORD *)&v14[(_QWORD)v12 - a1 - 192] = *v12;
      *v12++ = 0LL;
      --v11;
    }
    while ( v11 );
  }
  if ( ACPIInitDereferenceDeviceExtensionLocked((volatile signed __int32 *)a1) )
  {
    v7 = 0LL;
    v8 = 0LL;
    v6 = 0LL;
  }
  else
  {
LABEL_19:
    *(_QWORD *)(a1 + 728) = 0LL;
    *(_QWORD *)(a1 + 736) = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 952), 0xFFFFFFFFFFFFFFBFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 952), 0xFFFFFFFFDFFFFFFFuLL);
    if ( (*(_BYTE *)(a1 + 8) & 1) == 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFC00uLL);
      _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 8uLL);
      _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 4uLL);
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v3);
  v13 = v14;
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
