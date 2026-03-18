/*
 * XREFs of ?_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z @ 0x1C007E32C
 * Callers:
 *     imp_WdfCxDeviceInitAllocate @ 0x1C0079730 (imp_WdfCxDeviceInitAllocate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 */

WDFCXDEVICE_INIT *__fastcall WDFCXDEVICE_INIT::_AllocateCxDeviceInit(WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *DriverGlobals; // rsi
  _LIST_ENTRY **v3; // rax
  _LIST_ENTRY **v4; // rbx
  _LIST_ENTRY *p_CxDeviceInitListHead; // rax
  _LIST_ENTRY *Flink; // rcx
  void *Caller; // [rsp+38h] [rbp+0h]

  DriverGlobals = DeviceInit->DriverGlobals;
  v3 = (_LIST_ENTRY **)FxPoolAllocator(
                         DriverGlobals,
                         &DriverGlobals->FxPoolFrameworks,
                         ExDefaultNonPagedPoolType,
                         0x1B0uLL,
                         DriverGlobals->Tag,
                         Caller);
  v4 = v3;
  if ( v3 )
  {
    v3[1] = (_LIST_ENTRY *)v3;
    *v3 = (_LIST_ENTRY *)v3;
    v3[2] = 0LL;
    v3[3] = 0LL;
    v3[4] = 0LL;
    v3[5] = 0LL;
    memset(v3 + 6, 0, 0xA8uLL);
    *((_DWORD *)v4 + 52) = 2;
    memset(v4 + 27, 0, 0xD0uLL);
    v4[53] = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    p_CxDeviceInitListHead = &DeviceInit->CxDeviceInitListHead;
    Flink = DeviceInit->CxDeviceInitListHead.Flink;
    if ( Flink->Blink != &DeviceInit->CxDeviceInitListHead )
      __fastfail(3u);
    v4[1] = p_CxDeviceInitListHead;
    *v4 = Flink;
    Flink->Blink = (_LIST_ENTRY *)v4;
    p_CxDeviceInitListHead->Flink = (_LIST_ENTRY *)v4;
    return (WDFCXDEVICE_INIT *)v4;
  }
  else
  {
    WPP_IFR_SF_q(DriverGlobals, 2u, 0x12u, 0xAu, WPP_FxCxDeviceInit_cpp_Traceguids, DeviceInit->Driver);
    return 0LL;
  }
}
