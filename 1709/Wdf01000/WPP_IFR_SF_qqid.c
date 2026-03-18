/*
 * XREFs of WPP_IFR_SF_qqid @ 0x1C00818B4
 * Callers:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 * Callees:
 *     FxIFR @ 0x1C000CF30 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C006EA34 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqid(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *globals_0,
        const void *level,
        const void *flags,
        __int64 id)
{
  int _a4[4]; // [rsp+70h] [rbp-18h] BYREF

  _a4[0] = -1071644151;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x20) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxValidateFunctions_cpp_Traceguids,
      0xDu,
      &level,
      8LL,
      &flags,
      8LL,
      &id,
      8LL,
      _a4,
      4LL,
      0LL);
  FxIFR(
    globals,
    2u,
    6u,
    WPP_FxValidateFunctions_cpp_Traceguids,
    0xDu,
    &level,
    8LL,
    &flags,
    8LL,
    &id,
    8LL,
    _a4,
    4LL,
    0LL);
}
