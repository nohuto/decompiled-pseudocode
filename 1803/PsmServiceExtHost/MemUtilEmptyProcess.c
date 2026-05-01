/*
 * XREFs of MemUtilEmptyProcess @ 0x18006CC2C
 * Callers:
 *     ?RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z @ 0x180059C10 (-RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     MemUtilPrioritizeWsPages @ 0x18006CDA8 (MemUtilPrioritizeWsPages.c)
 */

ULONG __fastcall MemUtilEmptyProcess(HANDLE ProcessHandle, unsigned int a2, unsigned int a3)
{
  char v5; // bl
  int v6; // r8d
  ULONG result; // eax
  int v8; // eax
  int v9; // eax
  int ProcessInformation; // [rsp+20h] [rbp-28h] BYREF
  __int64 ProcessInformation_4; // [rsp+24h] [rbp-24h]

  v5 = a2;
  v6 = (a2 >> 1) & 1 | 2;
  if ( (a2 & 4) == 0 )
    v6 = (a2 >> 1) & 1;
  if ( !v6 || (result = MemUtilPrioritizeWsPages(ProcessHandle, a3)) == 0 )
  {
    ProcessInformation_4 = 0x400000001LL;
    ProcessInformation = 3;
    if ( (v5 & 1) == 0 )
    {
      v8 = 15;
      if ( (v5 & 8) != 0 )
        v8 = 31;
      HIDWORD(ProcessInformation_4) = v8;
    }
    v9 = NtSetInformationProcess(
           ProcessHandle,
           ProcessThreadStackAllocation|ProcessUserModeIOPL,
           &ProcessInformation,
           0xCu);
    if ( v9 >= 0 )
      return 0;
    else
      return RtlNtStatusToDosError(v9);
  }
  return result;
}
