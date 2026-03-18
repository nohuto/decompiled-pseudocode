/*
 * XREFs of RtlFindUnicodeSubstring @ 0x1404774F0
 * Callers:
 *     CmpTraceSecurityChanging @ 0x14047760C (CmpTraceSecurityChanging.c)
 * Callees:
 *     memcmp @ 0x14015F370 (memcmp.c)
 */

char *__fastcall RtlFindUnicodeSubstring(unsigned __int16 *a1, __int16 *a2, char a3)
{
  unsigned __int16 v3; // r9
  char *v4; // rbx
  char *v5; // rbp
  unsigned __int64 v6; // r14
  unsigned __int16 *v7; // rsi
  char *i; // rdi
  unsigned __int16 *v9; // rax
  unsigned int v10; // r10d
  unsigned int v11; // r11d
  const void *v13; // rdi
  size_t v14; // rsi

  v3 = *a2;
  if ( *a1 < (unsigned __int16)*a2 )
    return 0LL;
  v4 = (char *)*((_QWORD *)a1 + 1);
  v5 = &v4[*a1 - v3];
  if ( !a3 )
  {
    if ( v4 <= v5 )
    {
      v13 = (const void *)*((_QWORD *)a2 + 1);
      v14 = v3;
      while ( memcmp(v4, v13, v14) )
      {
        v4 += 2;
        if ( v4 > v5 )
          return 0LL;
      }
      return v4;
    }
    return 0LL;
  }
  v6 = *((_QWORD *)a2 + 1);
  v7 = (unsigned __int16 *)(v6 + v3);
  if ( v4 > v5 )
    return 0LL;
  for ( i = &v4[-v6]; ; i += 2 )
  {
    v9 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
    if ( v6 < (unsigned __int64)v7 )
    {
      do
      {
        v10 = *(unsigned __int16 *)((char *)v9 + (_QWORD)i);
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
    v4 += 2;
    if ( v4 > v5 )
      return 0LL;
  }
  return v4;
}
