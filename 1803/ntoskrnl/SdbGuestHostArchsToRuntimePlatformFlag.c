/*
 * XREFs of SdbGuestHostArchsToRuntimePlatformFlag @ 0x1407D77C0
 * Callers:
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x1407D786C (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 * Callees:
 *     AslEnvGetProcessWowInfo @ 0x14061F1C4 (AslEnvGetProcessWowInfo.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGuestHostArchsToRuntimePlatformFlag(__int16 a1, __int16 *a2)
{
  __int64 v3; // rbx
  __int16 v4; // cx
  int ProcessWowInfo; // eax
  _WORD *i; // rax
  int v8; // [rsp+20h] [rbp-18h]
  __int16 v9; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 == -1 )
    return 0LL;
  v3 = 0LL;
  v9 = -1;
  if ( !a2 || (v4 = *a2, v9 = v4, v4 == -1) )
  {
    ProcessWowInfo = AslEnvGetProcessWowInfo(&v9, 0LL);
    if ( ProcessWowInfo < 0 )
    {
      v8 = ProcessWowInfo;
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbGuestHostArchsToRuntimePlatformFlag",
        247,
        (unsigned int)"AslEnvGetProcessWowInfo failed to determine processor info [%x]",
        v8);
      return 0LL;
    }
    v4 = v9;
  }
  for ( i = &unk_14031B2A6; a1 != *(i - 1) || v4 != *i; i += 8 )
  {
    if ( (unsigned __int64)++v3 >= 7 )
      return 0LL;
  }
  return dword_14031B2A8[4 * v3];
}
