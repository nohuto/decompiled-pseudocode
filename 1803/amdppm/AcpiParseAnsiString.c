/*
 * XREFs of AcpiParseAnsiString @ 0x1C0026290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall AcpiParseAnsiString(__int64 a1, struct _UNICODE_STRING *a2, unsigned int a3)
{
  __int64 v5; // rdx
  char *v6; // rax
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // r9
  __int16 v9; // r9
  signed int v10; // r8d
  struct _STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  if ( a3 < 0x10 )
    return -1073741811;
  LOWORD(v5) = *(_WORD *)(a1 + 2);
  v6 = (char *)(a1 + 4);
  v7 = 0;
  SourceString.MaximumLength = v5;
  SourceString.Buffer = v6;
  v8 = 0;
  if ( v6 )
  {
    v5 = (unsigned __int16)v5;
    v9 = v5;
    if ( (_WORD)v5 )
    {
      do
      {
        if ( !*v6 )
          break;
        ++v6;
        --v5;
      }
      while ( v5 );
    }
    v10 = v5 == 0 ? 0xC000000D : 0;
    if ( v5 )
      v8 = v9 - v5;
    else
      v8 = 0;
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v10 >= 0 )
    v7 = v8;
  SourceString.Length = v7;
  return RtlAnsiStringToUnicodeString(a2, &SourceString, 1u);
}
