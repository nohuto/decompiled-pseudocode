/*
 * XREFs of ??0CGroupingStoryboard@@QEAA@_N@Z @ 0x18009AE4C
 * Callers:
 *     ??0CAppArrangementBase@@IEAA@_N@Z @ 0x18009ADB8 (--0CAppArrangementBase@@IEAA@_N@Z.c)
 *     ??0CLaunchSwitchBase@@QEAA@XZ @ 0x18009AE8C (--0CLaunchSwitchBase@@QEAA@XZ.c)
 * Callees:
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x180009FE4 (--0CStoryboard@@IEAA@_N@Z.c)
 */

CGroupingStoryboard *__fastcall CGroupingStoryboard::CGroupingStoryboard(CGroupingStoryboard *this, char a2)
{
  __int64 v2; // rcx

  CStoryboard::CStoryboard(this, a2);
  *(_QWORD *)(v2 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  *(_QWORD *)v2 = &CLaunchSwitchBase::`vftable'{for `CBaseObject'};
  *(_QWORD *)(v2 + 120) = 0LL;
  *(_QWORD *)(v2 + 128) = 0LL;
  *(_QWORD *)(v2 + 136) = 0LL;
  *(_DWORD *)(v2 + 144) = 0;
  return (CGroupingStoryboard *)v2;
}
