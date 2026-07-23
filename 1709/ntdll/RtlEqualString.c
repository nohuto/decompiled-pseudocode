/*
 * XREFs of RtlEqualString @ 0x180076E80
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180076F20 (RtlUpperChar.c)
 */

BOOLEAN __cdecl RtlEqualString(PSTRING String1, PSTRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // r9
  char *Buffer; // rdi
  char *v6; // r14
  char *v7; // rsi
  signed __int64 v8; // r14
  CHAR v9; // cl
  CHAR v10; // bl
  signed __int64 v11; // r14

  Length = String1->Length;
  if ( (_DWORD)Length != String2->Length )
    return 0;
  Buffer = String1->Buffer;
  v6 = String2->Buffer;
  v7 = &Buffer[Length];
  if ( CaseInSensitive )
  {
    if ( Buffer < v7 )
    {
      v8 = v6 - Buffer;
      while ( 1 )
      {
        v9 = Buffer[v8];
        if ( *Buffer != v9 )
        {
          v10 = RtlUpperChar(v9);
          if ( RtlUpperChar(*Buffer) != v10 )
            break;
        }
        if ( ++Buffer >= v7 )
          return 1;
      }
      return 0;
    }
  }
  else if ( Buffer < v7 )
  {
    v11 = v6 - Buffer;
    while ( *Buffer == Buffer[v11] )
    {
      if ( ++Buffer >= v7 )
        return 1;
    }
    return 0;
  }
  return 1;
}
