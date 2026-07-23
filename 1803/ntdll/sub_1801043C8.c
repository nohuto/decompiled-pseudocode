/*
 * XREFs of sub_1801043C8 @ 0x1801043C8
 * Callers:
 *     sub_1801042E8 @ 0x1801042E8 (sub_1801042E8.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 */

int sub_1801043C8()
{
  int result; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+70h] [rbp+37h] BYREF
  int v5; // [rsp+78h] [rbp+3Fh]
  int v6; // [rsp+7Ch] [rbp+43h]

  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_1801116B0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    result = ZwQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&stru_1801116A0,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               &ResultLength);
    if ( result >= 0 && v5 == 4 )
    {
      if ( v6 )
        dword_18015D040 |= 0x10u;
      else
        dword_18015D040 |= 8u;
    }
  }
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
