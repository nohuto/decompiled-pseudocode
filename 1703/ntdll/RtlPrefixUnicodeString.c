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

BOOLEAN __cdecl RtlPrefixUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // r10
  PWCH Buffer; // r9
  PWCH v5; // r11
  WCHAR *v6; // r10
  signed __int64 v7; // r11
  unsigned int v8; // edx
  unsigned int v9; // r8d
  signed __int64 v11; // r11

  Length = String1->Length;
  Buffer = String1->Buffer;
  v5 = String2->Buffer;
  if ( String2->Length >= (unsigned int)Length )
  {
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
