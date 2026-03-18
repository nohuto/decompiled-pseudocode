/*
 * XREFs of ?_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@K3PEAK5@Z @ 0x1C0011504
 * Callers:
 *     ?_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAK@Z @ 0x1C0011398 (-_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4F.c)
 *     imp_WdfFdoInitQueryPropertyEx @ 0x1C0075C70 (imp_WdfFdoInitQueryPropertyEx.c)
 *     imp_WdfDeviceQueryPropertyEx @ 0x1C0076F60 (imp_WdfDeviceQueryPropertyEx.c)
 * Callees:
 *     ?_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z @ 0x1C0011618 (-_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 */

NTSTATUS __fastcall FxDevice::_QueryPropertyEx(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        FxDevice *Device,
        void *PropertyData,
        unsigned int BufferLength,
        ULONG PropertyBuffer,
        PVOID ResultLength,
        unsigned int *PropertyType,
        unsigned int *DriverGlobals_0)
{
  unsigned int *v9; // r14
  unsigned int *v10; // r15
  NTSTATUS result; // eax
  _DEVICE_OBJECT *PhysicalDevice; // rcx
  NTSTATUS DevicePropertyData; // ebx
  unsigned __int16 m_ObjectSize; // ax
  const void *v19; // rbx

  v9 = PropertyType;
  v10 = DriverGlobals_0;
  BufferLength = 0;
  *PropertyType = 0;
  *v10 = 0;
  result = FxDevice::_ValidateOpenKeyParams(DriverGlobals, DeviceInit, Device);
  if ( result < 0 )
    return result;
  if ( DeviceInit )
  {
    PhysicalDevice = DeviceInit->Fdo.PhysicalDevice;
LABEL_5:
    DevicePropertyData = IoGetDevicePropertyData(
                           PhysicalDevice,
                           *((const DEVPROPKEY **)PropertyData + 1),
                           *((_DWORD *)PropertyData + 4),
                           0,
                           PropertyBuffer,
                           ResultLength,
                           &BufferLength,
                           (PDEVPROPTYPE)&PropertyType);
    if ( (int)(DevicePropertyData + 0x80000000) < 0 || DevicePropertyData == -1073741789 )
    {
      *v9 = BufferLength;
      *v10 = (unsigned int)PropertyType;
    }
    else
    {
      WPP_IFR_SF_d(DriverGlobals, 2u, 0xCu, 0x19u, WPP_FxDeviceKm_cpp_Traceguids, DevicePropertyData);
    }
    return DevicePropertyData;
  }
  if ( Device->m_PdoKnown )
  {
    PhysicalDevice = Device->m_PhysicalDevice.FxDeviceBase::m_DeviceObject;
    if ( PhysicalDevice )
      goto LABEL_5;
  }
  m_ObjectSize = Device->m_ObjectSize;
  v19 = (const void *)((unsigned __int64)Device ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v19 = 0LL;
  WPP_IFR_SF_qd(DriverGlobals, 2u, 0x12u, 0x18u, WPP_FxDeviceKm_cpp_Traceguids, v19, -1073741436);
  return -1073741436;
}
