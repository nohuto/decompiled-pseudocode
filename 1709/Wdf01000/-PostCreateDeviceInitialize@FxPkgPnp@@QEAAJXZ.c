/*
 * XREFs of ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x1C002A5E0
 * Callers:
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001E850 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ @ 0x1C00230C0 (-PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001FD44 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?IsCompanionRegisteredForDevice@FxCompanionLibrary@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00360C0 (-IsCompanionRegisteredForDevice@FxCompanionLibrary@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJ.c)
 *     ?AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z @ 0x1C007CB40 (-AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PostCreateDeviceInitialize(FxPkgPnp *this)
{
  struct _IO_WORKITEM *WorkItem; // rax
  int v3; // edi
  int _a1; // esi
  struct _IO_WORKITEM *v5; // rax
  struct _IO_WORKITEM *v6; // rax
  FxCompanionLibrary *v7; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  _DEVICE_OBJECT *m_DeviceObject; // r8
  unsigned __int16 v11; // r9
  int CompanionTarget; // esi

  this->m_PnpMachine.m_PkgPnp = this;
  this->m_PnpMachine.m_EventWorker = FxPkgPnp::_PnpProcessEventInner;
  this->m_PnpMachine.m_EventWorkerContext = 0LL;
  WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)FxLibraryGlobals.DriverObject);
  this->m_PnpMachine.m_WorkItem.m_WorkItem = WorkItem;
  v3 = -1073741670;
  _a1 = -1073741670;
  if ( WorkItem )
    _a1 = 0;
  if ( _a1 < 0 )
  {
    v11 = 29;
LABEL_19:
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, v11, WPP_FxPkgPnp_cpp_Traceguids, _a1);
    return (unsigned int)_a1;
  }
  this->m_PowerMachine.m_PkgPnp = this;
  this->m_PowerMachine.m_EventWorker = FxPkgPnp::_PowerProcessEventInner;
  this->m_PowerMachine.m_EventWorkerContext = 0LL;
  v5 = IoAllocateWorkItem(this->m_DeviceBase->m_DeviceObject.m_DeviceObject);
  this->m_PowerMachine.m_WorkItem.m_WorkItem = v5;
  _a1 = -1073741670;
  if ( v5 )
    _a1 = 0;
  if ( _a1 >= 0 )
    _a1 = 0;
  if ( _a1 < 0 )
  {
    v11 = 30;
    goto LABEL_19;
  }
  this->m_PowerPolicyMachine.m_PkgPnp = this;
  this->m_PowerPolicyMachine.m_EventWorker = FxPkgPnp::_PowerPolicyProcessEventInner;
  this->m_PowerPolicyMachine.m_EventWorkerContext = 0LL;
  v6 = IoAllocateWorkItem(this->m_DeviceBase->m_DeviceObject.m_DeviceObject);
  this->m_PowerPolicyMachine.m_WorkItem.m_WorkItem = v6;
  if ( v6 )
    v3 = 0;
  if ( v3 < 0 )
  {
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x1Fu, WPP_FxPkgPnp_cpp_Traceguids, v3);
  }
  else
  {
    m_DeviceBase = this->m_DeviceBase;
    if ( !LOBYTE(m_DeviceBase[1].m_ChildEntry.Blink)
      || (m_DeviceObject = m_DeviceBase->m_PhysicalDevice.m_DeviceObject) == 0LL )
    {
      m_DeviceObject = 0LL;
    }
    if ( FxCompanionLibrary::IsCompanionRegisteredForDevice(v7, m_DeviceBase->m_Globals, m_DeviceObject) )
    {
      CompanionTarget = FxDevice::AllocateCompanionTarget(this->m_Device, &this->m_CompanionTarget);
      if ( CompanionTarget >= 0 )
        FxObject::AddRef(
          this->m_CompanionTarget,
          this,
          1286,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
      this->m_CompanionTargetStatus = CompanionTarget;
    }
  }
  return (unsigned int)v3;
}
