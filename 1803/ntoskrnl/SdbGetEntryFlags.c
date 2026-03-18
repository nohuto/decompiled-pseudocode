/*
 * XREFs of SdbGetEntryFlags @ 0x14061FA54
 * Callers:
 *     SdbpGetExeEntryFlags @ 0x14061F980 (SdbpGetExeEntryFlags.c)
 *     SdbReadEntryInformation @ 0x1407D5208 (SdbReadEntryInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     SdbpQueryAppCompatFlagsByExeID @ 0x14061FB08 (SdbpQueryAppCompatFlagsByExeID.c)
 *     AslGuidToString @ 0x14061FDD0 (AslGuidToString.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetEntryFlags(__int64 a1, int *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  int AppCompatFlagsByExeID; // eax
  int v7; // ecx
  _DWORD v9[4]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v10[80]; // [rsp+40h] [rbp-68h] BYREF

  *a2 = 0;
  v3 = AslGuidToString(v10, 39LL, a1);
  if ( v3 < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbGetEntryFlags",
      125,
      (unsigned int)"Failed to convert EXE id to string [%x]",
      v3);
  }
  else
  {
    v9[0] = 0;
    if ( (int)SdbpQueryAppCompatFlagsByExeID(v4, v10, 1LL, v9) >= 0 )
      *a2 = v9[0];
    v9[0] = 0;
    AppCompatFlagsByExeID = SdbpQueryAppCompatFlagsByExeID(v5, v10, 0LL, v9);
    v7 = *a2;
    if ( AppCompatFlagsByExeID >= 0 )
    {
      v7 |= v9[0];
      *a2 = v7;
    }
    *a2 = v7 & 0xFFF;
  }
  return 1LL;
}
