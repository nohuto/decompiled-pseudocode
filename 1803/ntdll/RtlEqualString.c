/*
 * XREFs of RtlEqualString @ 0x180080560
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180080600 (RtlUpperChar.c)
 */

BOOLEAN __cdecl RtlEqualString(PSTRING String1, PSTRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // r9
  PCHAR Buffer; // rdi
  CHAR *v6; // rsi
  CHAR *v7; // r14
  CHAR v8; // cl
  CHAR v9; // bl
  CHAR *v10; // rcx

  Length = String1->Length;
  if ( (_DWORD)Length != String2->Length )
    return 0;
  Buffer = String1->Buffer;
  v6 = &Buffer[Length];
  if ( CaseInSensitive )
  {
    if ( Buffer < v6 )
    {
      v7 = (CHAR *)(String2->Buffer - Buffer);
      while ( 1 )
      {
        v8 = Buffer[(_QWORD)v7];
        if ( *Buffer != v8 )
        {
          v9 = RtlUpperChar(v8);
          if ( RtlUpperChar(*Buffer) != v9 )
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
    v10 = (CHAR *)(String2->Buffer - Buffer);
    while ( *Buffer == Buffer[(_QWORD)v10] )
    {
      if ( ++Buffer >= v6 )
        return 1;
    }
    return 0;
  }
  return 1;
}
