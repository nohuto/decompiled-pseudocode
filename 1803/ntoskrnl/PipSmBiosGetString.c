/*
 * XREFs of PipSmBiosGetString @ 0x1408B4BA8
 * Callers:
 *     PipInitComputerIds @ 0x1408B3A10 (PipInitComputerIds.c)
 * Callees:
 *     strchr @ 0x140189DB0 (strchr.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall PipSmBiosGetString(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        int a4,
        UNICODE_STRING *DestinationString)
{
  char *v6; // rcx
  int v7; // edx
  unsigned __int64 v8; // r8
  char v9; // al
  unsigned __int16 v10; // bx
  char *v11; // rdi
  char v12; // al
  bool v14; // zf
  ANSI_STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  if ( !a2 )
    return -1073741275;
  v6 = (char *)(*(unsigned __int8 *)(a1 + 1) + a1);
  v7 = 1;
  v8 = a3 + (unsigned int)(a4 - 1);
  if ( a2 > 1u )
  {
    v9 = *v6;
    while ( !v9 )
    {
LABEL_7:
      if ( !++v6 )
        return -1073741275;
      v9 = *v6;
      if ( !*v6 )
      {
        v6 = 0LL;
        goto LABEL_10;
      }
      if ( ++v7 >= (unsigned int)a2 )
        goto LABEL_10;
    }
    while ( (unsigned __int64)++v6 < v8 )
    {
      if ( !*v6 )
        goto LABEL_7;
    }
    return -1073741275;
  }
LABEL_10:
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
    if ( (unsigned __int64)v6 >= v8 || v10 > 0x40u )
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
      v14 = v10-- == 1;
      SourceString.Length = v10;
    }
    while ( !v14 );
  }
  SourceString.MaximumLength = v10 + 1;
  return RtlAnsiStringToUnicodeString(DestinationString, &SourceString, 1u);
}
