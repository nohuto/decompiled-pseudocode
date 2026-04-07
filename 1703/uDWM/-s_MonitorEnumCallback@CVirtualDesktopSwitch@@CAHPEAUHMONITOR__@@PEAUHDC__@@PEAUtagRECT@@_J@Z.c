/*
 * XREFs of ?s_MonitorEnumCallback@CVirtualDesktopSwitch@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x18009C440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CVirtualDesktopSwitch::s_MonitorEnumCallback(
        HMONITOR a1,
        HMONITOR a2,
        LPRECT a3,
        CVirtualDesktopSwitch *a4)
{
  return CVirtualDesktopSwitch::_MonitorEnumCallback(a4, a2, (HDC)a3, a3);
}
