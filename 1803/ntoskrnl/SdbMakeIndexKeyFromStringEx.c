/*
 * XREFs of SdbMakeIndexKeyFromStringEx @ 0x1405FD650
 * Callers:
 *     SdbFindFirstStringIndexedTag @ 0x1405FCDAC (SdbFindFirstStringIndexedTag.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlUpcaseUnicodeString @ 0x140539150 (RtlUpcaseUnicodeString.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbMakeIndexKeyFromStringEx(const WCHAR *a1, char a2)
{
  unsigned __int64 v2; // rax
  char *v3; // rbx
  int v5; // edx
  unsigned __int16 *v6; // rsi
  const WCHAR *v7; // rdx
  __int64 result; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int16 v11; // ax
  __int16 v12; // ax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v15[16]; // [rsp+50h] [rbp-30h] BYREF
  char v16; // [rsp+60h] [rbp-20h] BYREF

  v2 = -1LL;
  v3 = (char *)&SourceString.MaximumLength + 5;
  do
    ++v2;
  while ( a1[v2] );
  v5 = a2 & 2;
  v6 = (unsigned __int16 *)v15;
  if ( v2 > 8 && v5 )
    v7 = &a1[v2 - 8];
  else
    v7 = a1;
  RtlInitUnicodeString(&DestinationString, v7);
  SourceString.Buffer = (wchar_t *)&v16;
  SourceString.MaximumLength = 16;
  RtlCopyUnicodeString(&SourceString, &DestinationString);
  DestinationString.MaximumLength = 16;
  DestinationString.Buffer = (wchar_t *)v15;
  if ( RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0) < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbMakeIndexKeyFromStringEx",
      1209,
      (unsigned int)"Failed to upcase unicode string \"%ws\"",
      a1);
    return 0LL;
  }
  else
  {
    result = 0LL;
    v9 = (unsigned __int64)DestinationString.Length >> 1;
    if ( v9 <= 8 )
    {
      *(_QWORD *)&SourceString.Length = 0LL;
      v10 = 0LL;
      if ( v9 )
      {
        do
        {
          v11 = *v6++;
          *v3-- = v11;
          v12 = HIBYTE(v11);
          if ( (_BYTE)v12 )
          {
            if ( v10 < 7 )
            {
              *v3-- = v12;
              ++v10;
            }
          }
          ++v10;
        }
        while ( v10 < v9 );
        return *(_QWORD *)&SourceString.Length;
      }
    }
  }
  return result;
}
