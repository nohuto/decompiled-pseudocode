/*
 * XREFs of HUBMISC_CreateWerReport @ 0x1C002C28C
 * Callers:
 *     HUBPDO_ReportDeviceFailure @ 0x1C0016EE8 (HUBPDO_ReportDeviceFailure.c)
 *     HUBMISC_WerReportWorkItem @ 0x1C006E4B0 (HUBMISC_WerReportWorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WER_CreateReport @ 0x1C0035FAC (WER_CreateReport.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 */

__int64 __fastcall HUBMISC_CreateWerReport(__int64 a1, int a2, int a3)
{
  __int64 (__fastcall *v6)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64 *); // rax
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rax
  PWDF_DRIVER_GLOBALS v10; // rcx
  int v11; // r9d
  _QWORD v13[3]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v14[7]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v15; // [rsp+B8h] [rbp+38h] BYREF

  if ( KeGetCurrentIrql() < 2u )
  {
    v11 = 0;
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v11 = 12289;
      }
      else if ( a2 == 2 )
      {
        v11 = 12291;
      }
    }
    else
    {
      v11 = 12288;
    }
    return (unsigned int)WER_CreateReport(a1, a2, a3, v11, a3);
  }
  else
  {
    memset(v14, 0, sizeof(v14));
    v14[6] = off_1C005B138;
    v14[4] = *(_QWORD *)(a1 + 16);
    v14[3] = 0x100000001LL;
    v13[0] = 0LL;
    v13[1] = HUBMISC_WerReportWorkItem;
    v13[2] = 1LL;
    v6 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 3032);
    LODWORD(v14[0]) = 56;
    LODWORD(v13[0]) = 24;
    v7 = v6(WdfDriverGlobals, v13, v14, &v15);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             v15,
             off_1C005B138);
      v10 = WdfDriverGlobals;
      *(_QWORD *)v9 = a1;
      *(_DWORD *)(v9 + 8) = a2;
      *(_DWORD *)(v9 + 12) = a3;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(v10, v15);
    }
    else
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2512),
        2u,
        3u,
        0x75u,
        (__int64)&WPP_6dc2a34f378238ba241799b961c3ba51_Traceguids,
        v7);
    }
  }
  return v8;
}
