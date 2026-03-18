/*
 * XREFs of RtlIsNameLegalDOS8Dot3 @ 0x14055EFA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14055F150 (RtlUpcaseUnicodeStringToCountedOemString.c)
 */

BOOLEAN __stdcall RtlIsNameLegalDOS8Dot3(PCUNICODE_STRING Name, POEM_STRING OemName, PBOOLEAN NameContainsSpaces)
{
  char v4; // si
  BOOLEAN v5; // bp
  POEM_STRING v7; // rbx
  unsigned __int16 Length; // cx
  unsigned int v9; // edx
  char *v10; // r10
  unsigned __int8 v11; // r8
  int v12; // eax
  char *Buffer; // rdx
  int v14; // [rsp+20h] [rbp-58h] BYREF
  char *v15; // [rsp+28h] [rbp-50h]
  char v16; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0;
  v5 = 0;
  if ( Name->Length > 0x18u )
    return 0;
  if ( !OemName )
  {
    v14 = 786432;
    v15 = &v16;
  }
  v7 = (POEM_STRING)&v14;
  if ( OemName )
    v7 = OemName;
  if ( RtlUpcaseUnicodeStringToCountedOemString(v7, Name, 0) < 0 )
    return 0;
  Length = v7->Length;
  if ( v7->Length == 1 && *v7->Buffer == 46 || Length == 2 && (Buffer = v7->Buffer, *Buffer == 46) && Buffer[1] == 46 )
  {
    if ( NameContainsSpaces )
      *NameContainsSpaces = 0;
    return 1;
  }
  v9 = 0;
  if ( Length )
  {
    v10 = v7->Buffer;
    do
    {
      v11 = v10[v9];
      if ( (_BYTE)NlsMbOemCodePageTag && NlsOemLeadByteInfoTable[v11] )
      {
        if ( !v4 && v9 >= 7 || v9 == Length - 1 )
          return 0;
        ++v9;
      }
      else
      {
        if ( v11 < 0x80u )
        {
          v12 = RtlFatIllegalTable[(unsigned __int64)v11 >> 5];
          if ( _bittest(&v12, v11 & 0x1F) )
            return 0;
        }
        if ( v11 == 32 )
          v5 = 1;
        if ( v11 == 46 )
        {
          if ( v4 || !v9 || v10[v9 - 1] == 32 || Length - v9 - 1 > 3 )
            return 0;
          v4 = 1;
        }
        if ( v9 >= 8 && !v4 )
          return 0;
      }
      ++v9;
    }
    while ( v9 < Length );
    if ( v11 == 32 || v11 == 46 )
      return 0;
  }
  if ( NameContainsSpaces )
    *NameContainsSpaces = v5;
  return 1;
}
