/*
 * XREFs of RtlPrefixUnicodeString @ 0x180071E10
 * Callers:
 *     sub_18003E060 @ 0x18003E060 (sub_18003E060.c)
 *     sub_180071C68 @ 0x180071C68 (sub_180071C68.c)
 *     sub_18007C494 @ 0x18007C494 (sub_18007C494.c)
 *     RtlNtPathNameToDosPathName @ 0x1800D4A10 (RtlNtPathNameToDosPathName.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlPrefixUnicodeString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  __int64 v3; // r10
  char *v4; // r9
  __int64 v5; // r11
  char *v6; // r10
  __int64 v7; // r11
  unsigned int v8; // edx
  unsigned int v9; // r8d
  __int64 v11; // r11

  v3 = *a1;
  v4 = (char *)*((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a2 + 1);
  if ( *a2 >= (unsigned int)v3 )
  {
    v6 = &v4[v3];
    if ( a3 )
    {
      if ( v4 < v6 )
      {
        v7 = v5 - (_QWORD)v4;
        while ( 1 )
        {
          v8 = *(unsigned __int16 *)v4;
          v9 = *(unsigned __int16 *)&v4[v7];
          if ( v8 != v9 )
          {
            if ( v8 >= 0x61 )
            {
              if ( v8 > 0x7A )
                v8 = (unsigned __int16)(v8
                                      + *(_WORD *)(qword_180159D68
                                                 + 2LL
                                                 * ((v8 & 0xF)
                                                  + *(unsigned __int16 *)(qword_180159D68
                                                                        + 2LL
                                                                        * (((unsigned __int8)v8 >> 4)
                                                                         + (unsigned int)*(unsigned __int16 *)(qword_180159D68 + 2LL * BYTE1(v8)))))));
              else
                v8 -= 32;
            }
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
            if ( v8 != v9 )
              break;
          }
          v4 += 2;
          if ( v4 >= v6 )
            return 1;
        }
        return 0;
      }
    }
    else if ( v4 < v6 )
    {
      v11 = v5 - (_QWORD)v4;
      while ( *(_WORD *)v4 == *(_WORD *)&v4[v11] )
      {
        v4 += 2;
        if ( v4 >= v6 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  return 0;
}
