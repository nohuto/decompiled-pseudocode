/*
 * XREFs of AslGuidToString @ 0x14061FDD0
 * Callers:
 *     SdbGetEntryFlags @ 0x14061FA54 (SdbGetEntryFlags.c)
 *     SdbpGetCustomSdbFileName @ 0x1407D7FE8 (SdbpGetCustomSdbFileName.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14009F42C (RtlStringCchPrintfW.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslGuidToString(wchar_t *a1, unsigned int a2, unsigned int *a3)
{
  NTSTATUS v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-68h]
  __int64 v7; // [rsp+20h] [rbp-68h]
  int v8; // [rsp+28h] [rbp-60h]
  int v9; // [rsp+30h] [rbp-58h]
  int v10; // [rsp+38h] [rbp-50h]
  int v11; // [rsp+40h] [rbp-48h]
  int v12; // [rsp+48h] [rbp-40h]
  int v13; // [rsp+50h] [rbp-38h]
  int v14; // [rsp+58h] [rbp-30h]
  int v15; // [rsp+60h] [rbp-28h]
  int v16; // [rsp+68h] [rbp-20h]

  v16 = *((unsigned __int8 *)a3 + 15);
  v15 = *((unsigned __int8 *)a3 + 14);
  v14 = *((unsigned __int8 *)a3 + 13);
  v13 = *((unsigned __int8 *)a3 + 12);
  v12 = *((unsigned __int8 *)a3 + 11);
  v11 = *((unsigned __int8 *)a3 + 10);
  v10 = *((unsigned __int8 *)a3 + 9);
  v9 = *((unsigned __int8 *)a3 + 8);
  v8 = *((unsigned __int16 *)a3 + 3);
  v6 = *((unsigned __int16 *)a3 + 2);
  v3 = RtlStringCchPrintfW(
         a1,
         a2,
         L"{%08lx-%04hx-%04hx-%02hx%02hx-%02hx%02hx%02hx%02hx%02hx%02hx}",
         *a3,
         v6,
         v8,
         v9,
         v10,
         v11,
         v12,
         v13,
         v14,
         v15,
         v16);
  v4 = v3;
  if ( v3 < 0 )
  {
    LODWORD(v7) = v3;
    AslLogCallPrintf(1, (unsigned int)"AslGuidToString", 325, (unsigned int)"RtlStringCchPrintfW failed [%x]", v7);
  }
  else
  {
    return 0;
  }
  return v4;
}
