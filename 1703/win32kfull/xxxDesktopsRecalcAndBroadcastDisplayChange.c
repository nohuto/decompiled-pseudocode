/*
 * XREFs of xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00F1870
 * Callers:
 *     xxxDeferredDesktopRotation @ 0x1C01E7BD0 (xxxDeferredDesktopRotation.c)
 * Callees:
 *     xxxDesktopsRecalc @ 0x1C00F19E4 (xxxDesktopsRecalc.c)
 */

__int64 __fastcall xxxDesktopsRecalcAndBroadcastDisplayChange(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4)
{
  if ( a2 )
    xxxDesktopsRecalc(*(_QWORD *)(a1 + 40));
  return xxxBroadcastDisplaySettingsChange(a1, *(_WORD *)(gpsi + 8676LL) != a3, a4);
}
