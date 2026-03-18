/*
 * XREFs of ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C002C21C
 * Callers:
 *     imp_WdfDeviceAssignS0IdleSettings @ 0x1C0038560 (imp_WdfDeviceAssignS0IdleSettings.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C0028700 (-UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     ?ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C00287C0 (-ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     ?PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA?AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C0028830 (-PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA-AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POW.c)
 *     ?PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z @ 0x1C002899C (-PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z.c)
 *     ?QueryForCapabilities@FxPkgPnp@@IEAAJXZ @ 0x1C0029A90 (-QueryForCapabilities@FxPkgPnp@@IEAAJXZ.c)
 *     ?UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA?AW4IdleTimeoutStatusUpdateResult@1@W4IdleTimeoutStatusFlag@1@@Z @ 0x1C002F1B8 (-UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA-AW4IdleTimeoutStatusUpdateResult@1@W4IdleTi.c)
 *     __security_check_cookie @ 0x1C003B880 (__security_check_cookie.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_sd @ 0x1C0070FB4 (WPP_IFR_SF_sd.c)
 *     WPP_IFR_SF_DD @ 0x1C00761D8 (WPP_IFR_SF_DD.c)
 *     WPP_IFR_SF_LLd @ 0x1C009EC44 (WPP_IFR_SF_LLd.c)
 *     ?InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ @ 0x1C00A0368 (-InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ.c)
 */

// local variable allocation has failed, the output may be wrong!
int __fastcall FxPkgPnp::PowerPolicySetS0IdleSettings(
        FxPkgPnp *this,
        _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS *Settings,
        unsigned int a3)
{
  _WDF_TRI_STATE v3; // eax
  _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS *v5; // rsi
  unsigned __int8 v6; // r12
  char v7; // di
  int v8; // r14d
  unsigned __int8 Set; // r15
  _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES IdleCaps; // eax
  signed int _a2; // eax
  unsigned int IdleTimeout; // r13d
  _WDF_POWER_POLICY_S0_IDLE_USER_CONTROL UserControlOfIdleSettings; // eax
  int result; // eax
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES v16; // eax
  int ExcludeD3Cold; // ecx
  void (__fastcall *SetD3ColdSupport)(void *, unsigned __int8); // rax
  int DxState; // eax
  int PowerUpIdleDeviceOnSystemWake; // ecx
  _FX_DRIVER_GLOBALS *v21; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  IdleTimeoutManagement::IdleTimeoutStatusUpdateResult updated; // eax
  __int64 v24; // r10
  int inited; // eax
  int v26; // r15d
  __int32 v27; // eax
  __int32 v28; // eax
  int v29; // ebx
  const void *v30; // rdx
  bool v31; // zf
  unsigned __int16 v32; // r9
  const char *v33; // rcx
  unsigned __int16 v34; // r9
  __int64 i; // rcx
  const _GUID *traceGuid; // [rsp+28h] [rbp-89h]
  __int64 globals; // [rsp+38h] [rbp-79h]
  int enabled; // [rsp+40h] [rbp-71h]
  _UNICODE_STRING valueName; // [rsp+48h] [rbp-69h] BYREF
  _BYTE *v40; // [rsp+58h] [rbp-59h]
  _UNICODE_STRING ValueName; // [rsp+60h] [rbp-51h] BYREF
  _BYTE v42[96]; // [rsp+70h] [rbp-41h] OVERLAPPED BYREF
  wchar_t v43; // [rsp+D0h] [rbp+1Fh]

  v3 = Settings->Enabled;
  LOBYTE(valueName.MaximumLength) = 0;
  v5 = Settings;
  v6 = 0;
  v7 = 1;
  v8 = 4;
  if ( v3 == WdfTrue )
  {
    LOBYTE(valueName.Length) = 1;
  }
  else if ( v3 == WdfUseDefault )
  {
    LOBYTE(valueName.Length) = 1;
    if ( KeGetCurrentIrql() )
    {
      WPP_IFR_SF_(this->m_Globals, 3u, 0xCu, 0x2Du, WPP_FxPkgPnp_cpp_Traceguids);
    }
    else
    {
      v43 = aWdfdefaultidle[28];
      *(_OWORD *)&v42[40] = *(_OWORD *)L"WdfDefaultIdleInWorkingState";
      LODWORD(valueName.Buffer) = 3801144;
      *(_OWORD *)&v42[56] = *(_OWORD *)L"ltIdleInWorkingState";
      v40 = &v42[40];
      *(_OWORD *)&v42[72] = *(_OWORD *)L"WorkingState";
      *(_QWORD *)&v42[88] = *(_QWORD *)L"tate";
      FxPkgPnp::ReadRegistryS0Idle(this, (const _UNICODE_STRING *)&valueName.Buffer, (bool *)&valueName);
    }
  }
  else
  {
    LOBYTE(valueName.Length) = 0;
  }
  Set = this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Set;
  HIBYTE(valueName.Length) = Set;
  if ( !this->m_CapsQueried && !KeGetCurrentIrql() )
  {
    result = FxPkgPnp::QueryForCapabilities(this);
    if ( result < 0 )
      return result;
  }
  IdleCaps = v5->IdleCaps;
  if ( IdleCaps == IdleCannotWakeFromS0 )
  {
    DxState = v5->DxState;
    LOBYTE(valueName.MaximumLength) = 0;
    if ( DxState == 5 )
      DxState = 4;
    v8 = DxState;
    goto LABEL_11;
  }
  if ( (unsigned int)(IdleCaps - 2) > 1 )
    goto LABEL_11;
  v8 = v5->DxState;
  LOBYTE(valueName.MaximumLength) = 1;
  _a2 = FxPkgPnp::PowerPolicyGetDeviceDeepestDeviceWakeState(this, 1u);
  if ( v8 == 5 )
  {
    v8 = _a2;
    if ( (unsigned int)(_a2 - 2) > 2 )
    {
LABEL_68:
      WPP_IFR_SF_DD(
        this->m_Globals,
        (unsigned __int8)Settings,
        0xCu,
        0x2Eu,
        WPP_FxPkgPnp_cpp_Traceguids,
        _a2,
        -1073741101);
      return -1073741101;
    }
    if ( _a2 > 3 )
    {
      if ( v5->IdleCaps != IdleUsbSelectiveSuspend )
        goto LABEL_11;
      goto LABEL_68;
    }
    goto LABEL_58;
  }
  if ( v8 > _a2 )
  {
    WPP_IFR_SF_LLd(this->m_Globals, (unsigned __int8)Settings, a3, 0x2Fu, traceGuid, v8, _a2, enabled);
    return -1073741101;
  }
  if ( v8 <= 3 )
  {
LABEL_58:
    if ( v5->IdleCaps == IdleUsbSelectiveSuspend )
    {
      inited = FxPowerPolicyMachine::InitUsbSS(&this->m_PowerPolicyMachine);
      v26 = inited;
      if ( inited < 0 )
      {
        WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x31u, WPP_FxPkgPnp_cpp_Traceguids, inited);
        return v26;
      }
      Set = HIBYTE(valueName.Length);
    }
    goto LABEL_11;
  }
  if ( v5->IdleCaps == IdleUsbSelectiveSuspend )
  {
    WPP_IFR_SF_DD(this->m_Globals, (unsigned __int8)Settings, 0xCu, 0x30u, WPP_FxPkgPnp_cpp_Traceguids, v8, -1073741101);
    return -1073741101;
  }
