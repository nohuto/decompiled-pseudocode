/*
 * XREFs of PowerIsDisplayRequired @ 0x1C00D72B0
 * Callers:
 *     PowerIsDisplayIdleExpired @ 0x1C0047D70 (PowerIsDisplayIdleExpired.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0064D20 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C0049560 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 */

__int64 PowerIsDisplayRequired()
{
  unsigned __int64 GlobalTickCount; // rax
  unsigned int v1; // ecx

  GlobalTickCount = CInputGlobals::GetGlobalTickCount((__int64)gpInputGlobals, 0);
  v1 = 0;
  if ( qword_1C018C218 <= GlobalTickCount )
    return dword_1C018C238 > 0;
  return v1;
}
