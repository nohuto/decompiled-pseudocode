/*
 * XREFs of HUBDSM_ResettingPipeInUCXOnClientReset @ 0x1C0019A20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C001F594 (HUBUCX_SubmitUcxIoctl.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00391C0 (memset.c)
 */

__int64 __fastcall HUBDSM_ResettingPipeInUCXOnClientReset(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  _DWORD *v3; // rdi
  __int64 *v4; // rdx
  __int64 v5; // rax
  int v6; // eax
  int v8; // [rsp+28h] [rbp-40h]
  _WORD v9[20]; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 960);
  memset(v9, 0, sizeof(v9));
  v2 = *(_QWORD *)(v1 + 456);
  v9[0] = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _WORD *))(WdfFunctions_01015 + 2128))(WdfDriverGlobals, v2, v9);
  v3 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   *(_QWORD *)(v1 + 432),
                   0LL);
  memset(v3, 0, 0x28uLL);
  v4 = *(__int64 **)(v1 + 1656);
  if ( v4 )
  {
    *v3 = 40;
    *((_QWORD *)v3 + 1) = *(_QWORD *)(*(_QWORD *)v1 + 240LL);
    *((_QWORD *)v3 + 2) = *(_QWORD *)(v1 + 24);
    v5 = *v4;
    v3[8] = 0;
    *((_QWORD *)v3 + 3) = v5;
    v6 = HUBUCX_SubmitUcxIoctl(v1, 4788287LL);
    if ( v6 < 0 )
    {
      v8 = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x39u,
        (__int64)&WPP_3d53ed487f413aabe4c3ad9959a4b253_Traceguids,
        v8);
    }
  }
  else
  {
    *(_DWORD *)(v1 + 1564) = -2147482112;
    *(_DWORD *)(v1 + 1560) = -1073741811;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x38u,
      (__int64)&WPP_3d53ed487f413aabe4c3ad9959a4b253_Traceguids);
    HUBSM_AddEvent(v1 + 504, 4020);
  }
  return 1000LL;
}
