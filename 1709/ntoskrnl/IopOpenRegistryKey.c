/*
 * XREFs of IopOpenRegistryKey @ 0x14046F3C4
 * Callers:
 *     IopReadDumpRegistry @ 0x14014F84C (IopReadDumpRegistry.c)
 *     IopInitializeOfflineCrashDump @ 0x140151610 (IopInitializeOfflineCrashDump.c)
 *     SecureDump_ReadRegistry @ 0x14015A408 (SecureDump_ReadRegistry.c)
 *     IopIsBitlockerOn @ 0x14015BEA4 (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x1401FCC8C (IopAllowRemoteDASD.c)
 *     IopUnloadDriver @ 0x14046EF24 (IopUnloadDriver.c)
 *     IopLoadUnloadDriver @ 0x14046F260 (IopLoadUnloadDriver.c)
 *     IopBootLog @ 0x14059BC30 (IopBootLog.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405AD678 (IopCopyBootLogRegistryToFile.c)
 *     IopRegistryOpenDeepestPath @ 0x1405CFEF0 (IopRegistryOpenDeepestPath.c)
 *     IopSymlinkQueryEnabledClasses @ 0x1405CFFDC (IopSymlinkQueryEnabledClasses.c)
 *     pIoQueryDeviceDescription @ 0x1405D2770 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x1405D2BE0 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1405D2CF4 (pIoQueryBusDescription.c)
 *     IopSafebootDriverLoad @ 0x1406B5A20 (IopSafebootDriverLoad.c)
 * Callees:
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14017DC60 (ZwCreateKey.c)
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
