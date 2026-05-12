/*
 * XREFs of RaUnitSetUnresponsiveAttribute @ 0x1C003B374
 * Callers:
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C003BD4C (RaUnitUnresponsiveAttributeMgmt.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C00277B8 (RaidAdapterResetBus.c)
 *     WPP_SF_q @ 0x1C002C118 (WPP_SF_q.c)
 *     McTemplateK0qcccjq @ 0x1C003A058 (McTemplateK0qcccjq.c)
 *     RaidUnitQueueHierarchicalResetWorkItem @ 0x1C003D3FC (RaidUnitQueueHierarchicalResetWorkItem.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C00458F0 (StorpTelemetryMarkUnitUnresponsive.c)
 */

__int64 __fastcall RaUnitSetUnresponsiveAttribute(__int64 a1)
{
  char v2; // cl
  unsigned int v3; // ebx

  v2 = *(_BYTE *)(a1 + 154);
  if ( (v2 & 2) == 0 )
  {
    v3 = *(_DWORD *)(a1 + 88);
    if ( SLODWORD(WPP_MAIN_CB.Dpc.DpcData) < 0 )
    {
      McTemplateK0qcccjq(
        *(_QWORD *)(a1 + 24),
        &EventUnitUnresponsive,
        HIWORD(v3),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        v3,
        SBYTE1(v3),
        SBYTE2(v3),
        a1 + 1720,
        5);
      v2 = *(_BYTE *)(a1 + 154);
    }
    *(_BYTE *)(a1 + 154) = v2 | 2;
    StorpTelemetryMarkUnitUnresponsive(a1, 0LL);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x35u,
        (__int64)&WPP_b61d05cf262d3423cd62436c925d288c_Traceguids,
        a1);
    }
    if ( *(_DWORD *)(a1 + 476) && !(unsigned __int8)RaidUnitQueueHierarchicalResetWorkItem(a1) )
      RaidAdapterResetBus(*(_QWORD *)(a1 + 24), v3);
  }
  return 0LL;
}
