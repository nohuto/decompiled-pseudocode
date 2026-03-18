/*
 * XREFs of ?CommitPowerFrameworkSettings@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_POX_SETTINGS@@@Z @ 0x1C002F144
 * Callers:
 *     ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1C0029588 (-AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z.c)
 * Callees:
 *     ?UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA?AW4IdleTimeoutStatusUpdateResult@1@W4IdleTimeoutStatusFlag@1@@Z @ 0x1C002F1B8 (-UpdateIdleTimeoutStatus@IdleTimeoutManagement@@AEAA-AW4IdleTimeoutStatusUpdateResult@1@W4IdleTi.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall IdleTimeoutManagement::CommitPowerFrameworkSettings(
        IdleTimeoutManagement *this,
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _POX_SETTINGS *PoxSettings)
{
  char v5; // si
  void (__fastcall *ComponentIdleConditionCallback)(void *, unsigned int); // r10
  IdleTimeoutManagement::IdleTimeoutStatusUpdateResult updated; // edx
  int v8; // ebx
  unsigned __int16 v10; // r9
  const void *_a1; // rcx
  __int32 v12; // edx
  __int32 v13; // edx

  v5 = 0;
  ComponentIdleConditionCallback = this[-5].m_PoxSettings[1].ComponentIdleConditionCallback;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_PoxSettings, (signed __int64)PoxSettings, 0LL) )
  {
    v10 = 14;
  }
  else
  {
    v5 = 1;
    updated = IdleTimeoutManagement::UpdateIdleTimeoutStatus(this, IdleTimeoutPoxSettingsSpecified);
    if ( updated == IdleTimeoutStatusFlagsUpdated )
    {
      v8 = 0;
      goto $exit_10;
    }
    v12 = updated - 1;
    if ( !v12 )
      goto LABEL_15;
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        v10 = 16;
        goto LABEL_8;
      }
LABEL_15:
      v8 = -1073741595;
      goto $exit_10;
    }
    v10 = 15;
  }
LABEL_8:
  v8 = -1073741808;
  _a1 = (const void *)((unsigned __int64)ComponentIdleConditionCallback ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !*((_WORD *)ComponentIdleConditionCallback + 5) )
    _a1 = 0LL;
  WPP_IFR_SF_qid(
    DriverGlobals,
    2u,
    0xCu,
    v10,
    WPP_PowerPolicyStateMachine_cpp_Traceguids,
    _a1,
    *((_QWORD *)ComponentIdleConditionCallback + 18),
    -1073741808);
  FxVerifierDbgBreakPoint(DriverGlobals);
$exit_10:
  if ( v8 < 0 && v5 )
    this->m_PoxSettings = 0LL;
  return (unsigned int)v8;
}
