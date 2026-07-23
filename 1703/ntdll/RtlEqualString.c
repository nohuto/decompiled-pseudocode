/*
 * XREFs of RtlEqualString @ 0x1800832E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180083380 (RtlUpperChar.c)
 */

BOOLEAN __cdecl RtlEqualString(PSTRING String1, PSTRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // r9
  CHAR *Buffer; // rdi
  PCHAR v5; // r14
  CHAR *v6; // rsi
  signed __int64 v7; // r14
  CHAR v9; // bl
  signed __int64 v10; // r14
  CHAR v11; // cl

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
        v10 = v5 - Buffer;
        while ( 1 )
        {
          v11 = Buffer[v10];
          if ( *Buffer != v11 )
          {
            v9 = RtlUpperChar(v11);
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
      v7 = v5 - Buffer;
      while ( *Buffer == Buffer[v7] )
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
