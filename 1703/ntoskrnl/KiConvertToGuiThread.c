/*
 * XREFs of KiConvertToGuiThread @ 0x140185040
 * Callers:
 *     KiSystemCall64 @ 0x140191240 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x140545BA0 (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
