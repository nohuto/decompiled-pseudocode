/*
 * XREFs of BapdGetISRegistryKey @ 0x1404787BC
 * Callers:
 *     BapdRegisterSiData @ 0x1404784CC (BapdRegisterSiData.c)
 *     BapdpProcessVsmKeyBlobs @ 0x1408A2EC0 (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401A7860 (ZwCreateKey.c)
 */

__int64 __fastcall BapdGetISRegistryKey(PHANDLE KeyHandle)
{
  NTSTATUS v2; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandlea; // [rsp+98h] [rbp+18h] BYREF

  KeyHandlea = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandlea, 0x20019u, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"IntegrityServices");
    ObjectAttributes.RootDirectory = KeyHandlea;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v2 = ZwCreateKey(KeyHandle, 0x6001Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL);
    ZwClose(KeyHandlea);
  }
  return (unsigned int)v2;
}
