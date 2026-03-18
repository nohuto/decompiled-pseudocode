/*
 * XREFs of AslEnvGetProcessWowInfo @ 0x14061F1C4
 * Callers:
 *     SdbpResolveMatchingFile @ 0x14061E914 (SdbpResolveMatchingFile.c)
 *     SdbGuestHostArchsToRuntimePlatformFlag @ 0x1407D77C0 (SdbGuestHostArchsToRuntimePlatformFlag.c)
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x1407D786C (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x1407D84C8 (SdbpGetProcessHostGuestArchitectures.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401A7B80 (ZwQuerySystemInformation.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslEnvGetProcessWowInfo(_WORD *a1, _WORD *a2)
{
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  int v7; // r8d
  NTSTATUS v8; // [rsp+20h] [rbp-48h]
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  int v10; // [rsp+38h] [rbp-30h]
  __int64 SystemInformation; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+48h] [rbp-20h]

  v9 = 0LL;
  SystemInformation = 0LL;
  v10 = 0;
  v12 = 0;
  if ( a1 )
  {
    v4 = ZwQuerySystemInformation(SystemProcessorInformation, &v9, 0xCu, 0LL);
    v5 = v4;
    if ( v4 < 0 )
    {
      v7 = 1783;
      goto LABEL_11;
    }
    *a1 = v9;
  }
  if ( a2 )
  {
    v4 = ZwQuerySystemInformation(SystemProcessorInformation, &SystemInformation, 0xCu, 0LL);
    v5 = v4;
    if ( v4 >= 0 )
    {
      *a2 = SystemInformation;
      return 0;
    }
    v7 = 1826;
LABEL_11:
    v8 = v4;
    AslLogCallPrintf(
      1,
      (unsigned int)"AslEnvGetProcessWowInfo",
      v7,
      (unsigned int)"ZwQuerySystemInformation failed [%x]",
      v8);
    return v5;
  }
  return 0;
}
