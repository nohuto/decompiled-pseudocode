/*
 * XREFs of imp_WdfDeviceInitRegisterPowerPolicyStateChangeCallback @ 0x1C0075520
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceInitRegisterPowerPolicyStateChangeCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_DEVICE_POWER_POLICY_STATE PowerPolicyState,
        void (__fastcall *EvtDevicePowerPolicyStateChange)(WDFDEVICE__ *, const _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA *),
        unsigned int CallbackTypes)
{
  _FX_DRIVER_GLOBALS *v7; // rdi
  _FX_DRIVER_GLOBALS *v8; // rcx
  unsigned __int32 v9; // ebp
  __int64 result; // rax
  FxPowerPolicyStateCallback *v11; // rax
  FxPowerPolicyStateCallback *v12; // rsi
  unsigned __int16 v13; // r9
  char *v14; // rcx
  void *Caller; // [rsp+48h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, Caller);
  v7 = DeviceInit->DriverGlobals;
  v8 = DeviceInit->DriverGlobals;
  if ( !EvtDevicePowerPolicyStateChange )
    FxVerifierNullBugCheck(v8, Caller);
  v9 = PowerPolicyState & 0xFFFF7FFF;
  result = FxVerifierCheckIrqlLevel(v8, 0);
  if ( (int)result >= 0 )
  {
    if ( v9 - 1280 > 0x98 )
    {
      v13 = 27;
    }
    else if ( (CallbackTypes & 0xFFFFFFF8) != 0 || !CallbackTypes )
    {
      v13 = 28;
    }
    else
    {
      if ( DeviceInit->PnpPower.PowerPolicyStateCallbacks )
        goto LABEL_15;
      v11 = (FxPowerPolicyStateCallback *)FxPoolAllocator(
                                            v7,
                                            &v7->FxPoolFrameworks,
                                            ExDefaultNonPagedPoolType,
                                            0x990uLL,
                                            v7->Tag,
                                            Caller);
      v12 = v11;
      if ( v11 )
        memset(v11, 0, sizeof(FxPowerPolicyStateCallback));
      else
        v12 = 0LL;
      DeviceInit->PnpPower.PowerPolicyStateCallbacks = v12;
      if ( v12 )
      {
LABEL_15:
        v14 = (char *)&DeviceInit->PnpPower.PowerPolicyStateCallbacks[-8] + 16 * v9 - 896;
        result = 0LL;
        *((_QWORD *)v14 + 1) = EvtDevicePowerPolicyStateChange;
        *(_DWORD *)v14 = CallbackTypes;
        return result;
      }
      v13 = 29;
    }
    WPP_IFR_SF_d(v7, 2u, 0x12u, v13, WPP_FxDeviceInitApi_cpp_Traceguids, -1073741811);
    return 3221225485LL;
  }
  return result;
}
