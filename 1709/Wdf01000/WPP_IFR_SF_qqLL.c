/*
 * XREFs of WPP_IFR_SF_qqLL @ 0x1C0027BC0
 * Callers:
 *     imp_WdfRequestSend @ 0x1C0004650 (imp_WdfRequestSend.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0008980 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009360 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C000A490 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C000A590 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C000B110 (--1FxObject@@UEAA@XZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000B530 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C000CC40 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001FE98 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     FxIoTargetSendIoctl @ 0x1C0024710 (FxIoTargetSendIoctl.c)
 *     imp_WdfRegistryOpenKey @ 0x1C0024DB0 (imp_WdfRegistryOpenKey.c)
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1C0025CC0 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x1C0025F30 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0027E80 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C00280C0 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00290D0 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C00296C0 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C002A2B0 (-PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C002C790 (-NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z.c)
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C002CB30 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C002F4C8 (-ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C002F670 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C002FBFC (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     imp_WdfRegistryClose @ 0x1C0032140 (imp_WdfRegistryClose.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003C99C (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C00A31F8 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 *     ?ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00A3368 (-ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C000CF30 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C006EA34 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqLL(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int flags,
        unsigned __int16 id,
        const _GUID *traceGuid,
        const void *_a1,
        const void *_a2,
        unsigned int _a3,
        unsigned int _a4)
{
  unsigned __int64 v11; // r11
  unsigned __int16 v14; // r8
  int v15; // eax
  unsigned __int64 v16; // r11

  v11 = (unsigned __int64)flags >> 16;
  v14 = flags - 1;
  v15 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * v11 + (v14 >> 5));
  if ( _bittest(&v15, v14 & 0x1F) )
  {
    v16 = v11 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v16 + 1) >= level )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v16),
        0x2Bu,
        traceGuid,
        id,
        &_a1,
        8LL,
        &_a2,
        8LL,
        &_a3,
        4LL,
        &_a4,
        4LL,
        0LL);
  }
  FxIFR(globals, level, flags, traceGuid, id, &_a1, 8LL, &_a2, 8LL, &_a3, 4LL, &_a4, 4LL, 0LL);
}
