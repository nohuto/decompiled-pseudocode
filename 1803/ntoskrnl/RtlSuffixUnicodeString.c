/*
 * XREFs of RtlSuffixUnicodeString @ 0x140781520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlSuffixUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  unsigned __int16 Length; // r10
  unsigned __int16 v5; // dx
  wchar_t *Buffer; // r9
  wchar_t *v8; // rbx
  char *v9; // rdi
  wchar_t v10; // r10
  unsigned __int16 v11; // r11
  char *v12; // rcx

  Length = String1->Length;
  v5 = String2->Length;
  if ( v5 < String1->Length )
    return 0;
  Buffer = String1->Buffer;
  v8 = &Buffer[(unsigned __int64)Length >> 1];
  if ( CaseInSensitive )
  {
    if ( Buffer < v8 )
    {
      v9 = (char *)((char *)&String2->Buffer[(unsigned __int64)(v5 - Length) >> 1] - (char *)Buffer);
      while ( 1 )
      {
        v10 = *Buffer;
        if ( *Buffer >= 0x61u )
        {
          if ( v10 > 0x7Au )
            v10 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v10 & 0xF)
                                                                           + 2
                                                                           * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v10 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v10 >> 8)]]];
          else
            v10 -= 32;
        }
        v11 = *(wchar_t *)((char *)Buffer + (_QWORD)v9);
        if ( v11 >= 0x61u )
        {
          if ( v11 > 0x7Au )
            v11 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v11 & 0xF)
                                                                           + 2
                                                                           * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v11 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v11 >> 8)]]];
          else
            v11 -= 32;
        }
        if ( v10 != v11 )
          break;
        if ( ++Buffer >= v8 )
          return 1;
      }
      return 0;
    }
  }
  else if ( Buffer < v8 )
  {
    v12 = (char *)((char *)&String2->Buffer[(unsigned __int64)(v5 - Length) >> 1] - (char *)Buffer);
    while ( *Buffer == *(wchar_t *)((char *)Buffer + (_QWORD)v12) )
    {
      if ( ++Buffer >= v8 )
        return 1;
    }
    return 0;
  }
  return 1;
}
