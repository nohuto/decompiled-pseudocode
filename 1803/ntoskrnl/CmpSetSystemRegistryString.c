/*
 * XREFs of CmpSetSystemRegistryString @ 0x1401775A8
 * Callers:
 *     CmpSetSystemValues @ 0x1408B1414 (CmpSetSystemValues.c)
 * Callees:
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401A8EC0 (ZwDeleteValueKey.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x140630F30 (RtlCreateUnicodeStringFromAsciiz.c)
 */

__int64 __fastcall CmpSetSystemRegistryString(HANDLE KeyHandle, PUNICODE_STRING ValueName, PCSZ Source)
{
  wchar_t *Buffer; // rdi
  BOOLEAN v6; // al
  unsigned int v7; // ebx
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  Buffer = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( Source )
  {
    v6 = RtlCreateUnicodeStringFromAsciiz(&UnicodeString, Source);
    Buffer = UnicodeString.Buffer;
    if ( v6 )
      v7 = ZwSetValueKey(KeyHandle, ValueName, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2);
    else
      v7 = -1073741823;
  }
  else
  {
    v7 = ZwDeleteValueKey(KeyHandle, ValueName);
    if ( v7 != -1073741772 )
      return v7;
    v7 = 0;
  }
  if ( Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return v7;
}
