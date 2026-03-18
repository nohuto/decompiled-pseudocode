/*
 * XREFs of MyRegOpenKeyForRead @ 0x1C00384C4
 * Callers:
 *     ReadManifestAssignedValue @ 0x1C0037C9C (ReadManifestAssignedValue.c)
 *     CheckUSBFnIncludeDefaultCfg @ 0x1C0037D60 (CheckUSBFnIncludeDefaultCfg.c)
 *     CheckUSBFnConfiguration @ 0x1C0037EF8 (CheckUSBFnConfiguration.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C0038118 (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C003827C (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall MyRegOpenKeyForRead(__int64 a1, const WCHAR *a2, void **a3)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  RtlInitUnicodeString(&DestinationString, a2);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(a3, 0x20019u, &ObjectAttributes);
}
