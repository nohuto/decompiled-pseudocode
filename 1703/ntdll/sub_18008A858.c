/*
 * XREFs of sub_18008A858 @ 0x18008A858
 * Callers:
 *     sub_18008A7B4 @ 0x18008A7B4 (sub_18008A7B4.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 */

int sub_18008A858()
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
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_1801108A0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    result = ZwQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&stru_180110890,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               &ResultLength);
    if ( result >= 0 && v5 == 4 )
    {
      if ( v6 )
        dword_18015BFDC |= 0x10u;
      else
        dword_18015BFDC |= 8u;
    }
  }
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
