/*
 * XREFs of ACPIRootIrpRemoveDevice @ 0x1C00572B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001680 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInitializeKernelTableHandler @ 0x1C000597C (ACPIInitializeKernelTableHandler.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0008504 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008934 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ACPIRootIrpRemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rdi
  unsigned __int8 MinorFunction; // bp
  char v6; // al
  __int64 v7; // rdx
  const char *v8; // rcx
  char v9; // r10
  const char *v10; // r8
  __int64 v11; // rax
  int v12; // edx
  void *v13; // rcx
  void *v14; // rcx
  KIRQL v15; // al
  struct _DEVICE_OBJECT *v16; // rbx

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  *(_DWORD *)(DeviceExtension + 320) = 4;
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  v6 = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 728), Irp);
  v7 = *(_QWORD *)(DeviceExtension + 8);
  v8 = byte_1C0066CD0;
  v9 = v6;
  v10 = byte_1C0066CD0;
  if ( (v7 & 0x200000000000LL) != 0 )
  {
    v8 = *(const char **)(DeviceExtension + 560);
    if ( (v7 & 0x400000000000LL) != 0 )
      v10 = *(const char **)(DeviceExtension + 568);
  }
  v11 = MinorFunction;
  if ( MinorFunction >= 0x1Au )
    v11 = 26LL;
  WPP_RECORDER_SF_qsLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0x17u,
    (__int64)&WPP_d9eb6b6eaeca3f6792a7ef761dd6d8ac_Traceguids,
    (char)Irp,
    ACPIDispatchPnpTableNames[v11],
    v9,
    DeviceExtension,
    v8,
    v10);
  if ( IoWMIRegistrationControl(DeviceObject, 2u) < 0 )
  {
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      1,
      11,
      (__int64)&WPP_8e7095626164326d852ba5a21c051e0b_Traceguids);
  }
  ACPIInitializeKernelTableHandler(0, (__int64)DeviceObject->DriverObject);
  v13 = *(void **)(DeviceExtension + 624);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  v14 = *(void **)(DeviceExtension + 632);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  v15 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  DeviceObject->DeviceExtension = 0LL;
  v16 = *(struct _DEVICE_OBJECT **)(DeviceExtension + 728);
  *(_QWORD *)(DeviceExtension + 728) = 0LL;
  *(_QWORD *)(DeviceExtension + 736) = 0LL;
  *(_QWORD *)(DeviceExtension + 720) = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 8), 0xFFFFFFFFFFFFFC00uLL);
  _InterlockedOr64((volatile signed __int64 *)(DeviceExtension + 8), 8uLL);
  _InterlockedOr64((volatile signed __int64 *)(DeviceExtension + 8), 4uLL);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v15);
  ACPIInitDereferenceDeviceExtensionUnlocked((volatile signed __int32 *)DeviceExtension);
  IoDetachDevice(v16);
  IoDeleteDevice(DeviceObject);
  return 0LL;
}
