/*
 * XREFs of IopOpenRegistryKey @ 0x14044DB84
 * Callers:
 *     IopIsBitlockerOn @ 0x1401595AC (IopIsBitlockerOn.c)
 *     IopInitializeOfflineCrashDump @ 0x140159E68 (IopInitializeOfflineCrashDump.c)
 *     SecureDump_ReadRegistry @ 0x14015A1A8 (SecureDump_ReadRegistry.c)
 *     IopReadDumpRegistry @ 0x14015A28C (IopReadDumpRegistry.c)
 *     IopAllowRemoteDASD @ 0x1401F6E38 (IopAllowRemoteDASD.c)
 *     IopLoadUnloadDriver @ 0x14044DA20 (IopLoadUnloadDriver.c)
 *     IopBootLog @ 0x14045B6F8 (IopBootLog.c)
 *     pIoQueryBusDescription @ 0x1405866A8 (pIoQueryBusDescription.c)
 *     pIoQueryDeviceDescription @ 0x140586DD0 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x140587240 (IoQueryDeviceDescription.c)
 *     IopRegistryOpenDeepestPath @ 0x1405BDF90 (IopRegistryOpenDeepestPath.c)
 *     IopSymlinkQueryEnabledClasses @ 0x1405BE07C (IopSymlinkQueryEnabledClasses.c)
 *     IopUnloadDriver @ 0x1405CC050 (IopUnloadDriver.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405D6404 (IopCopyBootLogRegistryToFile.c)
 *     IopSafebootDriverLoad @ 0x140689D60 (IopSafebootDriverLoad.c)
 * Callees:
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14017E2E0 (ZwCreateKey.c)
 */

NTSTATUS __fastcall IopOpenRegistryKey(HANDLE *a1, void *a2, UNICODE_STRING *a3, ACCESS_MASK a4, ULONG Disposition)
{
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  ObjectAttributes.ObjectName = a3;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  if ( (_BYTE)Disposition )
    return ZwCreateKey(a1, a4, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
  else
    return ZwOpenKey(a1, a4, &ObjectAttributes);
}
