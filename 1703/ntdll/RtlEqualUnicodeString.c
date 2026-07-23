/*
 * XREFs of RtlEqualUnicodeString @ 0x18001FC70
 * Callers:
 *     sub_180021AE0 @ 0x180021AE0 (sub_180021AE0.c)
 *     sub_18003888C @ 0x18003888C (sub_18003888C.c)
 *     sub_180038D24 @ 0x180038D24 (sub_180038D24.c)
 *     sub_18003EF60 @ 0x18003EF60 (sub_18003EF60.c)
 *     sub_180053EE0 @ 0x180053EE0 (sub_180053EE0.c)
 *     RtlEqualDomainName @ 0x180069A40 (RtlEqualDomainName.c)
 *     sub_180071C68 @ 0x180071C68 (sub_180071C68.c)
 *     sub_180076BC4 @ 0x180076BC4 (sub_180076BC4.c)
 *     sub_18007AF78 @ 0x18007AF78 (sub_18007AF78.c)
 *     sub_1800F5960 @ 0x1800F5960 (sub_1800F5960.c)
 *     sub_18010BB44 @ 0x18010BB44 (sub_18010BB44.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlEqualUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // r9
  PWCH Buffer; // rax
  PWCH v5; // r11
  WCHAR *v6; // r10
  signed __int64 v7; // r11
  unsigned int v8; // r9d
  unsigned int v9; // r8d
  signed __int64 v11; // r11

  Length = String1->Length;
  if ( (_DWORD)Length == String2->Length )
  {
    Buffer = String1->Buffer;
    v5 = String2->Buffer;
    v6 = (PWCH)((char *)Buffer + Length);
    if ( CaseInSensitive )
    {
      if ( Buffer < v6 )
      {
        v7 = (char *)v5 - (char *)Buffer;
        while ( 1 )
        {
          v8 = *Buffer;
          v9 = *(PWCH)((char *)Buffer + v7);
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
          if ( ++Buffer >= v6 )
            return 1;
        }
        return 0;
      }
    }
    else if ( Buffer < v6 )
    {
      v11 = (char *)v5 - (char *)Buffer;
      while ( *Buffer == *(PWCH)((char *)Buffer + v11) )
      {
        if ( ++Buffer >= v6 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  return 0;
}
