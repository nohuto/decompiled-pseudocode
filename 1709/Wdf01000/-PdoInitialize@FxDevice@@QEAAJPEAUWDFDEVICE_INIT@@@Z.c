/*
 * XREFs of ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001E850
 * Callers:
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0019320 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 * Callees:
 *     ?InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z @ 0x1C001E23C (-InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z.c)
 *     ?CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001E278 (-CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ??0FxPkgPdo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x1C0021288 (--0FxPkgPdo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 *     ?RegisterCallbacks@FxPkgPdo@@QEAAXPEAU_WDF_PDO_EVENT_CALLBACKS@@@Z @ 0x1C0021350 (-RegisterCallbacks@FxPkgPdo@@QEAAXPEAU_WDF_PDO_EVENT_CALLBACKS@@@Z.c)
 *     ?PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0027AB8 (-PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x1C002A5E0 (-PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ.c)
 *     ?PostCreateDeviceInitialize@FxWmiIrpHandler@@QEAAJXZ @ 0x1C0030B98 (-PostCreateDeviceInitialize@FxWmiIrpHandler@@QEAAJXZ.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0031E50 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

int __fastcall FxDevice::PdoInitialize(FxDevice *this, WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  KIRQL v5; // al
  FxDevice *Parent; // rcx
  unsigned int v7; // edx
  FxTagTracker *m_PkgGeneral; // rcx
  FxPkgPdo *v9; // rax
  FxPkgPdo *v10; // rax
  FxPkgPdo *v11; // rbx
  int result; // eax
  NTSTATUS Device; // ecx

  m_Globals = this->m_Globals;
  if ( !DeviceInit->Pdo.Static )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
    this->m_ObjectFlags |= 2u;
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v5);
  }
  if ( !DeviceInit->DeviceName && (DeviceInit->Characteristics & 0x80u) == 0 )
    return -1073741773;
  Parent = DeviceInit->Pdo.Parent;
  this->m_ParentDevice = Parent;
  v7 = _InterlockedIncrement(&Parent->m_Refcnt);
  if ( SLOBYTE(Parent->m_ObjectFlags) < 0 )
    m_PkgGeneral = (FxTagTracker *)Parent[-1].m_PkgGeneral;
  else
    m_PkgGeneral = 0LL;
  if ( m_PkgGeneral )
    FxTagTracker::UpdateTagHistory(
      m_PkgGeneral,
      this,
      252,
      "minkernel\\wdf\\framework\\shared\\core\\km\\fxdevicekm.cpp",
      TagAddRef,
      v7);
  v9 = (FxPkgPdo *)FxObjectHandleAlloc(m_Globals, ExDefaultNonPagedPoolType, 0x6E0uLL, 0, 0LL, 0, FxObjectTypeInternal);
  if ( v9 )
  {
    FxPkgPdo::FxPkgPdo(v9, m_Globals, this);
    v11 = v10;
  }
  else
  {
    v11 = 0LL;
  }
  this->m_PkgPnp = v11;
  if ( !v11 )
    return -1073741670;
  FxDevice::InstallPackage(this, v11);
  result = this->m_PkgPnp->Initialize(this->m_PkgPnp, DeviceInit);
  if ( result >= 0 )
  {
    if ( DeviceInit->Pdo.EventCallbacks.Size )
      FxPkgPdo::RegisterCallbacks(v11, &DeviceInit->Pdo.EventCallbacks);
    Device = FxDevice::CreateDevice(this, DeviceInit);
    if ( Device < 0 )
      return Device;
    this->m_PhysicalDevice.FxDeviceBase::m_DeviceObject = this->m_DeviceObject.m_DeviceObject;
    if ( DeviceInit->Pdo.Raw )
      v11->m_RawOK = 1;
    if ( DeviceInit->PowerPageable )
    {
      this->m_DeviceObject.m_DeviceObject->Flags |= 0x2000u;
    }
    else if ( DeviceInit->Inrush )
    {
      this->m_DeviceObject.m_DeviceObject->Flags |= 0x4000u;
    }
    if ( DeviceInit->Pdo.ForwardRequestToParent )
    {
      this->m_DeviceObject.m_DeviceObject->StackSize += DeviceInit->Pdo.Parent->m_DeviceObject.m_DeviceObject->StackSize;
      v11->m_AllowForwardRequestToParent = 1;
    }
    result = FxWmiIrpHandler::PostCreateDeviceInitialize(this->m_PkgWmi);
    if ( result >= 0 )
    {
      result = FxPkgGeneral::PostCreateDeviceInitialize(this->m_PkgGeneral, DeviceInit);
      if ( result >= 0 )
      {
        Device = FxPkgPnp::PostCreateDeviceInitialize(v11);
        if ( Device >= 0 )
          this->m_DeviceObject.m_DeviceObject->Flags &= ~0x80u;
        return Device;
      }
    }
  }
  return result;
}
