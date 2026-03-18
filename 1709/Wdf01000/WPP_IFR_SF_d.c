/*
 * XREFs of WPP_IFR_SF_D @ 0x1C006E904
 * Callers:
 *     imp_WdfFdoRetrieveNextStaticChild @ 0x1C0001010 (imp_WdfFdoRetrieveNextStaticChild.c)
 *     imp_WdfTimerStop @ 0x1C0001C50 (imp_WdfTimerStop.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009360 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     GetImageName @ 0x1C00153AC (GetImageName.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C0024520 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     imp_WdfDeviceSetSpecialFileSupport @ 0x1C0038440 (imp_WdfDeviceSetSpecialFileSupport.c)
 *     imp_WdfDeviceInitSetFileObjectConfig @ 0x1C0038F90 (imp_WdfDeviceInitSetFileObjectConfig.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C0064980 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x1C0073E20 (-LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceC.c)
 *     imp_WdfControlDeviceInitSetShutdownNotification @ 0x1C00752A0 (imp_WdfControlDeviceInitSetShutdownNotification.c)
 *     imp_WdfCxDeviceInitSetFileObjectConfig @ 0x1C00799E0 (imp_WdfCxDeviceInitSetFileObjectConfig.c)
 *     ?InitializeLockOrder@FxVerifierLock@@AEAAXXZ @ 0x1C0082588 (-InitializeLockOrder@FxVerifierLock@@AEAAXXZ.c)
 * Callees:
 *     FxIFR @ 0x1C000CF30 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C006EA34 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_D(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 flags,
        unsigned int id,
        unsigned __int16 traceGuid,
        const _GUID *_a1,
        unsigned int globals_0)
{
  int v9; // eax
  unsigned __int64 v10; // r11

  v9 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)id >> 16) + (((id - 1) >> 5) & 0x7FF));
  if ( _bittest(&v9, ((_BYTE)id - 1) & 0x1F) )
  {
    v10 = (unsigned __int64)id >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v10 + 1) >= 2u )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v10),
        0x2Bu,
        _a1,
        traceGuid,
        &globals_0,
        4LL,
        0LL);
  }
  FxIFR(globals, 2u, id, _a1, traceGuid, &globals_0, 4LL, 0LL);
}
