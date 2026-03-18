/*
 * XREFs of KiConvertToGuiThread @ 0x140184AE0
 * Callers:
 *     KiSystemCall64 @ 0x140191400 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x140503CF0 (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
