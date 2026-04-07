/*
 * XREFs of ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x180036658
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180016C9C (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x1800258E8 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ??0CContactManager@@QEAA@XZ @ 0x180039B00 (--0CContactManager@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CContactManager::RefreshPresentationModeSettings(CContactManager *this)
{
  int pvParam; // [rsp+38h] [rbp+10h] BYREF

  *((_BYTE *)this + 324) = SystemParametersInfoW(0x2018u, 0, &pvParam, 0) && pvParam == 2;
  return 0LL;
}
