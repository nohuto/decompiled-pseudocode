/*
 * XREFs of RtlPrefixUnicodeString @ 0x18006CD90
 * Callers:
 *     RtlNtPathNameToDosPathName @ 0x180002820 (RtlNtPathNameToDosPathName.c)
 *     sub_18003D190 @ 0x18003D190 (sub_18003D190.c)
 *     sub_18006CBE8 @ 0x18006CBE8 (sub_18006CBE8.c)
 *     sub_180076488 @ 0x180076488 (sub_180076488.c)
 *     sub_1800CA0F0 @ 0x1800CA0F0 (sub_1800CA0F0.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlPrefixUnicodeString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  __int64 v3; // r10
  char *v4; // r9
  char *v5; // r10
  __int64 v6; // r11
  unsigned int v7; // edx
  unsigned int v8; // r8d
  __int64 v10; // rcx

  v3 = *a1;
  v4 = (char *)*((_QWORD *)a1 + 1);
  if ( *a2 >= (unsigned int)v3 )
  {
    v5 = &v4[v3];
    if ( a3 )
    {
      if ( v4 < v5 )
      {
        v6 = *((_QWORD *)a2 + 1) - (_QWORD)v4;
        while ( 1 )
        {
          v7 = *(unsigned __int16 *)v4;
          v8 = *(unsigned __int16 *)&v4[v6];
          if ( v7 != v8 )
          {
            if ( v7 >= 0x61 )
            {
              if ( v7 > 0x7A )
                v7 = (unsigned __int16)(v7
                                      + *(_WORD *)(qword_18015B238
                                                 + 2LL
                                                 * ((v7 & 0xF)
                                                  + *(unsigned __int16 *)(qword_18015B238
                                                                        + 2LL
                                                                        * (((unsigned __int8)v7 >> 4)
                                                                         + (unsigned int)*(unsigned __int16 *)(qword_18015B238 + 2LL * BYTE1(v7)))))));
              else
                v7 -= 32;
            }
            if ( v8 >= 0x61 )
            {
              if ( v8 > 0x7A )
                v8 = (unsigned __int16)(v8
                                      + *(_WORD *)(qword_18015B238
                                                 + 2LL
                                                 * ((v8 & 0xF)
                                                  + *(unsigned __int16 *)(qword_18015B238
                                                                        + 2LL
                                                                        * (((unsigned __int8)v8 >> 4)
                                                                         + (unsigned int)*(unsigned __int16 *)(qword_18015B238 + 2LL * BYTE1(v8)))))));
              else
                v8 -= 32;
            }
            if ( v7 != v8 )
              break;
          }
          v4 += 2;
          if ( v4 >= v5 )
            return 1;
        }
        return 0;
      }
    }
    else if ( v4 < v5 )
    {
      v10 = *((_QWORD *)a2 + 1) - (_QWORD)v4;
      while ( *(_WORD *)v4 == *(_WORD *)&v4[v10] )
      {
        v4 += 2;
        if ( v4 >= v5 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  return 0;
}
