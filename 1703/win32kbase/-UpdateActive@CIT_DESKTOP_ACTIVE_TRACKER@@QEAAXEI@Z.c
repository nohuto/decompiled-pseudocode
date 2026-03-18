/*
 * XREFs of ?UpdateActive@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXEI@Z @ 0x1C0087210
 * Callers:
 *     CitSessionConnectChange @ 0x1C0084720 (CitSessionConnectChange.c)
 *     CitDesktopSwitch @ 0x1C00870C0 (CitDesktopSwitch.c)
 *     CitDisplayPowerChange @ 0x1C00996FC (CitDisplayPowerChange.c)
 * Callees:
 *     ?CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C00871BC (-CalculateUpToTime@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXI@Z.c)
 */

void __fastcall CIT_DESKTOP_ACTIVE_TRACKER::UpdateActive(CIT_DESKTOP_ACTIVE_TRACKER *this, char a2, int a3)
{
  __int64 v3; // r10
  char v4; // r11

  if ( *(_BYTE *)this != a2 )
  {
    CIT_DESKTOP_ACTIVE_TRACKER::CalculateUpToTime(this, a3);
    *(_BYTE *)v3 = v4;
    if ( v4 )
      ++*(_DWORD *)(v3 + 4);
  }
}
