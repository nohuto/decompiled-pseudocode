/*
 * XREFs of RtlSuffixUnicodeString @ 0x14071DDA0
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
  wchar_t *v8; // rcx
  unsigned __int64 v9; // rdx
  wchar_t *v10; // rbx
  char *v11; // rdi
  wchar_t v12; // r10
  unsigned __int16 v13; // r11
  char *v14; // rdx

  Length = String1->Length;
  v5 = String2->Length;
  if ( v5 < String1->Length )
    return 0;
  Buffer = String1->Buffer;
  v8 = String2->Buffer;
  v9 = (unsigned __int64)(v5 - Length) >> 1;
  v10 = &Buffer[(unsigned __int64)Length >> 1];
  if ( CaseInSensitive )
  {
    if ( Buffer < v10 )
    {
      v11 = (char *)v8 + 2 * v9 - (_QWORD)Buffer;
      while ( 1 )
      {
        v12 = *Buffer;
        if ( *Buffer >= 0x61u )
        {
          if ( v12 > 0x7Au )
            v12 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v12 & 0xF)
                                                                           + 2
                                                                           * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v12 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v12 >> 8)]]];
          else
            v12 -= 32;
        }
        v13 = *(wchar_t *)((char *)Buffer + (_QWORD)v11);
        if ( v13 >= 0x61u )
        {
          if ( v13 > 0x7Au )
            v13 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v13 & 0xF)
                                                                           + 2
                                                                           * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v13 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v13 >> 8)]]];
          else
            v13 -= 32;
        }
        if ( v12 != v13 )
          break;
        if ( ++Buffer >= v10 )
          return 1;
      }
      return 0;
    }
  }
  else if ( Buffer < v10 )
  {
    v14 = (char *)v8 + 2 * v9 - (_QWORD)Buffer;
    while ( *Buffer == *(wchar_t *)((char *)Buffer + (_QWORD)v14) )
    {
      if ( ++Buffer >= v10 )
        return 1;
    }
    return 0;
  }
  return 1;
}
