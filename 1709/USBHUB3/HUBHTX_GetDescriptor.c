/*
 * XREFs of HUBHTX_GetDescriptor @ 0x1C0002CB4
 * Callers:
 *     HUBHTX_GetHubDescriptorUsingControlTransfer @ 0x1C0002DBC (HUBHTX_GetHubDescriptorUsingControlTransfer.c)
 *     HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength @ 0x1C00083F0 (HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength.c)
 *     HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength @ 0x1C0008500 (HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength.c)
 * Callees:
 *     WPP_RECORDER_SF_c @ 0x1C0001FCC (WPP_RECORDER_SF_c.c)
 *     WPP_RECORDER_SF_cd @ 0x1C00024C8 (WPP_RECORDER_SF_cd.c)
 *     HUBMISC_ControlTransfer @ 0x1C002A20C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBHTX_GetDescriptor(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  int v6; // esi
  char v7; // al
  int v11; // [rsp+20h] [rbp-38h]

  v6 = a3;
  *(_WORD *)(a1 + 945) = 6;
  *(_BYTE *)(a1 + 947) = a4;
  v7 = *(_BYTE *)(a1 + 944);
  *(_WORD *)(a1 + 950) = a3;
  *(_BYTE *)(a1 + 944) = v7 & 0x9C | (a6 != 0 ? -96 : 0x80);
  *(_WORD *)(a1 + 948) = 0;
  if ( a6 )
    WPP_RECORDER_SF_c(
      *(_QWORD *)(a1 + 2512),
      4u,
      3u,
      0xFu,
      (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids,
      a4);
  else
    WPP_RECORDER_SF_cd(*(_QWORD *)(a1 + 2512), a2, a3, a4, v11);
  return HUBMISC_ControlTransfer(
           a1,
           *(_QWORD *)(a1 + 240),
           a1,
           (int)a1 + 792,
           (__int64)HUBHTX_HubControlTransferComplete,
           a2,
           v6,
           1,
           *(_BYTE *)(a1 + 2264));
}
