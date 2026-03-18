/*
 * XREFs of ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1C0029588
 * Callers:
 *     imp_WdfDeviceWdmAssignPowerFrameworkSettings @ 0x1C003AD00 (imp_WdfDeviceWdmAssignPowerFrameworkSettings.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     ?CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTINGS@@@Z @ 0x1C002F144 (-CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTI.c)
 *     memmove @ 0x1C003D680 (memmove.c)
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxPkgPnp::AssignPowerFrameworkSettings(
        FxPkgPnp *this,
        _WDF_POWER_FRAMEWORK_SETTINGS *PowerFrameworkSettings)
{
  unsigned int v4; // r14d
  unsigned int v5; // edi
  _PO_FX_COMPONENT_IDLE_STATE *v6; // r15
  _PO_FX_COMPONENT_V1 *Component; // rax
  SIZE_T v8; // rdx
  unsigned int v9; // eax
  int _a3; // ebx
  _PO_FX_COMPONENT_IDLE_STATE *PoolWithTag; // rax
  _POX_SETTINGS *v12; // rbx
  FxDeviceBase *v14; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int16 v18; // r9
  FxDeviceBase *v19; // rdx
  const void *v20; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  const void *v22; // rdx
  unsigned int v23; // eax
  _PO_FX_COMPONENT_V1 *v24; // rcx
  _PO_FX_COMPONENT_V1 *v25; // rax

  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  if ( FxLibraryGlobals.PoxRegisterDevice )
  {
    Component = PowerFrameworkSettings->Component;
    v8 = 0xFFFFFFFFLL;
    if ( Component )
    {
      v4 = -1;
      v17 = 24LL * Component->IdleStateCount;
      if ( v17 <= 0xFFFFFFFF )
        v4 = 24 * Component->IdleStateCount;
      _a3 = v17 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v17 > 0xFFFFFFFF )
      {
        v18 = 81;
        goto LABEL_21;
      }
      v23 = v4 + 32;
      v5 = -1;
      if ( v4 + 32 >= v4 )
        v5 = v4 + 32;
      _a3 = v23 < v4 ? 0xC0000095 : 0;
      if ( v23 < v4 )
      {
        v18 = 82;
        goto LABEL_21;
      }
    }
    v9 = v5 + 64;
    if ( v5 + 64 >= v5 )
      v8 = v9;
    _a3 = v9 < v5 ? 0xC0000095 : 0;
    if ( v9 >= v5 )
    {
      PoolWithTag = (_PO_FX_COMPONENT_IDLE_STATE *)ExAllocatePoolWithTag(
                                                     ExDefaultNonPagedPoolType,
                                                     v8,
                                                     this->m_Globals->Tag);
      v6 = PoolWithTag;
      if ( PoolWithTag )
      {
        v12 = (_POX_SETTINGS *)((char *)PoolWithTag + v5);
        v12->EvtDeviceWdmPostPoFxRegisterDevice = PowerFrameworkSettings->EvtDeviceWdmPostPoFxRegisterDevice;
        v12->EvtDeviceWdmPrePoFxUnregisterDevice = PowerFrameworkSettings->EvtDeviceWdmPrePoFxUnregisterDevice;
        v12->Component = PowerFrameworkSettings->Component;
        v12->ComponentActiveConditionCallback = PowerFrameworkSettings->ComponentActiveConditionCallback;
        v12->ComponentIdleConditionCallback = PowerFrameworkSettings->ComponentIdleConditionCallback;
        v12->ComponentIdleStateCallback = PowerFrameworkSettings->ComponentIdleStateCallback;
        v12->PowerControlCallback = PowerFrameworkSettings->PowerControlCallback;
        v12->PoFxDeviceContext = PowerFrameworkSettings->PoFxDeviceContext;
        if ( PowerFrameworkSettings->Component )
        {
          v24 = (_PO_FX_COMPONENT_V1 *)((char *)PoolWithTag + v4);
          v12->Component = v24;
          v25 = PowerFrameworkSettings->Component;
          v24->Id = v25->Id;
          *(_OWORD *)&v24->IdleStateCount = *(_OWORD *)&v25->IdleStateCount;
          v12->Component->IdleStates = v6;
          memmove(v12->Component->IdleStates, PowerFrameworkSettings->Component->IdleStates, v4);
        }
        _a3 = IdleTimeoutManagement::CommitPowerFrameworkSettings(
                &this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt,
                this->m_Globals,
                v12);
        if ( _a3 >= 0 )
          _a3 = 0;
      }
      else
      {
        _a3 = -1073741670;
        m_DeviceBase = this->m_DeviceBase;
        v22 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_DeviceBase->m_ObjectSize )
          v22 = 0LL;
        WPP_IFR_SF_qid(
          this->m_Globals,
          2u,
          0xCu,
          0x54u,
          WPP_FxPkgPnp_cpp_Traceguids,
          v22,
          (__int64)m_DeviceBase->m_DeviceObject.m_DeviceObject,
          -1073741670);
      }
$exit_5:
      if ( _a3 < 0 )
      {
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
      }
      return (unsigned int)_a3;
    }
    v18 = 83;
LABEL_21:
    v19 = this->m_DeviceBase;
    v20 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v19->m_ObjectSize )
      v20 = 0LL;
    WPP_IFR_SF_qid(
      this->m_Globals,
      2u,
      0xCu,
      v18,
      WPP_FxPkgPnp_cpp_Traceguids,
      v20,
      (__int64)v19->m_DeviceObject.m_DeviceObject,
      _a3);
    goto $exit_5;
  }
  v14 = this->m_DeviceBase;
  m_Globals = this->m_Globals;
  _a1 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v14->m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0x50u, WPP_FxPkgPnp_cpp_Traceguids, _a1, v14->m_DeviceObject.m_DeviceObject);
  return 0LL;
}
