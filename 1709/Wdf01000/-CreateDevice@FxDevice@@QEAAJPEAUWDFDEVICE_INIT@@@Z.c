/*
 * XREFs of ?CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001E278
 * Callers:
 *     ?ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001E800 (-ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001E850 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001EA40 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0026258 (-Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C00DA15C (WdmlibIoCreateDeviceSecure.c)
 */

NTSTATUS __fastcall FxDevice::CreateDevice(FxDevice *this, WDFDEVICE_INIT *DeviceInit)
{
  NTSTATUS result; // eax
  __int64 DeviceType; // rbx
  unsigned __int8 DeviceClassSet; // dl
  unsigned int DeviceCharacteristics; // edi
  NTSTATUS v8; // eax
  NTSTATUS v9; // r14d
  _DEVICE_OBJECT *v10; // rbx
  _DEVICE_OBJECT *v11; // rdi
  unsigned __int16 m_ObjectSize; // ax
  char *v13; // rax
  _DEVICE_OBJECT *v14; // rax
  _WDF_DEVICE_IO_TYPE ReadWriteIoType; // ecx
  bool v16; // cf
  FxString *Sddl; // rdx
  const _UNICODE_STRING *p_m_UnicodeString; // rdx
  _DEVICE_OBJECT *pNewDeviceObject; // [rsp+70h] [rbp+8h] BYREF

  result = FxPkgGeneral::Initialize(this->m_PkgGeneral, DeviceInit);
  if ( result < 0 )
    return result;
  DeviceType = DeviceInit->DeviceType;
  if ( (unsigned int)DeviceType < 0x3C )
    this->m_DefaultPriorityBoost = FxDevice::m_PriorityBoosts[DeviceType];
  DeviceClassSet = DeviceInit->Security.DeviceClassSet;
  DeviceCharacteristics = DeviceInit->Characteristics;
  if ( DeviceClassSet || DeviceInit->Security.Sddl )
    goto LABEL_18;
  if ( !DeviceInit->DeviceName && (DeviceCharacteristics & 0x80u) == 0 )
    goto LABEL_8;
  if ( DeviceInit->InitType != FxDeviceInitTypePdo )
  {
LABEL_18:
    v16 = DeviceClassSet != 0;
    Sddl = DeviceInit->Security.Sddl;
    if ( Sddl )
      p_m_UnicodeString = &Sddl->m_UnicodeString;
    else
      p_m_UnicodeString = &SDDL_DEVOBJ_SYS_ALL_ADM_ALL;
    v8 = WdmlibIoCreateDeviceSecure(
           this->m_Driver->m_DriverObject.m_DriverObject,
           (unsigned int)p_m_UnicodeString,
           (_UNICODE_STRING *)((__int64)&DeviceInit->DeviceName->m_UnicodeString & -(__int64)(DeviceInit->DeviceName != 0LL)),
           DeviceType,
           DeviceCharacteristics,
           this->m_Exclusive,
           p_m_UnicodeString,
           (const _GUID *)((unsigned __int64)&DeviceInit->Security.DeviceClass & -(__int64)v16),
           &pNewDeviceObject);
    goto LABEL_9;
  }
  WPP_IFR_SF_q(DeviceInit->DriverGlobals, 3u, 0x12u, 0xDu, WPP_FxDeviceInit_cpp_Traceguids, DeviceInit->Driver);
LABEL_8:
  v8 = IoCreateDevice(
         this->m_Driver->m_DriverObject.m_DriverObject,
         0x28u,
         0LL,
         DeviceType,
         DeviceCharacteristics,
         this->m_Exclusive,
         &pNewDeviceObject);
LABEL_9:
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = pNewDeviceObject;
    v11 = pNewDeviceObject + 1;
    IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)&pNewDeviceObject[1], this->m_Globals->Tag, 0, 0, 0x20u);
    LODWORD(v11->CurrentIrp) = DeviceInit->RemoveLockOptionFlags | this->m_Globals->RemoveLockOptionFlags;
    m_ObjectSize = this->m_ObjectSize;
    v13 = m_ObjectSize ? (char *)this + m_ObjectSize : 0LL;
    v10->DeviceExtension = v13 + 48;
    v14 = pNewDeviceObject;
    this->m_DeviceObject.m_DeviceObject = pNewDeviceObject;
    if ( !this->m_Filter )
    {
      ReadWriteIoType = DeviceInit->ReadWriteIoType;
      if ( ReadWriteIoType == WdfDeviceIoBuffered )
      {
        v14->Flags |= 4u;
      }
      else if ( ReadWriteIoType == WdfDeviceIoDirect )
      {
        v14->Flags |= 0x10u;
      }
      this->m_ReadWriteIoType = DeviceInit->ReadWriteIoType;
      this->m_PowerPageableCapable = DeviceInit->PowerPageable;
    }
  }
  return v9;
}
