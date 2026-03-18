/*
 * XREFs of WPP_IFR_SF_qqLdqqq @ 0x1C0012C28
 * Callers:
 *     ?ClearTargetPointers@FxIoTargetRemote@@MEAAXXZ @ 0x1C0013950 (-ClearTargetPointers@FxIoTargetRemote@@MEAAXXZ.c)
 * Callees:
 *     FxIFR @ 0x1C000CF30 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C006EA34 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqLdqqq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const void *_a5,
        const void *_a6,
        unsigned int _a7,
        int globals_0,
        const void *level,
        const void *flags,
        const void *id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x2000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 4u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      0x2Bu,
      WPP_FxIoTargetRemote_cpp_Traceguids,
      0x21u,
      &_a5,
      8LL,
      &_a6,
      8LL,
      &_a7,
      4LL,
      &globals_0,
      4LL,
      &level,
      8LL,
      &flags,
      8LL,
      &id,
      8LL,
      0LL);
  FxIFR(
    globals,
    4u,
    0xEu,
    WPP_FxIoTargetRemote_cpp_Traceguids,
    0x21u,
    &_a5,
    8LL,
    &_a6,
    8LL,
    &_a7,
    4LL,
    &globals_0,
    4LL,
    &level,
    8LL,
    &flags,
    8LL,
    &id,
    8LL,
    0LL);
}
