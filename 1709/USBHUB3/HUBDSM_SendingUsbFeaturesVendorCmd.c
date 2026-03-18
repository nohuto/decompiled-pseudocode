/*
 * XREFs of HUBDSM_SendingUsbFeaturesVendorCmd @ 0x1C001C020
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002A20C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDSM_SendingUsbFeaturesVendorCmd(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  __int64 v4; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 960);
  *(_BYTE *)(v1 + 400) = 64;
  *(_BYTE *)(v1 + 401) = *(_BYTE *)(v1 + 2657);
  *(_WORD *)(v1 + 402) = *(_WORD *)(v1 + 2649);
  *(_WORD *)(v1 + 404) = *(_WORD *)(v1 + 2651);
  *(_WORD *)(v1 + 406) = 0;
  v2 = HUBMISC_ControlTransfer(
         *(_QWORD *)v1,
         *(_QWORD *)(v1 + 24),
         v1,
         (int)v1 + 248,
         (__int64)HUBDTX_ControlTransferComplete,
         0LL,
         0,
         1,
         *(_BYTE *)(v1 + 1512));
  if ( v2 >= 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v1 + 1636), 0x40000u);
  }
  else
  {
    LODWORD(v4) = v2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x35u,
      (__int64)&WPP_76a4a864dcd935c87619374dfe728a8f_Traceguids,
      v4);
    HUBSM_AddEvent(v1 + 504, 4004);
  }
  return 1000LL;
}
