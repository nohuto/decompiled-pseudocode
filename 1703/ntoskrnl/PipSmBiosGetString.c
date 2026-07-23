/*
 * XREFs of PipSmBiosGetString @ 0x14080FF34
 * Callers:
 *     PipInitComputerIds @ 0x14080F160 (PipInitComputerIds.c)
 * Callees:
 *     strchr @ 0x14016B290 (strchr.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404C0A50 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall PipSmBiosGetString(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        int a4,
        UNICODE_STRING *DestinationString)
{
  char *v6; // rcx
  unsigned __int64 v7; // rdx
  int v8; // eax
  unsigned __int16 v10; // bx
  char *v11; // rdi
  char v12; // al
  bool v13; // zf
  ANSI_STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  if ( !a2 )
    return -1073741275;
  v6 = (char *)(a1 + *(unsigned __int8 *)(a1 + 1));
  v7 = a3 + (unsigned int)(a4 - 1);
  v8 = 1;
  if ( a2 > 1u )
  {
    do
    {
      while ( *v6 )
      {
        if ( (unsigned __int64)++v6 >= v7 )
          return -1073741275;
      }
      if ( !++v6 )
        return -1073741275;
      if ( !*v6 )
      {
        v6 = 0LL;
        break;
      }
    }
    while ( ++v8 < (unsigned int)a2 );
  }
  if ( !v6 )
    return -1073741275;
  v10 = 0;
  SourceString.Buffer = v6;
  SourceString.Length = 0;
  v11 = v6;
  while ( *v6 )
  {
    ++v10;
    ++v6;
    SourceString.Length = v10;
    if ( (unsigned __int64)v6 >= v7 || v10 > 0x40u )
      return -1073741275;
  }
  if ( v6 == (char *)-1LL )
    return -1073741275;
  v12 = *v11;
  if ( *v11 )
  {
    do
    {
      if ( !strchr(" \t\r", v12) )
        break;
      ++v11;
      SourceString.Length = --v10;
      v12 = *v11;
    }
    while ( *v11 );
    SourceString.Buffer = v11;
  }
  if ( v10 )
  {
    do
    {
      if ( !strchr(" \t\r", v11[v10 - 1]) )
        break;
      v13 = v10-- == 1;
      SourceString.Length = v10;
    }
    while ( !v13 );
  }
  SourceString.MaximumLength = v10 + 1;
  return RtlAnsiStringToUnicodeString(DestinationString, &SourceString, 1u);
}
