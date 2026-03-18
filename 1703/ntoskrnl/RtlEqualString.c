/*
 * XREFs of RtlEqualString @ 0x140013F90
 * Callers:
 *     IopInitializeBuiltinDriver @ 0x1407F9B40 (IopInitializeBuiltinDriver.c)
 *     IopGetBootDiskInformation @ 0x140832E04 (IopGetBootDiskInformation.c)
 * Callees:
 *     RtlUpperChar @ 0x140430A80 (RtlUpperChar.c)
 */

BOOLEAN __stdcall RtlEqualString(const STRING *String1, const STRING *String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // r9
  char *Buffer; // rdi
  char *v5; // r14
  char *v6; // rsi
  signed __int64 v7; // r14
  CHAR v8; // bp
  CHAR v9; // cl
  CHAR v10; // bl
  signed __int64 v11; // r14

  Length = String1->Length;
  if ( (_DWORD)Length == String2->Length )
  {
    Buffer = String1->Buffer;
    v5 = String2->Buffer;
    v6 = &Buffer[Length];
    if ( CaseInSensitive )
    {
      if ( Buffer < v6 )
      {
        v7 = v5 - Buffer;
        while ( 1 )
        {
          v8 = *Buffer;
          v9 = Buffer[v7];
          if ( *Buffer != v9 )
          {
            v10 = RtlUpperChar(v9);
            if ( RtlUpperChar(v8) != v10 )
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
      v11 = v5 - Buffer;
      while ( *Buffer == Buffer[v11] )
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
