/*
 * XREFs of KiConvertToGuiThread @ 0x1401AE730
 * Callers:
 *     KiSystemCall64 @ 0x1401BB100 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x1404F11D0 (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
