/*
 * XREFs of TR_Enable_Internal @ 0x1C0022D7C
 * Callers:
 *     Endpoint_Enable @ 0x1C00185D0 (Endpoint_Enable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C001C8D0 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C001CB80 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     TR_InitializeTransferRing @ 0x1C0023440 (TR_InitializeTransferRing.c)
 *     WPP_RECORDER_SF_DDqd @ 0x1C0023D74 (WPP_RECORDER_SF_DDqd.c)
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
    (__int64)&WPP_f27ad55644b83fdbb868113b0758d65b_Traceguids,
    *(_BYTE *)(a1[6] + 135LL),
    *(_DWORD *)(v3 + 144),
    *(_QWORD *)(v3 + 24),
    v2);
  return v2;
}
