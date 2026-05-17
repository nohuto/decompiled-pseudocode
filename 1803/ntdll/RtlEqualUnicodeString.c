/*
 * XREFs of RtlEqualUnicodeString @ 0x1800388A0
 * Callers:
 *     sub_180004B90 @ 0x180004B90 (sub_180004B90.c)
 *     sub_18002BDB8 @ 0x18002BDB8 (sub_18002BDB8.c)
 *     sub_18002BF70 @ 0x18002BF70 (sub_18002BF70.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1800380F0 (RtlDeriveCapabilitySidsFromName.c)
 *     sub_1800385D0 @ 0x1800385D0 (sub_1800385D0.c)
 *     sub_18003E0C0 @ 0x18003E0C0 (sub_18003E0C0.c)
 *     sub_1800413EC @ 0x1800413EC (sub_1800413EC.c)
 *     RtlEqualDomainName @ 0x180067DA0 (RtlEqualDomainName.c)
 *     sub_18006CBE8 @ 0x18006CBE8 (sub_18006CBE8.c)
 *     sub_180076898 @ 0x180076898 (sub_180076898.c)
 *     sub_180088E4C @ 0x180088E4C (sub_180088E4C.c)
 *     sub_1800C9BC0 @ 0x1800C9BC0 (sub_1800C9BC0.c)
 *     sub_1800CA0F0 @ 0x1800CA0F0 (sub_1800CA0F0.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlEqualUnicodeString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  __int64 v3; // r10
  char *v4; // r9
  char *v5; // r10
  __int64 v6; // r11
  unsigned int v7; // edx
  unsigned int v8; // r8d
  __int64 v10; // rcx

  v3 = *a1;
  if ( (_DWORD)v3 == *a2 )
  {
    v4 = (char *)*((_QWORD *)a1 + 1);
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
