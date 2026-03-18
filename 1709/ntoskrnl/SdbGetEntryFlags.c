/*
 * XREFs of SdbGetEntryFlags @ 0x140771598
 * Callers:
 *     SdbReadEntryInformation @ 0x14076E0C4 (SdbReadEntryInformation.c)
 *     SdbpGetExeEntryFlags @ 0x14076F398 (SdbpGetExeEntryFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     SdbpQueryAppCompatFlagsByExeID @ 0x140771664 (SdbpQueryAppCompatFlagsByExeID.c)
 *     AslGuidToString @ 0x140771CF4 (AslGuidToString.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetEntryFlags(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  _DWORD v6[4]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v7[80]; // [rsp+40h] [rbp-68h] BYREF

  *a2 = 0;
  if ( (int)AslGuidToString(v7, 39LL) >= 0 )
  {
    v6[0] = 0;
    if ( (int)SdbpQueryAppCompatFlagsByExeID(v3, v7, 1LL, v6) >= 0 )
      *a2 = v6[0];
    v6[0] = 0;
    if ( (int)SdbpQueryAppCompatFlagsByExeID(v4, v7, 0LL, v6) >= 0 )
      *a2 |= v6[0];
    *a2 &= 0xFFFu;
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbGetEntryFlags", 125, (unsigned int)"Failed to convert EXE id to string [%x]");
  }
  return 1LL;
}
