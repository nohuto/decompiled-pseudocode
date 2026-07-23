/*
 * XREFs of AslStringAnsiToUnicode @ 0x1407D8F74
 * Callers:
 *     AslpFileGet16BitDescription @ 0x1407DC3F4 (AslpFileGet16BitDescription.c)
 *     AslpFileGet16BitModuleName @ 0x1407DC4D8 (AslpFileGet16BitModuleName.c)
 *     AslpFileGetClrVersionAttribute @ 0x1407DCA40 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetExportName @ 0x1407DCE0C (AslpFileGetExportName.c)
 * Callees:
 *     RtlInitString @ 0x140076840 (RtlInitString.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 *     RtlxAnsiStringToUnicodeSize @ 0x1405C2EE0 (RtlxAnsiStringToUnicodeSize.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslStringAnsiToUnicode(wchar_t **a1, const CHAR *a2)
{
  __int64 v3; // rcx
  ULONG v4; // esi
  wchar_t *Buffer; // rbx
  unsigned int v6; // edi
  NTSTATUS v7; // eax
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
      AslLogCallPrintf(1, (unsigned int)"AslStringAnsiToUnicode", 395, (unsigned int)"Out of memory");
      return v6;
    }
    DestinationString.MaximumLength = v4;
    DestinationString.Length = 0;
    v7 = RtlAnsiStringToUnicodeString(&DestinationString, &AnsiString, 0);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v6 = 0;
      *a1 = DestinationString.Buffer;
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"AslStringAnsiToUnicode",
        404,
        (unsigned int)"RtlAnsiStringToUnicodeString failed [%x]",
        v7);
      Buffer = DestinationString.Buffer;
    }
  }
  else
  {
    v6 = -1073741811;
    AslLogCallPrintf(
      1,
      (unsigned int)"AslStringAnsiToUnicode",
      388,
      (unsigned int)"Ansi string is too long to convert at %d",
      v4);
  }
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0x74705041u);
  return v6;
}
