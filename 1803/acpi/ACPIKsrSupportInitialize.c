/*
 * XREFs of ACPIKsrSupportInitialize @ 0x1C0032A58
 * Callers:
 *     ACPIInitialize @ 0x1C0099FEC (ACPIInitialize.c)
 * Callees:
 *     AcpiKsrRestorePersistentContext @ 0x1C0080580 (AcpiKsrRestorePersistentContext.c)
 */

NTSTATUS ACPIKsrSupportInitialize()
{
  NTSTATUS result; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  __int64 v3; // [rsp+70h] [rbp+10h] BYREF
  char v4; // [rsp+78h] [rbp+18h] BYREF

  HalPrivateDispatchTable[120] = (__int64 (__fastcall *)(_QWORD, __int64))ACPILateRestore;
  result = KsrGetFirmwareInformation(&v4);
  if ( result >= 0 )
  {
    v3 = 0LL;
    KsrEnumeratePersistedMemory(&GUID_ACPI_KSR_CONTEXT, AcpiKsrEnumeratePersistedMemory, &v3);
    if ( v3 )
      AcpiKsrRestorePersistentContext();
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\SoftRestart");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 80;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ExCreateCallback(&AcpiKsrCallbackObject, &ObjectAttributes, 0, 1u);
    if ( result >= 0 )
      return (unsigned int)ExRegisterCallback(AcpiKsrCallbackObject, AcpiKsrCallback, 0LL);
  }
  return result;
}
