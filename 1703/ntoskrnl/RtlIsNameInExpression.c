/*
 * XREFs of RtlIsNameInExpression @ 0x1401150F0
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1401157FC (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepCompareFQBNOperands @ 0x140263C04 (AuthzBasepCompareFQBNOperands.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     RtlpIsNameInExpressionPrivate @ 0x140115180 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x140115698 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
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
    v9 = RtlpUpcaseUnicodeStringPrivate(&UnicodeString, Name, IgnoreCase, 0LL);
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
