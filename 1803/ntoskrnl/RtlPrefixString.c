/*
 * XREFs of RtlPrefixString @ 0x140554840
 * Callers:
 *     IopCheckDiskName @ 0x140175C74 (IopCheckDiskName.c)
 *     MiSnapThunk @ 0x1405FB02C (MiSnapThunk.c)
 * Callees:
 *     RtlUpperChar @ 0x140554950 (RtlUpperChar.c)
 */

BOOLEAN __stdcall RtlPrefixString(const STRING *String1, const STRING *String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // r9
  char *Buffer; // rdi
  char *v5; // rsi
  char *v6; // r14
  CHAR v7; // bp
  CHAR v8; // cl
  CHAR v10; // bl
  char *v11; // rcx

  Length = String1->Length;
  Buffer = String1->Buffer;
  if ( String2->Length >= (unsigned int)Length )
  {
    v5 = &Buffer[Length];
    if ( CaseInSensitive )
    {
      if ( Buffer < v5 )
      {
        v6 = (char *)(String2->Buffer - Buffer);
        while ( 1 )
        {
          v7 = *Buffer;
          v8 = Buffer[(_QWORD)v6];
          if ( *Buffer != v8 )
          {
            v10 = RtlUpperChar(v8);
            if ( RtlUpperChar(v7) != v10 )
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
      v11 = (char *)(String2->Buffer - Buffer);
      while ( *Buffer == Buffer[(_QWORD)v11] )
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
