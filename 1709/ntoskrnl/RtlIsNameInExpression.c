/*
 * XREFs of RtlIsNameInExpression @ 0x1400E5A80
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x140016D80 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepCompareFQBNOperands @ 0x14028DF34 (AuthzBasepCompareFQBNOperands.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1400E5B10 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1400E6130 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall RtlIsNameInExpression(
        PUNICODE_STRING Expression,
        PUNICODE_STRING Name,
        BOOLEAN IgnoreCase,
        PWCH UpcaseTable)
{
  wchar_t *Buffer; // rdi
  BOOLEAN IsNameInExpressionPrivate; // bl
  NTSTATUS v9; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  if ( IgnoreCase && !UpcaseTable )
  {
    v9 = RtlpUpcaseUnicodeStringPrivate(&UnicodeString, Name);
    if ( v9 < 0 )
      RtlRaiseStatus(v9);
    Name = &UnicodeString;
    IgnoreCase = 0;
    Buffer = UnicodeString.Buffer;
  }
  else
  {
    Buffer = 0LL;
    UnicodeString.Buffer = 0LL;
  }
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate(Expression, Name, IgnoreCase, UpcaseTable);
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  return IsNameInExpressionPrivate;
}
