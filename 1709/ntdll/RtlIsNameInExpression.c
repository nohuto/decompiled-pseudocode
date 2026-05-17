/*
 * XREFs of RtlIsNameInExpression @ 0x1800F84F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     RtlFreeAnsiString @ 0x18004F9F0 (RtlFreeAnsiString.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800F858C (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1800F8AAC (RtlpUpcaseUnicodeStringPrivate.c)
 */

char __fastcall RtlIsNameInExpression(__int64 a1, UNICODE_STRING *p_UnicodeString, __int64 a3, __int64 a4)
{
  int v6; // eax
  wchar_t *Buffer; // rbx
  char IsNameInExpressionPrivate; // di
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  if ( !(_BYTE)a3 || a4 )
  {
    Buffer = 0LL;
    UnicodeString.Buffer = 0LL;
  }
  else
  {
    v6 = RtlpUpcaseUnicodeStringPrivate(&UnicodeString);
    if ( v6 < 0 )
      RtlRaiseStatus(v6);
    p_UnicodeString = &UnicodeString;
    LOBYTE(a3) = 0;
    Buffer = UnicodeString.Buffer;
  }
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate(a1, p_UnicodeString, a3, a4);
  if ( Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return IsNameInExpressionPrivate;
}