LABEL_11:
  IdleTimeout = v5->IdleTimeout;
  if ( !IdleTimeout )
    IdleTimeout = 5000;
  UserControlOfIdleSettings = v5->UserControlOfIdleSettings;
  if ( UserControlOfIdleSettings == IdleAllowUserControl )
  {
    result = FxPkgPnp::UpdateWmiInstanceForS0Idle(this, AddInstance);
    if ( result < 0 )
      return result;
    if ( v5->Enabled == WdfUseDefault )
    {
      if ( Set || KeGetCurrentIrql() )
      {
        LOBYTE(valueName.Length) = this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Enabled;
      }
      else
      {
        ValueName.Buffer = (wchar_t *)v42;
        wcscpy((wchar_t *)v42, L"IdleInWorkingState");
        *(_DWORD *)&ValueName.Length = 2490404;
        FxPkgPnp::ReadRegistryS0Idle(this, &ValueName, (bool *)&valueName);
      }
    }
    v6 = 1;
  }
  else if ( UserControlOfIdleSettings == IdleDoNotAllowUserControl )
  {
    v6 = 0;
    FxPkgPnp::UpdateWmiInstanceForS0Idle(this, RemoveInstance);
  }
  if ( !Set )
  {
    this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Set = 1;
    this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Overridable = v6;
  }
  if ( v5->Size <= 0x1C )
    goto LABEL_22;
  if ( !Set )
  {
    if ( (unsigned int)(v5->IdleTimeoutType - 1) > 1 )
      goto LABEL_22;
    m_Globals = this->m_Globals;
    if ( !FxLibraryGlobals.PoxRegisterDevice
      || (updated = IdleTimeoutManagement::UpdateIdleTimeoutStatus(
                      &this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt,
                      IdleTimeoutSystemManaged)) == IdleTimeoutStatusFlagsUpdated
      || (v27 = updated - 1) == 0 )
    {
      Set = HIBYTE(valueName.Length);
      goto LABEL_22;
    }
    v28 = v27 - 1;
    if ( v28 )
    {
      if ( v28 != 1 )
        return -1073741595;
      v29 = -1073741808;
      v30 = (const void *)(v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v31 = *(_WORD *)(v24 + 10) == 0;
      v32 = 11;
      globals = *(_QWORD *)(v24 + 144);
    }
    else
    {
      v29 = -1073741808;
      v30 = (const void *)(v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v31 = *(_WORD *)(v24 + 10) == 0;
      v32 = 10;
      globals = *(_QWORD *)(v24 + 144);
    }
    if ( v31 )
      v30 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, v32, WPP_PowerPolicyStateMachine_cpp_Traceguids, v30, globals, -1073741808);
    FxVerifierDbgBreakPoint(m_Globals);
    return v29;
  }
  Settings = (_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS *)(this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2);
  if ( (unsigned int)(v5->IdleTimeoutType - 1) <= 1 != ((this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0)
    && FxLibraryGlobals.PoxRegisterDevice )
  {
    v33 = "should";
    if ( !(_DWORD)Settings )
      v33 = "should not";
    WPP_IFR_SF_sd(
      this->m_Globals,
      this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2,
      0xCu,
      0x32u,
      WPP_FxPkgPnp_cpp_Traceguids,
      v33,
      -1073741808);
    FxVerifierDbgBreakPoint(this->m_Globals);
    return -1073741808;
  }
LABEL_22:
  if ( v5->IdleCaps == IdleCannotWakeFromS0 )
  {
    if ( v5->Size <= 0x18 )
      PowerUpIdleDeviceOnSystemWake = 2;
    else
      PowerUpIdleDeviceOnSystemWake = v5->PowerUpIdleDeviceOnSystemWake;
    if ( PowerUpIdleDeviceOnSystemWake )
    {
      if ( PowerUpIdleDeviceOnSystemWake != 1 )
        goto LABEL_23;
      this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.PowerUpIdleDeviceOnSystemWake = 1;
      v21 = this->m_Globals;
      if ( !v21->FxVerboseOn )
        goto LABEL_23;
      v34 = 51;
    }
    else
    {
      this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.PowerUpIdleDeviceOnSystemWake = 0;
      v21 = this->m_Globals;
      if ( !v21->FxVerboseOn )
        goto LABEL_23;
      v34 = 52;
    }
    WPP_IFR_SF_(v21, 5u, 0xCu, v34, WPP_FxPkgPnp_cpp_Traceguids);
  }
LABEL_23:
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( !m_Owner->m_IdleSettings.UsbSSCapabilityKnown )
  {
    v16 = v5->IdleCaps;
    if ( v16 == IdleUsbSelectiveSuspend )
    {
      for ( i = 0LL; i < 2; ++i )
        *(&this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.UsbSSCapable + i) = 1;
    }
    else if ( v16 == IdleCanWakeFromS0 )
    {
      m_Owner->m_IdleSettings.UsbSSCapabilityKnown = 1;
    }
  }
  this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.WakeFromS0Capable = valueName.MaximumLength;
  this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.DxState = v8;
  if ( (this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
  {
    if ( !Set )
      this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine.m_PowerTimeout = (_LARGE_INTEGER)-1LL;
    if ( v5->IdleTimeoutType == SystemManagedIdleTimeoutWithHint )
      this->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_NextIdleTimeoutHint = IdleTimeout;
  }
  else
  {
    this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine.m_PowerTimeout = (_LARGE_INTEGER)(-10000LL * IdleTimeout);
  }
  if ( v5->Size > 0x1C )
  {
    ExcludeD3Cold = v5->ExcludeD3Cold;
    if ( ExcludeD3Cold != 2 )
    {
      if ( ExcludeD3Cold )
      {
        if ( ExcludeD3Cold != 1 )
          WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x35u, WPP_FxPkgPnp_cpp_Traceguids, ExcludeD3Cold);
        v7 = 0;
      }
      SetD3ColdSupport = this->m_D3ColdInterface.SetD3ColdSupport;
      if ( SetD3ColdSupport )
      {
        LOBYTE(Settings) = v7;
        SetD3ColdSupport(this->m_D3ColdInterface.Context, (unsigned __int8)Settings);
      }
    }
  }
  FxPkgPnp::PowerPolicySetS0IdleState(this, valueName.Length, a3);
  return 0;
}
