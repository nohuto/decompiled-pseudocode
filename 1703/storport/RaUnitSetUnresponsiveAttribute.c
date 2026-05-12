/*
 * XREFs of RaUnitSetUnresponsiveAttribute @ 0x1C003B010
 * Callers:
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C003BF80 (RaUnitUnresponsiveAttributeMgmt.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C002D15C (RaidAdapterResetBus.c)
 *     WPP_SF_q @ 0x1C00303C8 (WPP_SF_q.c)
 *     RaidUnitQueueHierarchicalResetWorkItem @ 0x1C003DF50 (RaidUnitQueueHierarchicalResetWorkItem.c)
 *     Template_qcccjq @ 0x1C003FA10 (Template_qcccjq.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C0044E44 (StorpTelemetryMarkUnitUnresponsive.c)
 */

__int64 __fastcall RaUnitSetUnresponsiveAttribute(__int64 a1)
{
  unsigned int v2; // ebx

  if ( (*(_BYTE *)(a1 + 154) & 2) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 88);
    if ( SLODWORD(WPP_MAIN_CB.Dpc.DpcData) < 0 )
      Template_qcccjq(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&EventUnitUnresponsive,
        HIWORD(v2),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        v2,
        SBYTE1(v2),
        SBYTE2(v2),
        a1 + 1688,
        5);
    *(_BYTE *)(a1 + 154) |= 2u;
    StorpTelemetryMarkUnitUnresponsive(a1, 0LL);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x37u,
        (__int64)&WPP_95124dee8acf35750318326cda357b29_Traceguids,
        a1);
    }
    if ( *(_DWORD *)(a1 + 476) && !(unsigned __int8)RaidUnitQueueHierarchicalResetWorkItem(a1) )
      RaidAdapterResetBus(*(_QWORD *)(a1 + 24), v2);
  }
  return 0LL;
}
