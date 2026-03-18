/*
 * XREFs of ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1C002EC44
 * Callers:
 *     ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x1C002ED0C (-InitializeComponents@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ??0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z @ 0x1C002F77C (--0FxDevicePwrRequirementMachine@@QEAA@PEAVFxPoxInterface@@@Z.c)
 *     ?Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F7E8 (-Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z @ 0x1C002F9B0 (-Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1C00A3B10 (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall FxPoxInterface::CreateDevicePowerRequirementMachine(FxPoxInterface *this)
{
  FxDevicePwrRequirementMachine *v2; // rax
  _FX_DRIVER_GLOBALS *v3; // rdx
  FxDevicePwrRequirementMachine *v4; // rax
  FxDevicePwrRequirementMachine *v5; // rbx
  int v6; // edi
  unsigned int v7; // edx
  FxPkgPnp *m_PkgPnp; // rcx
  unsigned __int16 v10; // r9
  FxDeviceBase *m_DeviceBase; // r8
  unsigned __int64 v12; // rdx
  FxDeviceBase *v13; // rax
  unsigned __int64 v14; // r8
  FxDeviceBase *v15; // r8
  unsigned __int64 v16; // rdx
  void *_a1; // [rsp+28h] [rbp-20h]
  __int64 _a2; // [rsp+30h] [rbp-18h]
  int _a3; // [rsp+38h] [rbp-10h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (FxDevicePwrRequirementMachine *)FxPoolAllocator(
                                          this->m_PkgPnp->m_Globals,
                                          &this->m_PkgPnp->m_Globals->FxPoolFrameworks,
                                          ExDefaultNonPagedPoolType,
                                          0xC8uLL,
                                          this->m_PkgPnp->m_Globals->Tag,
                                          retaddr);
  if ( v2 )
  {
    FxDevicePwrRequirementMachine::FxDevicePwrRequirementMachine(v2, this);
    v5 = v4;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    v6 = -1073741670;
    m_PkgPnp = this->m_PkgPnp;
    v10 = 10;
    _a3 = -1073741670;
    m_DeviceBase = m_PkgPnp->m_DeviceBase;
    v12 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    _a2 = (__int64)m_DeviceBase->m_DeviceObject.m_DeviceObject;
    if ( !m_DeviceBase->m_ObjectSize )
      v12 = 0LL;
    _a1 = (void *)v12;
    goto LABEL_19;
  }
  v6 = FxEventQueue::Initialize(v5, v3);
  if ( v6 < 0 )
  {
    m_PkgPnp = this->m_PkgPnp;
    v10 = 11;
    _a3 = v6;
    v13 = m_PkgPnp->m_DeviceBase;
    v14 = (unsigned __int64)v13 ^ 0xFFFFFFFFFFFFFFF8uLL;
    _a2 = (__int64)v13->m_DeviceObject.m_DeviceObject;
    if ( !v13->m_ObjectSize )
      v14 = 0LL;
    _a1 = (void *)v14;
    goto LABEL_19;
  }
  v6 = FxThreadedEventQueue::Init(v5, this->m_PkgPnp, FxDevicePwrRequirementMachine::_ProcessEventInner, 0LL);
  if ( v6 < 0 )
  {
    m_PkgPnp = this->m_PkgPnp;
    v10 = 12;
    _a3 = v6;
    v15 = m_PkgPnp->m_DeviceBase;
    v16 = (unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL;
    _a2 = (__int64)v15->m_DeviceObject.m_DeviceObject;
    if ( !v15->m_ObjectSize )
      v16 = 0LL;
    _a1 = (void *)v16;
LABEL_19:
    WPP_IFR_SF_qid(m_PkgPnp->m_Globals, 2u, 0xCu, v10, WPP_PoxInterface_cpp_Traceguids, _a1, _a2, _a3);
    goto $exit_8;
  }
  this->m_DevicePowerRequirementMachine = v5;
  v6 = 0;
$exit_8:
  if ( v6 < 0 && v5 )
    FxWakeInterruptMachine::`scalar deleting destructor'(v5, v7);
  return (unsigned int)v6;
}
