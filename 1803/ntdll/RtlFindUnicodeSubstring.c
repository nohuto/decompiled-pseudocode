/*
 * XREFs of RtlFindUnicodeSubstring @ 0x1800E4B20
 * Callers:
 *     RtlReplaceSystemDirectoryInPath @ 0x1800E4CA0 (RtlReplaceSystemDirectoryInPath.c)
 * Callees:
 *     memcmp @ 0x18008EED0 (memcmp.c)
 */

PWCHAR __cdecl RtlFindUnicodeSubstring(
        PUNICODE_STRING FullString,
        PUNICODE_STRING SearchString,
        BOOLEAN CaseInSensitive)
{
  WCHAR *Buffer; // rbx
  WCHAR *v4; // rdi
  PWCH v5; // rsi
  unsigned __int16 *v6; // r10
  signed __int64 i; // r11
  PWCH j; // r9
  unsigned int v9; // edx
  unsigned int v10; // r8d
  PWCH v12; // rsi
  size_t Length; // rbp

  if ( FullString->Length >= SearchString->Length )
  {
    Buffer = FullString->Buffer;
    v4 = (WCHAR *)((char *)Buffer + FullString->Length - SearchString->Length);
    if ( CaseInSensitive )
    {
      v5 = SearchString->Buffer;
      v6 = (PWCH)((char *)v5 + SearchString->Length);
      if ( Buffer <= v4 )
      {
        for ( i = (char *)Buffer - (char *)v5; ; i += 2LL )
        {
          for ( j = v5; j < v6; ++j )
          {
            v9 = *(PWCH)((char *)j + i);
            v10 = *j;
            if ( v9 != v10 )
            {
              if ( v9 >= 0x61 )
              {
                if ( v9 > 0x7A )
                  v9 = (unsigned __int16)(v9
                                        + *(_WORD *)(qword_18015B238
                                                   + 2LL
                                                   * ((v9 & 0xF)
                                                    + *(unsigned __int16 *)(qword_18015B238
                                                                          + 2LL
                                                                          * (((unsigned __int8)v9 >> 4)
                                                                           + (unsigned int)*(unsigned __int16 *)(qword_18015B238 + 2LL * BYTE1(v9)))))));
                else
                  v9 -= 32;
              }
              if ( v10 >= 0x61 )
              {
                if ( v10 > 0x7A )
                  v10 = (unsigned __int16)(v10
                                         + *(_WORD *)(qword_18015B238
                                                    + 2LL
                                                    * ((v10 & 0xF)
                                                     + *(unsigned __int16 *)(qword_18015B238
                                                                           + 2LL
                                                                           * (((unsigned __int8)v10 >> 4)
                                                                            + (unsigned int)*(unsigned __int16 *)(qword_18015B238 + 2LL * BYTE1(v10)))))));
                else
                  v10 -= 32;
              }
              if ( v9 != v10 )
                break;
            }
          }
          if ( j == v6 )
            break;
          if ( ++Buffer > v4 )
            return 0LL;
        }
        return Buffer;
      }
    }
    else if ( Buffer <= v4 )
    {
      v12 = SearchString->Buffer;
      Length = SearchString->Length;
      while ( memcmp(Buffer, v12, Length) )
      {
        if ( ++Buffer > v4 )
          return 0LL;
      }
      return Buffer;
    }
  }
  return 0LL;
}
