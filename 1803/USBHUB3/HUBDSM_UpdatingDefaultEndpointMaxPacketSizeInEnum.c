/*
 * XREFs of HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum @ 0x1C001B360
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C001FED4 (HUBUCX_SubmitUcxIoctl.c)
 *     HUBMISC_SetDeviceVersionFlag @ 0x1C0029358 (HUBMISC_SetDeviceVersionFlag.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 */

__int64 __fastcall HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum(__int64 a1)
{
  __int64 v1; // rdi
  _DWORD *v2; // rbx
  int v3; // eax
  int v5; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   *(_QWORD *)(v1 + 432),
                   0LL);
  memset(v2, 0, 0x28uLL);
  *v2 = 40;
  *((_QWORD *)v2 + 1) = *(_QWORD *)(*(_QWORD *)v1 + 240LL);
  *((_QWORD *)v2 + 2) = *(_QWORD *)(v1 + 24);
  *((_QWORD *)v2 + 3) = *(_QWORD *)(v1 + 88);
  v2[8] = *(_DWORD *)(v1 + 160);
  v3 = HUBUCX_SubmitUcxIoctl(v1, 4788283LL);
  if ( v3 < 0 )
  {
    v5 = v3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x1Cu,
      (__int64)&WPP_ac19941ca8303ac9317dca70d7291dce_Traceguids,
      v5);
  }
  HUBMISC_SetDeviceVersionFlag(v1);
  return 1000LL;
}
