/*
 * XREFs of RaidAdapterDevicePowerDownSrbComplete @ 0x1C000FCC0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C00119D8 (RaidAdapterDevicePowerstopAdapter.c)
 *     WPP_SF_qqD @ 0x1C0030BFC (WPP_SF_qqD.c)
 */

__int64 __fastcall RaidAdapterDevicePowerDownSrbComplete(__int64 a1)
{
  IRP *v1; // rdi
  __int64 v2; // rbx

  v1 = *(IRP **)(a1 + 160);
  v2 = *(_QWORD *)(a1 + 216);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      22LL,
      &WPP_0c5c8aed4ecb3cf637873a43b49c0b60_Traceguids,
      v2,
      v1,
      v1->IoStatus.Status);
  }
  *(_WORD *)(v2 + 4640) = 0;
  return RaidAdapterDevicePowerstopAdapter(v1);
}
