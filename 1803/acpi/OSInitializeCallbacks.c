/*
 * XREFs of OSInitializeCallbacks @ 0x1C0098E48
 * Callers:
 *     ACPIInitializeAMLI @ 0x1C009A2F4 (ACPIInitializeAMLI.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C0028B50 (ACPIInitReferenceDeviceExtension.c)
 *     AMLIRegEventHandler @ 0x1C0044038 (AMLIRegEventHandler.c)
 *     CmosGetInterface @ 0x1C007909C (CmosGetInterface.c)
 *     RegisterOperationRegionHandler @ 0x1C0080D54 (RegisterOperationRegionHandler.c)
 */

void OSInitializeCallbacks()
{
  ULONG_PTR v0; // rbx
  KIRQL v1; // dl
  KIRQL v2; // al
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  AMLIRegEventHandler(0x13u, 0, ACPITableUnload, 0LL);
  AMLIRegEventHandler(0x12u, 0, ACPITableLoad, 0LL);
  AMLIRegEventHandler(0xBu, 0, ACPITableNotifyFreeObject, 0LL);
  AMLIRegEventHandler(0xDu, 0, ACPIMapNamedTable, 0LL);
  AMLIRegEventHandler(0xEu, 0, ACPIGetTableVersion, 0LL);
  AMLIRegEventHandler(2u, 0, NotifyHandler, 0LL);
  AMLIRegEventHandler(5u, 0, GlobalLockEventHandler, 0LL);
  AMLIRegEventHandler(0xAu, 0, OSNotifyCreate, 0LL);
  AMLIRegEventHandler(3u, 0, OSNotifyFatalError, 0LL);
  AMLIRegEventHandler(0xFu, 0, AcpiRootIsFeatureSupported, 0LL);
  AMLIRegEventHandler(0x10u, 0, AcpiHandleDeviceFirmwareLock, 0LL);
  AMLIRegEventHandler(0x11u, 0, ACPIQueryDeviceLockMutexSupport, 0LL);
  AMLIRegEventHandler(0x14u, 0, AcpiNativeMethodEvalRequestHandler, 0LL);
  RegisterOperationRegionHandler(0LL, 2, 2u, (__int64)PciConfigSpaceHandler, 0LL, &v3);
  RegisterOperationRegionHandler(0LL, 2, 5u, (__int64)CmosConfigSpaceHandler, 0LL, &v3);
  RegisterOperationRegionHandler(0LL, 1, 7u, (__int64)IpmiOpRegionHandler, 0LL, &v3);
  KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v0 = RootDeviceExtension;
  ACPIInitReferenceDeviceExtension(RootDeviceExtension);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v1);
  CmosGetInterface(*(PDEVICE_OBJECT *)(v0 + 720));
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  --*(_DWORD *)(RootDeviceExtension + 684);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v2);
}
