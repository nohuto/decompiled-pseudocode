/*
 * XREFs of sub_1800DEEF4 @ 0x1800DEEF4
 * Callers:
 *     sub_1800DEAD4 @ 0x1800DEAD4 (sub_1800DEAD4.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     sub_1800DF04C @ 0x1800DF04C (sub_1800DF04C.c)
 */

__int64 sub_1800DEEF4()
{
  unsigned int v0; // ebx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+18h] BYREF

  v0 = 0;
  KeyHandle = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\Windows Error Reporting\\Escalation");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    sub_1800DF04C(KeyHandle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  LOBYTE(v0) = 0;
  return v0;
}
