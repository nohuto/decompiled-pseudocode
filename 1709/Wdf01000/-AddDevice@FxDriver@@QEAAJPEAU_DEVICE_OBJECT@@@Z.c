/*
 * XREFs of ?AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C001CD14
 * Callers:
 *     ?AddDevice@FxDriver@@CAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0038D20 (-AddDevice@FxDriver@@CAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x1C00208FC (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C0020A90 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x1C007D574 (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 */

__int64 __fastcall FxDriver::AddDevice(FxDriver *this, _DEVICE_OBJECT *PhysicalDeviceObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  WDFDRIVER__ *v6; // rbx
  FxCallbackLock *m_CallbackLock; // rcx
  int v8; // eax
  __int64 v9; // rdx
  FxCallbackLock *v10; // rcx
  int v11; // ebx
  _FX_DRIVER_GLOBALS *v12; // rcx
  unsigned __int8 v14[16]; // [rsp+30h] [rbp-3E8h] BYREF
  WDFDEVICE_INIT init; // [rsp+40h] [rbp-3D8h] BYREF

  WDFDEVICE_INIT::WDFDEVICE_INIT(&init, this);
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0xAu, WPP_FxDriverKm_cpp_Traceguids, PhysicalDeviceObject);
  m_ObjectSize = this->m_ObjectSize;
  init.Fdo.PhysicalDevice = PhysicalDeviceObject;
  v6 = (WDFDRIVER__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  init.CreatedOnStack = 1;
  init.InitType = FxDeviceInitTypeFdo;
  if ( !m_ObjectSize )
    v6 = 0LL;
  if ( this->m_DriverDeviceAdd.Method )
  {
    m_CallbackLock = this->m_DriverDeviceAdd.m_CallbackLock;
    v14[0] = 0;
    if ( m_CallbackLock )
      m_CallbackLock->Lock(m_CallbackLock, v14);
    v8 = this->m_DriverDeviceAdd.Method(v6, &init);
    v10 = this->m_DriverDeviceAdd.m_CallbackLock;
    v11 = v8;
    if ( v10 )
    {
      LOBYTE(v9) = v14[0];
      v10->Unlock(v10, v9);
    }
  }
  else
  {
    v11 = -1073741823;
  }
  if ( init.CreatedDevice )
  {
    if ( v11 < 0 )
      v11 = FxDevice::DeleteDeviceFromFailedCreate((FxDevice *)init.CreatedDevice, v11, 1u);
    else
      *(_DWORD *)(*((_QWORD *)init.CreatedDevice + 18) + 48LL) &= ~0x80u;
    v12 = this->m_Globals;
    if ( v12->FxVerboseOn )
      WPP_IFR_SF_d(v12, 5u, 0xCu, 0xDu, WPP_FxDriverKm_cpp_Traceguids, v11);
  }
  else
  {
    WPP_IFR_SF_d(this->m_Globals, 3u, 0xCu, 0xBu, WPP_FxDriverKm_cpp_Traceguids, v11);
    if ( init.Fdo.Filter && v11 < 0 )
    {
      WPP_IFR_SF_d(this->m_Globals, 4u, 0xCu, 0xCu, WPP_FxDriverKm_cpp_Traceguids, v11);
      v11 = 0;
    }
  }
  WDFDEVICE_INIT::~WDFDEVICE_INIT(&init);
  return (unsigned int)v11;
}
