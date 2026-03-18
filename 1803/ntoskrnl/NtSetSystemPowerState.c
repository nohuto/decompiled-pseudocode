/*
 * XREFs of NtSetSystemPowerState @ 0x14047674C
 * Callers:
 *     NtShutdownSystem @ 0x1407BCEE0 (NtShutdownSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 */

NTSTATUS __stdcall NtSetSystemPowerState(POWER_ACTION SystemAction, SYSTEM_POWER_STATE MinSystemState, ULONG Flags)
{
  _DWORD v7[96]; // [rsp+20h] [rbp-1A8h] BYREF

  memset(v7, 0, 0x178uLL);
  v7[0] = SystemAction;
  v7[1] = MinSystemState;
  v7[2] = Flags;
  return PopTransitionSystemPowerStateEx((__int64)v7);
}
