/*
 * XREFs of SdbGuestHostArchsToRuntimePlatformFlag @ 0x1407704E4
 * Callers:
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x140770590 (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 * Callees:
 *     AslEnvGetProcessWowInfo @ 0x14054213C (AslEnvGetProcessWowInfo.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGuestHostArchsToRuntimePlatformFlag(__int16 a1, __int16 *a2)
{
  __int64 v3; // rbx
  __int16 v4; // cx
  _WORD *i; // rax
  __int16 v7; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 == -1 )
    return 0LL;
  v3 = 0LL;
  v7 = -1;
  if ( !a2 || (v4 = *a2, v7 = v4, v4 == -1) )
  {
    if ( (int)AslEnvGetProcessWowInfo(&v7, 0LL) < 0 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbGuestHostArchsToRuntimePlatformFlag",
        247,
        (unsigned int)"AslEnvGetProcessWowInfo failed to determine processor info [%x]");
      return 0LL;
    }
    v4 = v7;
  }
  for ( i = &unk_1402E02F6; a1 != *(i - 1) || v4 != *i; i += 8 )
  {
    if ( (unsigned __int64)++v3 >= 7 )
      return 0LL;
  }
  return dword_1402E02F8[4 * v3];
}
