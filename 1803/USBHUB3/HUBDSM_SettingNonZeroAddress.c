/*
 * XREFs of HUBDSM_SettingNonZeroAddress @ 0x1C001C430
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C001FED4 (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 */

__int64 __fastcall HUBDSM_SettingNonZeroAddress(__int64 a1)
{
  _QWORD *v1; // rdi
  _DWORD *v2; // rbx
  __int64 v3; // rcx
  int v4; // eax
  int v6; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD **)(a1 + 960);
  v2 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   v1[54],
                   0LL);
  memset(v2, 0, 0x20uLL);
  *v2 = 32;
  *((_QWORD *)v2 + 1) = *(_QWORD *)(*v1 + 240LL);
  v3 = v1[3];
  v2[7] = 0;
  *((_QWORD *)v2 + 2) = v3;
  v4 = HUBUCX_SubmitUcxIoctl(v1, 4788255LL);
  if ( v4 < 0 )
  {
    v6 = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1[1] + 1432LL),
      2u,
      5u,
      0x1Bu,
      (__int64)&WPP_ac19941ca8303ac9317dca70d7291dce_Traceguids,
      v6);
  }
  return 1000LL;
}
