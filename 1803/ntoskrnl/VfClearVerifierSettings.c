/*
 * XREFs of VfClearVerifierSettings @ 0x1402A95D4
 * Callers:
 *     VfNotifyVerifierOfEvent @ 0x140813B50 (VfNotifyVerifierOfEvent.c)
 *     Phase1InitializationIoReady @ 0x1408A5E94 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401A8EC0 (ZwDeleteValueKey.c)
 *     ZwFlushKey @ 0x1401A9100 (ZwFlushKey.c)
 *     VfUtilDbgPrint @ 0x1402A9838 (VfUtilDbgPrint.c)
 */

NTSTATUS VfClearVerifierSettings()
{
  unsigned int v0; // eax
  NTSTATUS v1; // eax
  NTSTATUS v2; // eax
  NTSTATUS v3; // eax
  NTSTATUS v4; // eax
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
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
    RtlInitUnicodeString(&DestinationString, L"VerifierRandomTargets");
    v5 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( v5 < 0 )
      VfUtilDbgPrint("Driver Verifier: Failed to delete VerifierRandomTargets key value with status: 0x%x\n", v5);
    if ( VfFlightOptions )
    {
      RtlInitUnicodeString(&DestinationString, L"XdvVerifierOptions");
      v6 = ZwDeleteValueKey(KeyHandle, &DestinationString);
      if ( v6 < 0 )
        VfUtilDbgPrint("Driver Verifier: Failed to delete XdvVerifierOptions key value with status: 0x%x\n", v6);
    }
    RtlInitUnicodeString(&DestinationString, L"VrfPersistThroughUpgrade");
    v7 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( v7 < 0 )
      VfUtilDbgPrint("Driver Verifier: Failed to delete VrfPersistThroughUpgrade key value with status: 0x%x\n", v7);
    if ( VfXdvSuppressDriversBufferLength != -1 )
    {
      RtlInitUnicodeString(&DestinationString, L"VerifyDriversSuppress");
      v8 = ZwDeleteValueKey(KeyHandle, &DestinationString);
      if ( v8 < 0 )
        VfUtilDbgPrint("Driver Verifier: Failed to delete VerifyDriversSuppress key value with status: 0x%x\n", v8);
    }
    ZwFlushKey(KeyHandle);
    if ( VfClearanceFlag )
      VfUtilDbgPrint("Driver Verifier: Clearing Verifier options from Registry for preventing recursive crash.\n");
  }
  return ZwClose(KeyHandle);
}
