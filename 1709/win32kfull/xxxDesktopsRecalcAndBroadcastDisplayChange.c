/*
 * XREFs of xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00497C0
 * Callers:
 *     xxxDeferredDesktopRotation @ 0x1C01F3BC0 (xxxDeferredDesktopRotation.c)
 * Callees:
 *     xxxDesktopsRecalc @ 0x1C0049464 (xxxDesktopsRecalc.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C0049830 (xxxBroadcastDisplaySettingsChange.c)
 */

__int64 __fastcall xxxDesktopsRecalcAndBroadcastDisplayChange(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4)
{
  if ( a2 )
    xxxDesktopsRecalc(*(_QWORD *)(a1 + 40), a2);
  return xxxBroadcastDisplaySettingsChange(a1, *(_WORD *)(gpsi + 9972LL) != a3, a4);
}
