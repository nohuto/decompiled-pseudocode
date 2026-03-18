/*
 * XREFs of HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C002067C
 * Callers:
 *     HUBDSM_EnablingDeviceInUCXFor30 @ 0x1C001B1B0 (HUBDSM_EnablingDeviceInUCXFor30.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C001FED4 (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 */

__int64 __fastcall HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  int v4; // [rsp+28h] [rbp-10h]

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   a1[54],
                   0LL);
  memset(v2, 0, 0x28uLL);
  *(_DWORD *)v2 = 40;
  v2[1] = *(_QWORD *)(*a1 + 240LL);
  v2[2] = a1[3];
  v2[3] = a1[11];
  result = HUBUCX_SubmitUcxIoctl((__int64)a1, 0x491017u);
  if ( (int)result < 0 )
  {
    v4 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 1432LL),
             2u,
             5u,
             0x1Au,
             (__int64)&WPP_ac19941ca8303ac9317dca70d7291dce_Traceguids,
             v4);
  }
  return result;
}
