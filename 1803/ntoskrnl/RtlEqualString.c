/*
 * XREFs of RtlEqualString @ 0x1400AF960
 * Callers:
 *     IopInitializeBuiltinDriver @ 0x1408B670C (IopInitializeBuiltinDriver.c)
 *     IopGetBootDiskInformation @ 0x1408DE714 (IopGetBootDiskInformation.c)
 * Callees:
 *     RtlUpperChar @ 0x140554950 (RtlUpperChar.c)
 */

BOOLEAN __stdcall RtlEqualString(const STRING *String1, const STRING *String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // r9
  char *Buffer; // rdi
  char *v5; // rsi
  char *v6; // rcx
  char *v8; // r14
  CHAR v9; // bp
  CHAR v10; // cl
  CHAR v11; // bl

  Length = String1->Length;
  if ( (_DWORD)Length == String2->Length )
  {
    Buffer = String1->Buffer;
    v5 = &Buffer[Length];
    if ( CaseInSensitive )
    {
      if ( Buffer < v5 )
      {
        v8 = (char *)(String2->Buffer - Buffer);
        while ( 1 )
        {
          v9 = *Buffer;
          v10 = Buffer[(_QWORD)v8];
          if ( *Buffer != v10 )
          {
            v11 = RtlUpperChar(v10);
            if ( RtlUpperChar(v9) != v11 )
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
      v6 = (char *)(String2->Buffer - Buffer);
      while ( *Buffer == Buffer[(_QWORD)v6] )
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
