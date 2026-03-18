/*
 * XREFs of HUBUCX_StartDeviceIoUsingUCXIoctl @ 0x1C0021D4C
 * Callers:
 *     HUBDSM_StartingDeviceIoOnDeviceResumeOnHwWake @ 0x1C001A110 (HUBDSM_StartingDeviceIoOnDeviceResumeOnHwWake.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C001F594 (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_StartDeviceIoUsingUCXIoctl(_QWORD *a1)
{
  _QWORD *v2; // rax
  __int64 result; // rax
  int v4; // [rsp+28h] [rbp-10h]

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   a1[54],
                   0LL);
  *v2 = 0LL;
  v2[1] = 0LL;
  v2[2] = 0LL;
  *(_DWORD *)v2 = 24;
  v2[1] = *(_QWORD *)(*a1 + 240LL);
  v2[2] = a1[3];
  result = HUBUCX_SubmitUcxIoctl((__int64)a1, 0x491033u);
  if ( (int)result < 0 )
  {
    v4 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 1432LL),
             2u,
             5u,
             0x43u,
             (__int64)&WPP_3d53ed487f413aabe4c3ad9959a4b253_Traceguids,
             v4);
  }
  return result;
}
