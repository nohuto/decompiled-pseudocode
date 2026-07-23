/*
 * XREFs of AslStringAnsiToUnicode @ 0x14072E47C
 * Callers:
 *     AslpFileGet16BitDescription @ 0x14072F61C (AslpFileGet16BitDescription.c)
 *     AslpFileGet16BitModuleName @ 0x14072F700 (AslpFileGet16BitModuleName.c)
 *     AslpFileGetClrVersionAttribute @ 0x14072FC48 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetExportName @ 0x140730014 (AslpFileGetExportName.c)
 * Callees:
 *     RtlInitString @ 0x14002A170 (RtlInitString.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     AslAlloc @ 0x1404B5F00 (AslAlloc.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404C0A50 (RtlAnsiStringToUnicodeString.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x1405753F0 (RtlxAnsiStringToUnicodeSize.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslStringAnsiToUnicode(wchar_t **a1, const CHAR *a2)
{
  __int64 v3; // rcx
  ULONG v4; // esi
  wchar_t *Buffer; // rbx
  NTSTATUS v6; // edi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  ANSI_STRING AnsiString; // [rsp+40h] [rbp-18h] BYREF

  RtlInitString(&AnsiString, a2);
  if ( (_BYTE)NlsMbCodePageTag )
    v4 = RtlxAnsiStringToUnicodeSize(&AnsiString);
  else
    v4 = 2 * AnsiString.Length + 2;
  Buffer = 0LL;
  *a1 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  if ( v4 <= 0xFFFF )
  {
    DestinationString.Buffer = (wchar_t *)AslAlloc(v3, v4);
    if ( !DestinationString.Buffer )
    {
      v6 = -1073741801;
      AslLogCallPrintf(1, (unsigned int)"AslStringAnsiToUnicode", 394, (unsigned int)"Out of memory");
      return (unsigned int)v6;
    }
    DestinationString.MaximumLength = v4;
    DestinationString.Length = 0;
    v6 = RtlAnsiStringToUnicodeString(&DestinationString, &AnsiString, 0);
    if ( v6 >= 0 )
    {
      v6 = 0;
      *a1 = DestinationString.Buffer;
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"AslStringAnsiToUnicode",
        403,
        (unsigned int)"RtlAnsiStringToUnicodeString failed [%x]");
      Buffer = DestinationString.Buffer;
    }
  }
  else
  {
    v6 = -1073741811;
    AslLogCallPrintf(
      1,
      (unsigned int)"AslStringAnsiToUnicode",
      387,
      (unsigned int)"Ansi string is too long to convert at %d");
  }
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0x74705041u);
  return (unsigned int)v6;
}
