/*
 * XREFs of RtlIsNameInExpression @ 0x1800F6E30
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 *     sub_1800F6ECC @ 0x1800F6ECC (sub_1800F6ECC.c)
 *     sub_1800F73EC @ 0x1800F73EC (sub_1800F73EC.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __cdecl RtlIsNameInExpression(
        PUNICODE_STRING Expression,
        PUNICODE_STRING Name,
        BOOLEAN IgnoreCase,
        PWCH UpcaseTable)
{
  NTSTATUS v6; // eax
  PWCH Buffer; // rbx
  BOOLEAN v8; // di
  _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  if ( !IgnoreCase || UpcaseTable )
  {
    Buffer = 0LL;
    UnicodeString.Buffer = 0LL;
  }
  else
  {
    v6 = sub_1800F73EC(&UnicodeString, Name);
    if ( v6 < 0 )
      RtlRaiseStatus(v6);
    Name = &UnicodeString;
    IgnoreCase = 0;
    Buffer = UnicodeString.Buffer;
  }
  v8 = sub_1800F6ECC(Expression, Name, IgnoreCase, UpcaseTable);
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  return v8;
}
