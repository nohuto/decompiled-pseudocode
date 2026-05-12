/*
 * XREFs of RaUnitSetUnresponsiveAttribute @ 0x1C003CD54
 * Callers:
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C003D888 (RaUnitUnresponsiveAttributeMgmt.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C002E0E4 (RaidAdapterResetBus.c)
 *     WPP_SF_q @ 0x1C0030A44 (WPP_SF_q.c)
 *     McTemplateK0qcccjq @ 0x1C003B7B8 (McTemplateK0qcccjq.c)
 *     RaidUnitQueueHierarchicalResetWorkItem @ 0x1C003EE14 (RaidUnitQueueHierarchicalResetWorkItem.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C0045A54 (StorpTelemetryMarkUnitUnresponsive.c)
 */

__int64 __fastcall RaUnitSetUnresponsiveAttribute(__int64 a1)
{
  unsigned int v2; // ebx

  if ( (*(_BYTE *)(a1 + 154) & 2) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 88);
    if ( SLODWORD(WPP_MAIN_CB.Dpc.DpcData) < 0 )
      McTemplateK0qcccjq(
        *(_QWORD *)(a1 + 24),
        &EventUnitUnresponsive,
        HIWORD(v2),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        v2,
        SBYTE1(v2),
        SBYTE2(v2),
        a1 + 1720,
        5);
    *(_BYTE *)(a1 + 154) |= 2u;
    StorpTelemetryMarkUnitUnresponsive(a1, 0LL);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x35u,
        (__int64)&WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
        a1);
    }
    if ( *(_DWORD *)(a1 + 476) && !(unsigned __int8)RaidUnitQueueHierarchicalResetWorkItem(a1) )
      RaidAdapterResetBus(*(_QWORD *)(a1 + 24), v2);
  }
  return 0LL;
}
