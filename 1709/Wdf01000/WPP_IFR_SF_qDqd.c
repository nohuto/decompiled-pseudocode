/*
 * XREFs of WPP_IFR_SF_qDqD @ 0x1C008045C
 * Callers:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0002E5C (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     imp_WdfMemoryCreate @ 0x1C0003BB0 (imp_WdfMemoryCreate.c)
 *     FxIoTargetFormatIoctl @ 0x1C0004AF0 (FxIoTargetFormatIoctl.c)
 *     imp_WdfObjectDelete @ 0x1C0006EF0 (imp_WdfObjectDelete.c)
 *     imp_WdfObjectCreate @ 0x1C001F010 (imp_WdfObjectCreate.c)
 *     imp_WdfWorkItemCreate @ 0x1C001F470 (imp_WdfWorkItemCreate.c)
 *     imp_WdfSpinLockCreate @ 0x1C00203C0 (imp_WdfSpinLockCreate.c)
 *     imp_WdfFdoQueryForInterface @ 0x1C0022070 (imp_WdfFdoQueryForInterface.c)
 *     imp_WdfDeviceWdmGetDeviceObject @ 0x1C0033BC0 (imp_WdfDeviceWdmGetDeviceObject.c)
 *     imp_WdfDeviceGetIoTarget @ 0x1C0033C70 (imp_WdfDeviceGetIoTarget.c)
 *     imp_WdfMemoryGetBuffer @ 0x1C0034A90 (imp_WdfMemoryGetBuffer.c)
 *     imp_WdfDeviceWdmGetPhysicalDevice @ 0x1C0036240 (imp_WdfDeviceWdmGetPhysicalDevice.c)
 * Callees:
 *     FxIFR @ 0x1C000CF30 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C006EA34 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qDqD(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const void *globals_0,
        unsigned int level,
        const void *flags,
        unsigned int id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x20000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_HandleAPI_cpp_Traceguids,
      0xBu,
      &globals_0,
      8LL,
      &level,
      4LL,
      &flags,
      8LL,
      &id,
      4LL,
      0LL);
  FxIFR(
    globals,
    2u,
    0x12u,
    WPP_HandleAPI_cpp_Traceguids,
    0xBu,
    &globals_0,
    8LL,
    &level,
    4LL,
    &flags,
    8LL,
    &id,
    4LL,
    0LL);
}
