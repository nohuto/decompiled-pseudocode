/*
 * XREFs of RtlIsNameInExpression @ 0x140043EC0
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x140044640 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepCompareFQBNOperands @ 0x1402C3BB0 (AuthzBasepCompareFQBNOperands.c)
 * Callees:
 *     RtlpIsNameInExpressionPrivate @ 0x140043FF0 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x140044568 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 */

BOOLEAN __stdcall RtlIsNameInExpression(
        PUNICODE_STRING Expression,
        PUNICODE_STRING Name,
        BOOLEAN IgnoreCase,
        PWCH UpcaseTable)
{
  int v5; // esi
  NTSTATUS v6; // eax
  wchar_t *Buffer; // rbx
  BOOLEAN IsNameInExpressionPrivate; // di
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  v5 = (int)Expression;
  if ( !IgnoreCase || UpcaseTable )
  {
    Buffer = 0LL;
    UnicodeString.Buffer = 0LL;
  }
  else
  {
    v6 = RtlpUpcaseUnicodeStringPrivate(&UnicodeString, Name);
    if ( v6 < 0 )
      RtlRaiseStatus(v6);
    Name = &UnicodeString;
    IgnoreCase = 0;
    Buffer = UnicodeString.Buffer;
  }
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate(v5, (_DWORD)Name, IgnoreCase, 0, (__int64)UpcaseTable);
  if ( Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return IsNameInExpressionPrivate;
}
