/*
 * XREFs of KiInitDynamicProcessorIpi @ 0x1402449F0
 * Callers:
 *     <none>
 * Callees:
 *     KiConfigureDynamicProcessor @ 0x140484C40 (KiConfigureDynamicProcessor.c)
 */

__int64 KiInitDynamicProcessorIpi()
{
  return KiConfigureDynamicProcessor();
}
