/*
 * XREFs of imp_WdfDeviceInitRegisterPowerStateChangeCallback @ 0x1C0075680
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceInitRegisterPowerStateChangeCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_DEVICE_POWER_STATE PowerState,
        void (__fastcall *EvtDevicePowerStateChange)(WDFDEVICE__ *, const _WDF_DEVICE_POWER_NOTIFICATION_DATA *),
        unsigned int CallbackTypes)
{
  _FX_DRIVER_GLOBALS *v7; // rdi
  _FX_DRIVER_GLOBALS *v8; // rcx
  unsigned __int32 v9; // ebp
  __int64 result; // rax
  FxPowerStateCallback *v11; // rax
  FxPowerStateCallback *v12; // rsi
  unsigned __int16 v13; // r9
  char *v14; // rcx
  void *Caller; // [rsp+48h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, Caller);
  v7 = DeviceInit->DriverGlobals;
  v8 = DeviceInit->DriverGlobals;
  if ( !EvtDevicePowerStateChange )
    FxVerifierNullBugCheck(v8, Caller);
  v9 = PowerState & 0xFFFF7FFF;
  result = FxVerifierCheckIrqlLevel(v8, 0);
  if ( (int)result >= 0 )
  {
    if ( v9 - 768 > 0x62 )
    {
      v13 = 24;
    }
    else if ( (CallbackTypes & 0xFFFFFFF8) != 0 || !CallbackTypes )
    {
      v13 = 25;
    }
    else
    {
      if ( DeviceInit->PnpPower.PowerStateCallbacks )
        goto LABEL_15;
      v11 = (FxPowerStateCallback *)FxPoolAllocator(
                                      v7,
                                      &v7->FxPoolFrameworks,
                                      ExDefaultNonPagedPoolType,
                                      0x630uLL,
                                      v7->Tag,
                                      Caller);
      v12 = v11;
      if ( v11 )
        memset(v11, 0, sizeof(FxPowerStateCallback));
      else
        v12 = 0LL;
      DeviceInit->PnpPower.PowerStateCallbacks = v12;
      if ( v12 )
      {
LABEL_15:
        v14 = (char *)&DeviceInit->PnpPower.PowerStateCallbacks[-7] + 16 * v9 - 1200;
        result = 0LL;
        *((_QWORD *)v14 + 1) = EvtDevicePowerStateChange;
        *(_DWORD *)v14 = CallbackTypes;
        return result;
      }
      v13 = 26;
    }
    WPP_IFR_SF_d(v7, 2u, 0x12u, v13, WPP_FxDeviceInitApi_cpp_Traceguids, -1073741811);
    return 3221225485LL;
  }
  return result;
}
