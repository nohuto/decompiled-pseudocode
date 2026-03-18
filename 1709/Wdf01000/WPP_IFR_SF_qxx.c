/*
 * XREFs of WPP_IFR_SF_qxx @ 0x1C006D854
 * Callers:
 *     ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z @ 0x1C003331C (-AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z.c)
 * Callees:
 *     FxIFR @ 0x1C000CF30 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C006EA34 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qxx(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *globals_0,
        const void *level,
        __int64 flags,
        __int64 id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x4000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      0x2Bu,
      WPP_FxCommonBuffer_cpp_Traceguids,
      0xBu,
      &level,
      8LL,
      &flags,
      8LL,
      &id,
      8LL,
      0LL);
  FxIFR(globals, 2u, 0xFu, WPP_FxCommonBuffer_cpp_Traceguids, 0xBu, &level, 8LL, &flags, 8LL, &id, 8LL, 0LL);
}
