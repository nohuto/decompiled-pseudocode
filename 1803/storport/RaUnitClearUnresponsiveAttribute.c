/*
 * XREFs of RaUnitClearUnresponsiveAttribute @ 0x1C003A698
 * Callers:
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C003BD4C (RaUnitUnresponsiveAttributeMgmt.c)
 * Callees:
 *     WPP_SF_q @ 0x1C002C118 (WPP_SF_q.c)
 *     McTemplateK0qcccjq @ 0x1C003A058 (McTemplateK0qcccjq.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C0045784 (StorpTelemetryMarkUnitResponsive.c)
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
        (__int64)&WPP_b61d05cf262d3423cd62436c925d288c_Traceguids,
        a1);
    }
  }
  return 0LL;
}
