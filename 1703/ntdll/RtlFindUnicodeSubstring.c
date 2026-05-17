/*
 * XREFs of RtlFindUnicodeSubstring @ 0x180068490
 * Callers:
 *     RtlReplaceSystemDirectoryInPath @ 0x180068390 (RtlReplaceSystemDirectoryInPath.c)
 * Callees:
 *     memcmp @ 0x180099A70 (memcmp.c)
 */

char *__fastcall RtlFindUnicodeSubstring(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  char *v3; // rbx
  char *v4; // rdi
  char *v5; // rsi
  unsigned __int16 *v6; // r10
  char *i; // r11
  unsigned __int16 *v8; // r9
  unsigned int v9; // edx
  unsigned int v10; // r8d
  const void *v12; // rsi
  size_t v13; // rbp

  if ( *a1 < *a2 )
    return 0LL;
  v3 = (char *)*((_QWORD *)a1 + 1);
  v4 = &v3[*a1 - *a2];
  if ( !a3 )
  {
    if ( v3 <= v4 )
    {
      v12 = (const void *)*((_QWORD *)a2 + 1);
      v13 = *a2;
      while ( memcmp(v3, v12, v13) )
      {
        v3 += 2;
        if ( v3 > v4 )
          return 0LL;
      }
      return v3;
    }
    return 0LL;
  }
  v5 = (char *)*((_QWORD *)a2 + 1);
  v6 = (unsigned __int16 *)&v5[*a2];
  if ( v3 > v4 )
    return 0LL;
  for ( i = (char *)(v3 - v5); ; i += 2 )
  {
    v8 = (unsigned __int16 *)v5;
    if ( v5 < (char *)v6 )
    {
      do
      {
        v9 = *(unsigned __int16 *)((char *)v8 + (_QWORD)i);
        v10 = *v8;
        if ( v9 != v10 )
        {
          if ( v9 >= 0x61 )
          {
            if ( v9 > 0x7A )
              v9 = (unsigned __int16)(v9
                                    + *(_WORD *)(qword_180159D68
                                               + 2LL
                                               * ((v9 & 0xF)
                                                + *(unsigned __int16 *)(qword_180159D68
                                                                      + 2LL
                                                                      * (((unsigned __int8)v9 >> 4)
                                                                       + (unsigned int)*(unsigned __int16 *)(qword_180159D68 + 2LL * BYTE1(v9)))))));
            else
              v9 -= 32;
          }
          if ( v10 >= 0x61 )
          {
            if ( v10 > 0x7A )
              v10 = (unsigned __int16)(v10
                                     + *(_WORD *)(qword_180159D68
                                                + 2LL
                                                * ((v10 & 0xF)
                                                 + *(unsigned __int16 *)(qword_180159D68
                                                                       + 2LL
                                                                       * (((unsigned __int8)v10 >> 4)
                                                                        + (unsigned int)*(unsigned __int16 *)(qword_180159D68 + 2LL * BYTE1(v10)))))));
            else
              v10 -= 32;
          }
          if ( v9 != v10 )
            break;
        }
        ++v8;
      }
      while ( v8 < v6 );
    }
    if ( v8 == v6 )
      break;
    v3 += 2;
    if ( v3 > v4 )
      return 0LL;
  }
  return v3;
}
