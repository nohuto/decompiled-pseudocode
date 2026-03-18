/*
 * XREFs of PowerIsDisplayRequired @ 0x1C00DD490
 * Callers:
 *     PowerIsDisplayIdleExpired @ 0x1C00110B0 (PowerIsDisplayIdleExpired.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0077520 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C0011510 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 */

__int64 PowerIsDisplayRequired()
{
  unsigned __int64 GlobalTickCount; // rax
  unsigned int v1; // ecx

  GlobalTickCount = CInputGlobals::GetGlobalTickCount((__int64)gpInputGlobals, 0);
  v1 = 0;
  if ( qword_1C0190F48 <= GlobalTickCount )
    return dword_1C0190F68 > 0;
  return v1;
}
