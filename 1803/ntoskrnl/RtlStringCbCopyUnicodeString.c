/*
 * XREFs of RtlStringCbCopyUnicodeString @ 0x140076F88
 * Callers:
 *     PoStoreRequester @ 0x140075BAC (PoStoreRequester.c)
 *     PopSafeCopyUnicodeString @ 0x140076ECC (PopSafeCopyUnicodeString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyUnicodeString(NTSTRSAFE_PWSTR pszDest, size_t cbDest, PCUNICODE_STRING SourceString)
{
  size_t v3; // rdx
  NTSTATUS v4; // r9d
  unsigned __int16 Length; // ax
  wchar_t *v7; // r11
  unsigned __int64 v8; // r8
  unsigned __int16 MaximumLength; // r10
  wchar_t *Buffer; // rbx
  unsigned __int64 v11; // r8
  signed __int64 v12; // r11
  NTSTRSAFE_PWSTR v13; // rax

  v3 = cbDest >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFE )
    v4 = -1073741811;
  if ( v4 >= 0 )
  {
    Length = SourceString->Length;
    v7 = 0LL;
    v8 = 0LL;
    v4 = 0;
    if ( (Length & 1) != 0
      || (MaximumLength = SourceString->MaximumLength, (MaximumLength & 1) != 0)
      || Length > MaximumLength
      || MaximumLength == 0xFFFF )
    {
      v4 = -1073741811;
    }
    else
    {
      Buffer = SourceString->Buffer;
      if ( !Buffer && (Length || MaximumLength) )
      {
        v4 = -1073741811;
      }
      else
      {
        v7 = Buffer;
        v8 = (unsigned __int64)Length >> 1;
      }
      if ( v4 >= 0 )
      {
        if ( v3 )
        {
          v11 = v8 - v3;
          v12 = (char *)v7 - (char *)pszDest;
          do
          {
            if ( !(v11 + v3) )
              break;
            *pszDest = *(NTSTRSAFE_PWSTR)((char *)pszDest + v12);
            ++pszDest;
            --v3;
          }
          while ( v3 );
        }
        v13 = pszDest - 1;
        if ( v3 )
          v13 = pszDest;
        v4 = v3 == 0 ? 0x80000005 : 0;
        *v13 = 0;
        return v4;
      }
    }
    *pszDest = 0;
  }
  return v4;
}
