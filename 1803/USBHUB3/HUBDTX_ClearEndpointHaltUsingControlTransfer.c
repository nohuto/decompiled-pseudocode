/*
 * XREFs of HUBDTX_ClearEndpointHaltUsingControlTransfer @ 0x1C002593C
 * Callers:
 *     HUBDSM_ClearingEndpointHaltOnClientResetPipe @ 0x1C0019B10 (HUBDSM_ClearingEndpointHaltOnClientResetPipe.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002AF70 (HUBMISC_ControlTransfer.c)
 *     __security_check_cookie @ 0x1C00396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 */

void __fastcall HUBDTX_ClearEndpointHaltUsingControlTransfer(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  int v4; // eax
  __int16 v5; // cx
  char v6; // al
  __int64 v7; // [rsp+28h] [rbp-60h]
  _WORD v8[20]; // [rsp+50h] [rbp-38h] BYREF

  memset(v8, 0, sizeof(v8));
  v2 = *(_QWORD *)(a1 + 456);
  v8[0] = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _WORD *))(WdfFunctions_01015 + 2128))(WdfDriverGlobals, v2, v8);
  v3 = *(_QWORD *)(a1 + 1656);
  if ( v3 )
  {
    v5 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 32) + 2LL);
    v6 = *(_BYTE *)(a1 + 400) & 0x1C;
    *(_BYTE *)(a1 + 401) = 1;
    *(_WORD *)(a1 + 402) = 0;
    *(_BYTE *)(a1 + 400) = v6 | 2;
    *(_WORD *)(a1 + 404) = v5;
    *(_WORD *)(a1 + 406) = 0;
    v4 = HUBMISC_ControlTransfer(
           *(_QWORD *)a1,
           *(_QWORD *)(a1 + 24),
           a1,
           (int)a1 + 248,
           (__int64)HUBDTX_ControlTransferComplete,
           0LL,
           0,
           0,
           *(_BYTE *)(a1 + 1512));
    if ( v4 >= 0 )
      return;
  }
  else
  {
    v4 = -1073741811;
    *(_DWORD *)(a1 + 1564) = -2147482112;
    *(_DWORD *)(a1 + 1560) = -1073741811;
  }
  LODWORD(v7) = v4;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    2u,
    5u,
    0x4Fu,
    (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
    v7);
  HUBSM_AddEvent(a1 + 504, 4004);
}
