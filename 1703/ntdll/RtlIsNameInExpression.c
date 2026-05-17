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

char __fastcall RtlIsNameInExpression(__int64 a1, UNICODE_STRING *p_UnicodeString, __int64 a3, __int64 a4)
{
  int v6; // eax
  wchar_t *Buffer; // rbx
  char v8; // di
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  if ( !(_BYTE)a3 || a4 )
  {
    Buffer = 0LL;
    UnicodeString.Buffer = 0LL;
  }
  else
  {
    v6 = sub_1800F73EC(&UnicodeString);
    if ( v6 < 0 )
      RtlRaiseStatus(v6);
    p_UnicodeString = &UnicodeString;
    LOBYTE(a3) = 0;
    Buffer = UnicodeString.Buffer;
  }
  v8 = sub_1800F6ECC(a1, p_UnicodeString, a3, a4);
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  return v8;
}
