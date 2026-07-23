/*
 * XREFs of RtlIsNameInUnUpcasedExpression @ 0x1800F4AA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     sub_1800F4B74 @ 0x1800F4B74 (sub_1800F4B74.c)
 *     sub_1800F5100 @ 0x1800F5100 (sub_1800F5100.c)
 */

BOOLEAN __cdecl RtlIsNameInUnUpcasedExpression(
        PUNICODE_STRING Expression,
        PUNICODE_STRING Name,
        BOOLEAN IgnoreCase,
        PWCH UpcaseTable)
{
  PWCH v4; // rdi
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  BOOLEAN v8; // bl
  _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-28h] BYREF
  _UNICODE_STRING v11; // [rsp+40h] [rbp-18h] BYREF

  v4 = UpcaseTable;
  UnicodeString.Buffer = 0LL;
  v11.Buffer = 0LL;
  if ( IgnoreCase && !UpcaseTable )
  {
    v6 = sub_1800F5100(&UnicodeString, Name);
    if ( v6 < 0 )
      RtlRaiseStatus(v6);
    v7 = sub_1800F5100(&v11, Expression);
    if ( v7 < 0 )
      RtlRaiseStatus(v7);
    Name = &UnicodeString;
    Expression = &v11;
    IgnoreCase = 0;
  }
  LOBYTE(UpcaseTable) = 1;
  v8 = sub_1800F4B74((_DWORD)Expression, (_DWORD)Name, IgnoreCase, (_DWORD)UpcaseTable, (__int64)v4);
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v11.Buffer )
    RtlFreeUnicodeString(&v11);
  return v8;
}
