/*
 * XREFs of RaUnitClearUnresponsiveAttribute @ 0x1C003BDF8
 * Callers:
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C003D888 (RaUnitUnresponsiveAttributeMgmt.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0030A44 (WPP_SF_q.c)
 *     McTemplateK0qcccjq @ 0x1C003B7B8 (McTemplateK0qcccjq.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C00458E8 (StorpTelemetryMarkUnitResponsive.c)
 */

__int64 __fastcall RaUnitClearUnresponsiveAttribute(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 154) & 2) != 0 )
  {
    if ( (BYTE4(WPP_MAIN_CB.Dpc.DpcData) & 1) != 0 )
      McTemplateK0qcccjq(
        *(_DWORD *)(a1 + 88) >> 8,
        &EventUnitResponsive,
        a1 + 1720,
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_DWORD *)(a1 + 88),
        BYTE1(*(_DWORD *)(a1 + 88)),
        BYTE2(*(_DWORD *)(a1 + 88)),
        a1 + 1720,
        4);
    StorpTelemetryMarkUnitResponsive(a1);
    *(_BYTE *)(a1 + 154) &= ~2u;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x34u,
        (__int64)&WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
        a1);
    }
  }
  return 0LL;
}
