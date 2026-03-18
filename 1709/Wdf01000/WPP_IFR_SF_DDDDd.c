/*
 * XREFs of WPP_IFR_SF_DDDDd @ 0x1C0094FD4
 * Callers:
 *     imp_WdfIoQueueCreate @ 0x1C0019080 (imp_WdfIoQueueCreate.c)
 * Callees:
 *     FxIFR @ 0x1C000CF30 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C006EA34 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_DDDDd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int a3,
        unsigned __int16 level,
        const _GUID *flags,
        unsigned int id)
{
  unsigned int _a4; // [rsp+88h] [rbp+7h] BYREF
  unsigned int _a3a; // [rsp+90h] [rbp+Fh] BYREF
  unsigned int _a2a; // [rsp+98h] [rbp+17h] BYREF
  int v10; // [rsp+A0h] [rbp+1Fh] BYREF

  _a4 = -1073741820;
  _a3a = 96;
  _a2a = 88;
  v10 = 80;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x1000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxIoQueueApi_cpp_Traceguids,
      0xAu,
      &id,
      4LL,
      &v10,
      4LL,
      &_a2a,
      4LL,
      &_a3a,
      4LL,
      &_a4,
      4LL,
      0LL);
  FxIFR(
    globals,
    2u,
    0xDu,
    WPP_FxIoQueueApi_cpp_Traceguids,
    0xAu,
    &id,
    4LL,
    &v10,
    4LL,
    &_a2a,
    4LL,
    &_a3a,
    4LL,
    &_a4,
    4LL,
    0LL);
}
