/*
 * XREFs of ShowAutorunCursor @ 0x1C01A103C
 * Callers:
 *     ?DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1C01BDE70 (-DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 * Callees:
 *     SetRITTimer @ 0x1C00874B0 (SetRITTimer.c)
 */

__int64 __fastcall ShowAutorunCursor(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  EnterCrit(0LL, 1LL);
  gtmridAutorunCursor = SetRITTimer(gtmridAutorunCursor, a1, (int)HideAutorunCursor, 1);
  return UserSessionSwitchLeaveCrit(v3, v2);
}
