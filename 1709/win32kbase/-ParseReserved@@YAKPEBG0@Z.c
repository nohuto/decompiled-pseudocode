/*
 * XREFs of ?ParseReserved@@YAKPEBG0@Z @ 0x1C009BAA0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C00052F0 (xxxCreateThreadInfo.c)
 * Callees:
 *     wcsstr @ 0x1C00A7330 (wcsstr.c)
 */

__int64 __fastcall ParseReserved(const unsigned __int16 *a1, const unsigned __int16 *a2)
{
  wchar_t *v2; // rax
  const WCHAR *v3; // rax
  WCHAR *i; // rdi
  WCHAR v5; // bx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG Value; // [rsp+58h] [rbp+10h] BYREF
  int v9; // [rsp+5Ch] [rbp+14h]

  v9 = HIDWORD(a2);
  Value = 0;
  if ( a1 )
  {
    v2 = wcsstr(a1, L"hotkey.");
    if ( v2 )
    {
      v3 = v2 + 7;
      for ( i = (WCHAR *)v3; (unsigned __int16)(*i - 48) <= 9u; ++i )
        ;
      v5 = *i;
      *i = 0;
      RtlInitUnicodeString(&DestinationString, v3);
      *i = v5;
      RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
    }
  }
  return Value;
}
