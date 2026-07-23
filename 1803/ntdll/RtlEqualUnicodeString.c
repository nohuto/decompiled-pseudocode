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

BOOLEAN __cdecl RtlEqualUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // r10
  PWCH Buffer; // r9
  WCHAR *v5; // r10
  char *v6; // r11
  unsigned int v7; // edx
  unsigned int v8; // r8d
  char *v10; // rcx

  Length = String1->Length;
  if ( (_DWORD)Length == String2->Length )
  {
    Buffer = String1->Buffer;
    v5 = (PWCH)((char *)Buffer + Length);
    if ( CaseInSensitive )
    {
      if ( Buffer < v5 )
      {
        v6 = (char *)((char *)String2->Buffer - (char *)Buffer);
        while ( 1 )
        {
          v7 = *Buffer;
          v8 = *(unsigned __int16 *)((char *)Buffer + (_QWORD)v6);
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
          if ( ++Buffer >= v5 )
            return 1;
        }
        return 0;
      }
    }
    else if ( Buffer < v5 )
    {
      v10 = (char *)((char *)String2->Buffer - (char *)Buffer);
      while ( *Buffer == *(PWCH)((char *)Buffer + (_QWORD)v10) )
      {
        if ( ++Buffer >= v5 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  return 0;
}
