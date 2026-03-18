/*
 * XREFs of HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C0020AA4
 * Callers:
 *     HUBDSM_UpdatingDeviceExitLatencyInTheControllerAfterIncreasingExitLatency @ 0x1C001F3E0 (HUBDSM_UpdatingDeviceExitLatencyInTheControllerAfterIncreasingExitLatency.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E98 (WPP_RECORDER_SF_dD.c)
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C001FED4 (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 */

void __fastcall HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl(__int64 a1)
{
  unsigned int v1; // eax
  _DWORD *v3; // rbx
  int v4; // eax
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  v1 = *(_DWORD *)(a1 + 2584);
  if ( v1 && *(unsigned __int16 *)(a1 + 2210) > v1 )
  {
    v7 = *(_DWORD *)(a1 + 2584);
    v5 = *(unsigned __int16 *)(a1 + 2210);
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x1Fu,
      (__int64)&WPP_ac19941ca8303ac9317dca70d7291dce_Traceguids,
      v5,
      v7);
    HUBSM_AddEvent(a1 + 504, 4024);
  }
  else
  {
    v3 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                     WdfDriverGlobals,
                     *(_QWORD *)(a1 + 432),
                     0LL);
    memset(v3, 0, 0x48uLL);
    v3[6] |= 4u;
    *v3 = 72;
    *((_QWORD *)v3 + 1) = *(_QWORD *)(*(_QWORD *)a1 + 240LL);
    *((_QWORD *)v3 + 2) = *(_QWORD *)(a1 + 24);
    v3[12] = *(unsigned __int16 *)(a1 + 2210);
    v4 = HUBUCX_SubmitUcxIoctl(a1, 0x491023u);
    if ( v4 < 0 )
    {
      v6 = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x20u,
        (__int64)&WPP_ac19941ca8303ac9317dca70d7291dce_Traceguids,
        v6);
    }
  }
}
