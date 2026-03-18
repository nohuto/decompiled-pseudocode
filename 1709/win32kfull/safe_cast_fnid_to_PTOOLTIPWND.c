/*
 * XREFs of safe_cast_fnid_to_PTOOLTIPWND @ 0x1C01142DC
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00CC2E0 (xxxCancelMouseMoveTracking.c)
 *     xxxTrackMouseMove @ 0x1C00CE354 (xxxTrackMouseMove.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 *     _SetDoubleClickTime @ 0x1C0114210 (_SetDoubleClickTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall safe_cast_fnid_to_PTOOLTIPWND(__int64 a1)
{
  if ( !a1 || (*(_WORD *)(a1 + 82) & 0x3FFF) != 0x2B6 )
    return 0LL;
  if ( *(_DWORD *)(a1 + 252) )
    return *(_QWORD *)(a1 + 392);
  return *(_QWORD *)(a1 + 384);
}
