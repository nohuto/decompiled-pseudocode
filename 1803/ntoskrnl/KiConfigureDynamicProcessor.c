/*
 * XREFs of KiConfigureDynamicProcessor @ 0x140484C40
 * Callers:
 *     KiInitDynamicProcessorIpi @ 0x1402449F0 (KiInitDynamicProcessorIpi.c)
 * Callees:
 *     KiEnableXSave @ 0x1404788AC (KiEnableXSave.c)
 */

__int64 KiConfigureDynamicProcessor()
{
  return KiEnableXSave();
}
