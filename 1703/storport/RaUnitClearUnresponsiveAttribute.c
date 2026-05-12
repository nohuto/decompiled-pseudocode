/*
 * XREFs of RaUnitClearUnresponsiveAttribute @ 0x1C003A0A8
 * Callers:
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C003BF80 (RaUnitUnresponsiveAttributeMgmt.c)
 * Callees:
 *     WPP_SF_q @ 0x1C00303C8 (WPP_SF_q.c)
 *     Template_qcccjq @ 0x1C003FA10 (Template_qcccjq.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C0044CD8 (StorpTelemetryMarkUnitResponsive.c)
 */

__int64 __fastcall RaUnitClearUnresponsiveAttribute(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 154) & 2) != 0 )
  {
    if ( (BYTE4(WPP_MAIN_CB.Dpc.DpcData) & 1) != 0 )
      Template_qcccjq(
        *(_DWORD *)(a1 + 88) >> 8,
        (unsigned int)&EventUnitResponsive,
        a1 + 1688,
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_DWORD *)(a1 + 88),
        BYTE1(*(_DWORD *)(a1 + 88)),
        BYTE2(*(_DWORD *)(a1 + 88)),
        a1 + 1688,
        4);
    StorpTelemetryMarkUnitResponsive(a1);
    *(_BYTE *)(a1 + 154) &= ~2u;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x36u,
        (__int64)&WPP_95124dee8acf35750318326cda357b29_Traceguids,
        a1);
    }
  }
  return 0LL;
}
