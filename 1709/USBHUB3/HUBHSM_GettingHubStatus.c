/*
 * XREFs of HUBHSM_GettingHubStatus @ 0x1C0008630
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002A20C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHSM_GettingHubStatus(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  __int64 v4; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 960);
  *(_BYTE *)(v1 + 944) = *(_BYTE *)(v1 + 944) & 0x1C | 0x80;
  *(_BYTE *)(v1 + 945) = 0;
  *(_DWORD *)(v1 + 946) = 0;
  *(_WORD *)(v1 + 950) = 2;
  WPP_RECORDER_SF_(*(_QWORD *)(v1 + 2512), 4u, 3u, 0x17u, (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids);
  v2 = HUBMISC_ControlTransfer(
         v1,
         *(_QWORD *)(v1 + 240),
         v1,
         (int)v1 + 792,
         (__int64)HUBHTX_HubControlTransferComplete,
         v1 + 788,
         2,
         0,
         *(_BYTE *)(v1 + 2264));
  if ( v2 < 0 )
  {
    LODWORD(v4) = v2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1 + 2512),
      2u,
      3u,
      0x18u,
      (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids,
      v4);
    HUBSM_AddEvent(v1 + 1256, 2004LL);
  }
  return 1000LL;
}
