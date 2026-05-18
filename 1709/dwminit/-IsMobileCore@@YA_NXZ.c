/*
 * XREFs of ?IsMobileCore@@YA_NXZ @ 0x180005408
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002AC0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     IsCreateAppChromePresent @ 0x1800096F8 (IsCreateAppChromePresent.c)
 */

bool IsMobileCore(void)
{
  return (unsigned __int8)IsCreateAppChromePresent() != 0;
}
