/*
 * XREFs of KiRestoreXSaveSupport @ 0x14042E878
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x140203D30 (KeRestoreProcessorSpecificFeatures.c)
 *     KiInitDynamicProcessorIpi @ 0x140206DD0 (KiInitDynamicProcessorIpi.c)
 * Callees:
 *     KiEnableXSave @ 0x140426568 (KiEnableXSave.c)
 */

__int64 KiRestoreXSaveSupport()
{
  return KiEnableXSave();
}
