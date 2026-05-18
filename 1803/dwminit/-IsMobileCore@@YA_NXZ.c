/*
 * XREFs of ?IsMobileCore@@YA_NXZ @ 0x1800050C8
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002B20 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     IsCreateAppChromePresent @ 0x1800085F8 (IsCreateAppChromePresent.c)
 */

bool IsMobileCore(void)
{
  return (unsigned __int8)IsCreateAppChromePresent() != 0;
}
