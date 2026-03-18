/*
 * XREFs of HUBHTX_GetRequestedPortStatusUsingControlTransfer @ 0x1C00055D0
 * Callers:
 *     HUBHSM_GettingPortStatusOnPDORequestFromConfigWithIntTransfer @ 0x1C0007650 (HUBHSM_GettingPortStatusOnPDORequestFromConfigWithIntTransfer.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002AF70 (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHTX_GetRequestedPortStatusUsingControlTransfer(__int64 a1)
{
  __int64 v1; // rdi
  char v3; // al
  unsigned __int16 v4; // bx
  __int64 result; // rax
  int v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 2576);
  v3 = *(_BYTE *)(a1 + 944) & 0x1C;
  *(_BYTE *)(a1 + 945) = 0;
  *(_BYTE *)(a1 + 944) = v3 | 0xA3;
  *(_WORD *)(a1 + 948) = *(_WORD *)(v1 + 200);
  v4 = (*(_DWORD *)(v1 + 204) & 0x100) != 0 ? 8 : 4;
  *(_WORD *)(a1 + 946) = (*(_DWORD *)(v1 + 204) & 0x100) != 0 ? 2 : 0;
  *(_WORD *)(a1 + 950) = v4;
  v6 = *(unsigned __int16 *)(v1 + 200);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1 + 2512),
    4u,
    3u,
    0x6Fu,
    (__int64)&WPP_657f02cd6e64326733be7ab9e49a31de_Traceguids,
    v6);
  result = HUBMISC_ControlTransfer(
             a1,
             *(_QWORD *)(a1 + 240),
             a1,
             (int)a1 + 792,
             (__int64)HUBHTX_HubControlTransferComplete,
             v1 + 184,
             v4,
             0,
             *(_BYTE *)(a1 + 2264));
  if ( (int)result < 0 )
  {
    LODWORD(v7) = result;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2512),
      2u,
      3u,
      0x70u,
      (__int64)&WPP_657f02cd6e64326733be7ab9e49a31de_Traceguids,
      v7);
    return HUBSM_AddEvent(a1 + 1256, 2004LL);
  }
  return result;
}
