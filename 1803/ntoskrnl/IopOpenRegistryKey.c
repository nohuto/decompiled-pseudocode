/*
 * XREFs of IopOpenRegistryKey @ 0x1405F6BA8
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x14016F648 (IopInitializeOfflineCrashDump.c)
 *     IopReadDumpRegistry @ 0x14017E3C8 (IopReadDumpRegistry.c)
 *     SecureDump_ReadRegistry @ 0x140185278 (SecureDump_ReadRegistry.c)
 *     IopIsBitlockerOn @ 0x1401861DC (IopIsBitlockerOn.c)
 *     IopAllowRemoteDASD @ 0x1402399C8 (IopAllowRemoteDASD.c)
 *     IopUnloadDriver @ 0x1405F5EC0 (IopUnloadDriver.c)
 *     IopLoadUnloadDriver @ 0x1405F6C00 (IopLoadUnloadDriver.c)
 *     IopBootLog @ 0x1405F6E00 (IopBootLog.c)
 *     pIoQueryDeviceDescription @ 0x14060F7F0 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x14060FC60 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14060FD74 (pIoQueryBusDescription.c)
 *     IopCopyBootLogRegistryToFile @ 0x140624BCC (IopCopyBootLogRegistryToFile.c)
 *     IopRegistryOpenDeepestPath @ 0x14063AEE0 (IopRegistryOpenDeepestPath.c)
 *     IopSymlinkQueryEnabledClasses @ 0x14063AFCC (IopSymlinkQueryEnabledClasses.c)
 *     IopSafebootDriverLoad @ 0x14071A6D0 (IopSafebootDriverLoad.c)
 * Callees:
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401A7860 (ZwCreateKey.c)
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
