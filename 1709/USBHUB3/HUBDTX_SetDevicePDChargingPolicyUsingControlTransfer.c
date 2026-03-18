/*
 * XREFs of HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer @ 0x1C0025D80
 * Callers:
 *     HUBDSM_SettingDevicePDChargingPolicy @ 0x1C001A500 (HUBDSM_SettingDevicePDChargingPolicy.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002A20C (HUBMISC_ControlTransfer.c)
 */

void __fastcall HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer(__int64 a1)
{
  int v2; // eax
  __int64 v3; // [rsp+28h] [rbp-30h]

  *(_BYTE *)(a1 + 400) &= 0x1Cu;
  *(_BYTE *)(a1 + 401) = 3;
  *(_WORD *)(a1 + 406) = 0;
  *(_WORD *)(a1 + 402) = 54;
  if ( *(_DWORD *)(*(_QWORD *)a1 + 92LL) == 100 )
    *(_WORD *)(a1 + 404) = 2;
  else
    *(_WORD *)(a1 + 404) = 1;
  v2 = HUBMISC_ControlTransfer(
         *(_QWORD *)a1,
         *(_QWORD *)(a1 + 24),
         a1,
         (int)a1 + 248,
         (__int64)HUBDTX_ControlTransferComplete,
         0LL,
         0,
         1,
         *(_BYTE *)(a1 + 1512));
  if ( v2 < 0 )
  {
    LODWORD(v3) = v2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x64u,
      (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
      v3);
    HUBSM_AddEvent(a1 + 504, 4004);
  }
}
