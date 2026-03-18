/*
 * XREFs of KiRestoreXSaveSupport @ 0x140473780
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x14014EB48 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KiEnableXSave @ 0x1404788AC (KiEnableXSave.c)
 */

__int64 KiRestoreXSaveSupport()
{
  return KiEnableXSave();
}
