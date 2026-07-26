/*
 * XREFs of ndisMIsPowerSynchronizedDatapathRequired @ 0x1C001D2BC
 * Callers:
 *     ndisSetMiniportHandlers @ 0x1C0104E18 (ndisSetMiniportHandlers.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisMIsPowerSynchronizedDatapathRequired(_DWORD *a1)
{
  return (a1[30] & 0x80u) == 0
      && ((a1[984] & 0x3000) == 0x2000 || LODWORD(WPP_MAIN_CB.DeviceExtension) && (int)a1[468] < 0);
}
