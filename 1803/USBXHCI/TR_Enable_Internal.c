/*
 * XREFs of TR_Enable_Internal @ 0x1C0020638
 * Callers:
 *     Endpoint_Enable @ 0x1C0011310 (Endpoint_Enable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C0015680 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C0015930 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     TR_InitializeTransferRing @ 0x1C0020CF4 (TR_InitializeTransferRing.c)
 *     WPP_RECORDER_SF_DDqd @ 0x1C0024900 (WPP_RECORDER_SF_DDqd.c)
 */

__int64 __fastcall TR_Enable_Internal(_QWORD *a1)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  int v4; // edx

  TR_InitializeTransferRing(a1);
  v2 = (*(__int64 (__fastcall **)(_QWORD *))(a1[4] + 32LL))(a1);
  v3 = a1[7];
  v4 = *(_DWORD *)(v3 + 144);
  LOBYTE(v4) = 4;
  WPP_RECORDER_SF_DDqd(
    *(_QWORD *)(a1[5] + 72LL),
    v4,
    v3,
    18,
    (__int64)&WPP_a1a6325854bc39664f145b9860d7b9b4_Traceguids,
    *(_BYTE *)(a1[6] + 135LL),
    *(_DWORD *)(v3 + 144),
    *(_QWORD *)(v3 + 24),
    v2);
  return v2;
}
