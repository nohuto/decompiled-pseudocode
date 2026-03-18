/*
 * XREFs of imp_WdfDeviceAllocAndQueryPropertyEx @ 0x1C0011290
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAK@Z @ 0x1C0011398 (-_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4F.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0068380 (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDeviceAllocAndQueryPropertyEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_PROPERTY_DATA *DeviceProperty,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory,
        unsigned int *Type)
{
  unsigned __int8 v9; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int v11; // edi
  unsigned __int16 v12; // r9
  WDFMEMORY__ **PropertyType; // rdi
  unsigned int *v14; // rsi
  _WDF_OBJECT_ATTRIBUTES *v15; // rbp
  int result; // eax
  FxPropertyType _a1; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxDevice *pDevice; // [rsp+70h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !DeviceProperty )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  if ( DeviceProperty->Size != 24 )
  {
    v11 = -1073741820;
    WPP_IFR_SF_DDd(m_Globals, v9, 0xCu, 0x38u, WPP_FxDeviceApi_cpp_Traceguids, DeviceProperty->Size, 24, -1073741820);
    return v11;
  }
  v11 = FxVerifierCheckIrqlLevel(pDevice->m_Globals, 1u);
  if ( v11 < 0 )
  {
    FxVerifierDbgBreakPoint(m_Globals);
    return v11;
  }
  if ( m_Globals->FxVerifierOn && FxLibraryGlobals.VfCheckNxPoolType )
    FxLibraryGlobals.VfCheckNxPoolType(PoolType, retaddr, m_Globals->Tag);
  PropertyType = PropertyMemory;
  if ( !PropertyMemory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v14 = Type;
  if ( !Type )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v15 = PropertyMemoryAttributes;
  *PropertyMemory = 0LL;
  result = FxValidateObjectAttributes(m_Globals, v15, 0, v12);
  if ( result >= 0 )
    return FxDevice::_AllocAndQueryPropertyEx(
             m_Globals,
             0LL,
             pDevice,
             DeviceProperty,
             _a1,
             PoolType,
             v15,
             PropertyType,
             v14);
  return result;
}
