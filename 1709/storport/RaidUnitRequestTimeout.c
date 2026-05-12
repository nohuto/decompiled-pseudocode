/*
 * XREFs of RaidUnitRequestTimeout @ 0x1C003EF68
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C001AF90 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C002E0E4 (RaidAdapterResetBus.c)
 *     WPP_SF_ @ 0x1C003096C (WPP_SF_.c)
 *     WPP_SF_ddd @ 0x1C00309E8 (WPP_SF_ddd.c)
 *     WPP_SF_q @ 0x1C0030A44 (WPP_SF_q.c)
 *     McTemplateK0qcccjq @ 0x1C003B7B8 (McTemplateK0qcccjq.c)
 *     RaidUnitQueueHierarchicalResetWorkItem @ 0x1C003EE14 (RaidUnitQueueHierarchicalResetWorkItem.c)
 *     RaidUnitUnresponsiveDeviceMarkingNeeded @ 0x1C003FF00 (RaidUnitUnresponsiveDeviceMarkingNeeded.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C0045A54 (StorpTelemetryMarkUnitUnresponsive.c)
 */

char __fastcall RaidUnitRequestTimeout(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // rax
  __int64 v4; // r8
  char result; // al
  __int64 v6; // [rsp+20h] [rbp-48h]
  int v7; // [rsp+20h] [rbp-48h]
  __int64 v8; // [rsp+28h] [rbp-40h]
  int v9; // [rsp+28h] [rbp-40h]

  v1 = *(_DWORD *)(a1 + 88);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x41u,
        (__int64)&WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      v9 = BYTE2(v1);
      v7 = BYTE1(v1);
      WPP_SF_ddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x42u,
        (__int64)&WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
        (unsigned __int8)v1,
        v7,
        v9);
    }
  }
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 && *(char *)(v3 + 108) < 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 1800));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 5416LL));
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 1856));
  if ( *(_DWORD *)(a1 + 1036) )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        LODWORD(v8) = BYTE2(v1);
        LODWORD(v6) = BYTE1(v1);
        WPP_SF_ddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x43u,
          (__int64)&WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
          (unsigned __int8)v1,
          v6,
          v8);
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x44u,
          (__int64)&WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids);
      }
    }
    return RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 88));
  }
  if ( (unsigned __int8)RaidUnitUnresponsiveDeviceMarkingNeeded(a1) )
  {
    StorpTelemetryMarkUnitUnresponsive(a1, 0LL);
    *(_BYTE *)(a1 + 154) |= 2u;
    if ( SLODWORD(WPP_MAIN_CB.Dpc.DpcData) < 0 )
      McTemplateK0qcccjq(
        *(_QWORD *)(a1 + 24),
        &EventUnitUnresponsive,
        v4,
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        v1,
        SBYTE1(v1),
        SBYTE2(v1),
        a1 + 1720,
        2);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x45u,
        (__int64)&WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
        a1);
    }
  }
  result = RaidUnitQueueHierarchicalResetWorkItem(a1);
  if ( !result )
    return RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 88));
  return result;
}
