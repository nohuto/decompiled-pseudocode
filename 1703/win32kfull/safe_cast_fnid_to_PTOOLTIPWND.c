/*
 * XREFs of safe_cast_fnid_to_PTOOLTIPWND @ 0x1C00C69FC
 * Callers:
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     _SetDoubleClickTime @ 0x1C00C6930 (_SetDoubleClickTime.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00C89D8 (xxxCancelMouseMoveTracking.c)
 *     xxxTrackMouseMove @ 0x1C00CA16C (xxxTrackMouseMove.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
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
