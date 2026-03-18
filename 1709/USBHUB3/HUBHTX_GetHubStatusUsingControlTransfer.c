/*
 * XREFs of HUBHTX_GetHubStatusUsingControlTransfer @ 0x1C0003008
 * Callers:
 *     HUBHSM_GettingHubPortStatus @ 0x1C0007670 (HUBHSM_GettingHubPortStatus.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002A20C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHTX_GetHubStatusUsingControlTransfer(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v4; // [rsp+28h] [rbp-30h]

  v1 = a1 + 772;
  *(_BYTE *)(a1 + 944) = *(_BYTE *)(a1 + 944) & 0x1C | 0xA0;
  *(_BYTE *)(a1 + 945) = 0;
  *(_DWORD *)(a1 + 946) = 0;
  *(_WORD *)(a1 + 950) = 4;
  *(_DWORD *)(a1 + 776) = *(_DWORD *)(a1 + 772);
  WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2512), 4u, 3u, 0x19u, (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids);
  result = HUBMISC_ControlTransfer(
             a1,
             *(_QWORD *)(a1 + 240),
             a1,
             (int)a1 + 792,
             (__int64)HUBHTX_HubControlTransferComplete,
             v1,
             4,
             0,
             *(_BYTE *)(a1 + 2264));
  if ( (int)result < 0 )
  {
    LODWORD(v4) = result;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2512),
      2u,
      3u,
      0x1Au,
      (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids,
      v4);
    return HUBSM_AddEvent(a1 + 1256, 2004LL);
  }
  return result;
}
