/*
 * XREFs of ?IsMobileCore@@YA_NXZ @ 0x1800015FC
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002A00 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     IsCreateAppChromePresent @ 0x1800069D0 (IsCreateAppChromePresent.c)
 */

bool IsMobileCore(void)
{
  return (unsigned __int8)IsCreateAppChromePresent() != 0;
}
