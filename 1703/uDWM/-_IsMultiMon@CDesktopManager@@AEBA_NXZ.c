/*
 * XREFs of ?_IsMultiMon@CDesktopManager@@AEBA_NXZ @ 0x180022508
 * Callers:
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x1800223CC (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z @ 0x18009D6C0 (-FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 */

bool __fastcall CDesktopManager::_IsMultiMon(CDesktopManager *this)
{
  LONG v1; // r8d
  int v2; // edx
  RECT rc1; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_DWORD *)this + 90);
  rc1.left = *((_DWORD *)this + 89);
  rc1.right = *((_DWORD *)this + 91) + rc1.left;
  v2 = *((_DWORD *)this + 92);
  rc1.top = v1;
  rc1.bottom = v1 + v2;
  return !EqualRect(&rc1, (const RECT *)((char *)this + 372));
}
