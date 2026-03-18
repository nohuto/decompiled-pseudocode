/*
 * XREFs of VfClearVerifierSettings @ 0x140276548
 * Callers:
 *     VfNotifyVerifierOfEvent @ 0x1407A69D0 (VfNotifyVerifierOfEvent.c)
 *     Phase1InitializationIoReady @ 0x14082FAF0 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14017F2A0 (ZwDeleteValueKey.c)
 *     ZwFlushKey @ 0x14017F4E0 (ZwFlushKey.c)
 *     VfUtilDbgPrint @ 0x140276714 (VfUtilDbgPrint.c)
 */

NTSTATUS VfClearVerifierSettings()
{
  unsigned int v0; // eax
  NTSTATUS v1; // eax
  NTSTATUS v2; // eax
  NTSTATUS v3; // eax
  NTSTATUS v4; // eax
  NTSTATUS v5; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  unsigned int Data; // [rsp+80h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  if ( (VfOptionFlags & 0x20) != 0 )
  {
    v0 = VfOptionFlags & 0xFFFFFFCF;
  }
  else if ( (VfOptionFlags & 0x400) != 0 )
  {
    v0 = VfOptionFlags & 0xFFFFFBC7;
  }
  else
  {
    v0 = VfOptionFlags & 0xFFFFFFE7;
  }
  ObjectAttributes.RootDirectory = 0LL;
  Data = v0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSetControlSessionManagerMemoryManagement;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v1 < 0 )
    return VfUtilDbgPrint(
             "Driver Verifier: Failed to open Memory Management key with status: 0x%x\n Registry updates aborted!",
             v1);
  RtlInitUnicodeString(&DestinationString, L"VerifierOptions");
  v2 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
  if ( v2 < 0 )
  {
    VfUtilDbgPrint(
      "Driver Verifier: Failed to set VerifierOptionFlags key value with status: 0x%x\n Registry updates aborted!",
      v2);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"VerifyDriverLevel");
    v3 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( v3 < 0 )
      VfUtilDbgPrint("Driver Verifier: Failed to delete VerifyDriverLevel key value with status: 0x%x\n", v3);
    RtlInitUnicodeString(&DestinationString, L"VerifyDrivers");
    v4 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( v4 < 0 )
      VfUtilDbgPrint("Driver Verifier: Failed to delete VerifyDrivers key value with status: 0x%x\n", v4);
    if ( VfFlightOptions )
    {
      RtlInitUnicodeString(&DestinationString, L"XdvVerifierOptions");
      v5 = ZwDeleteValueKey(KeyHandle, &DestinationString);
      if ( v5 < 0 )
        VfUtilDbgPrint("Driver Verifier: Failed to delete XdvVerifierOptions key value with status: 0x%x\n", v5);
    }
    ZwFlushKey(KeyHandle);
    if ( VfClearanceFlag )
      VfUtilDbgPrint("Driver Verifier: Clearing Verifier options from Registry for preventing recursive crash.\n");
  }
  return ZwClose(KeyHandle);
}
