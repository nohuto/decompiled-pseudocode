/*
 * XREFs of RtlPrefixString @ 0x1800804D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180080600 (RtlUpperChar.c)
 */

BOOLEAN __cdecl RtlPrefixString(PSTRING String1, PSTRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // r9
  PCHAR Buffer; // rdi
  CHAR *v5; // rsi
  CHAR *v6; // r14
  CHAR v7; // cl
  CHAR v9; // bl
  CHAR *v10; // rcx

  Length = String1->Length;
  Buffer = String1->Buffer;
  if ( String2->Length >= (unsigned int)Length )
  {
    v5 = &Buffer[Length];
    if ( CaseInSensitive )
    {
      if ( Buffer < v5 )
      {
        v6 = (CHAR *)(String2->Buffer - Buffer);
        while ( 1 )
        {
          v7 = Buffer[(_QWORD)v6];
          if ( *Buffer != v7 )
          {
            v9 = RtlUpperChar(v7);
            if ( RtlUpperChar(*Buffer) != v9 )
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
      v10 = (CHAR *)(String2->Buffer - Buffer);
      while ( *Buffer == Buffer[(_QWORD)v10] )
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
