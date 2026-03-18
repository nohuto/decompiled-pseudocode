/*
 * XREFs of KiConfigureDynamicProcessor @ 0x140418FD8
 * Callers:
 *     KiInitDynamicProcessorIpi @ 0x140200940 (KiInitDynamicProcessorIpi.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 KiConfigureDynamicProcessor(void)
{
  return KiEnableXSave();
}
