/*
 * XREFs of sub_1800D8814 @ 0x1800D8814
 * Callers:
 *     sub_1800D8340 @ 0x1800D8340 (sub_1800D8340.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     sub_1800D88C0 @ 0x1800D88C0 (sub_1800D88C0.c)
 */

__int64 sub_1800D8814()
{
  unsigned int v0; // ebx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+18h] BYREF

  v0 = 0;
  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\SQMClient\\Windows\\WMR");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20119u, &ObjectAttributes) >= 0 )
    sub_1800D88C0(KeyHandle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  LOBYTE(v0) = 0;
  return v0;
}
