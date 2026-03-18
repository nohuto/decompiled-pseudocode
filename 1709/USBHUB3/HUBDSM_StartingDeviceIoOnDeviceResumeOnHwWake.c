/*
 * XREFs of HUBDSM_StartingDeviceIoOnDeviceResumeOnHwWake @ 0x1C001A110
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_StartDeviceIoUsingUCXIoctl @ 0x1C0021D4C (HUBUCX_StartDeviceIoUsingUCXIoctl.c)
 */

__int64 __fastcall HUBDSM_StartingDeviceIoOnDeviceResumeOnHwWake(__int64 a1)
{
  HUBUCX_StartDeviceIoUsingUCXIoctl(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
