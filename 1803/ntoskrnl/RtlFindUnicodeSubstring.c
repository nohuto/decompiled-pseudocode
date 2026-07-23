/*
 * XREFs of RtlFindUnicodeSubstring @ 0x1404E1CE0
 * Callers:
 *     CmpTraceSecurityChanging @ 0x1404E1C30 (CmpTraceSecurityChanging.c)
 * Callees:
 *     memcmp @ 0x140189130 (memcmp.c)
 */

PWCHAR __cdecl RtlFindUnicodeSubstring(
        PUNICODE_STRING FullString,
        PUNICODE_STRING SearchString,
        BOOLEAN CaseInSensitive)
{
  unsigned __int16 Length; // r9
  wchar_t *Buffer; // rbx
  wchar_t *v5; // rdi
  wchar_t *v6; // r14
  wchar_t *v7; // rsi
  signed __int64 i; // rbp
  wchar_t *v9; // r9
  unsigned int v10; // r10d
  unsigned int v11; // r11d
  wchar_t *v13; // rsi
  size_t v14; // rbp

  Length = SearchString->Length;
  if ( FullString->Length < SearchString->Length )
    return 0LL;
  Buffer = FullString->Buffer;
  v5 = (wchar_t *)((char *)Buffer + FullString->Length - Length);
  if ( !CaseInSensitive )
  {
    if ( Buffer <= v5 )
    {
      v13 = SearchString->Buffer;
      v14 = Length;
      while ( memcmp(Buffer, v13, v14) )
      {
        if ( ++Buffer > v5 )
          return 0LL;
      }
      return Buffer;
    }
    return 0LL;
  }
  v6 = SearchString->Buffer;
  v7 = (wchar_t *)((char *)v6 + Length);
  if ( Buffer > v5 )
    return 0LL;
  for ( i = (char *)Buffer - (char *)v6; ; i += 2LL )
  {
    v9 = SearchString->Buffer;
    if ( v6 < v7 )
    {
      do
      {
        v10 = *(wchar_t *)((char *)v9 + i);
        v11 = *v9;
        if ( v10 != v11 )
        {
          if ( v10 >= 0x61 )
          {
            if ( v10 > 0x7A )
              v10 = (unsigned __int16)(v10
                                     + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v10 & 0xF)
                                                                                               + 2
                                                                                               * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int8)v10 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v10)]]]);
            else
              v10 -= 32;
          }
          if ( v11 >= 0x61 )
          {
            if ( v11 > 0x7A )
              v11 = (unsigned __int16)(v11
                                     + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v11 & 0xF)
                                                                                               + 2
                                                                                               * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int8)v11 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v11)]]]);
            else
              v11 -= 32;
          }
          if ( v10 != v11 )
            break;
        }
        ++v9;
      }
      while ( v9 < v7 );
    }
    if ( v9 == v7 )
      break;
    if ( ++Buffer > v5 )
      return 0LL;
  }
  return Buffer;
}
