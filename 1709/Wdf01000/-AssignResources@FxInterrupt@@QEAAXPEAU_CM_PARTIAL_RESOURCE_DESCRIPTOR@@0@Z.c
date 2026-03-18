/*
 * XREFs of ?AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C0035860
 * Callers:
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C0029CC0 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     ?Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0035C28 (-Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_ddLLdxDD @ 0x1C0035EC0 (WPP_IFR_SF_ddLLdxDD.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxInterrupt::AssignResources(
        FxInterrupt *this,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmDescRaw,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmDescTrans)
{
  _KINTERRUPT_MODE v6; // edx
  bool v7; // zf
  unsigned __int8 Class; // cl
  __int16 v9; // cx
  unsigned __int8 v10; // al
  unsigned __int8 MessageSignaled; // cl
  __int64 v12; // rdx
  unsigned __int16 v13; // r9
  const _GUID *v14; // [rsp+20h] [rbp-58h]

  if ( CmDescTrans->u.MessageInterrupt.Raw.MessageCount && !FxLibraryGlobals.ProcessorGroupSupport )
    FxVerifierDbgBreakPoint(this->m_Globals);
  this->m_InterruptInfo.Group = CmDescTrans->u.MessageInterrupt.Raw.MessageCount;
  this->m_InterruptInfo.TargetProcessorSet = CmDescTrans->u.Interrupt.Affinity;
  this->m_InterruptInfo.ShareDisposition = CmDescTrans->ShareDisposition;
  v6 = CmDescTrans->Flags & 1;
  v7 = this->m_PassiveHandling == 0;
  this->m_InterruptInfo.Mode = v6;
  Class = CmDescTrans->u.Connection.Class;
  if ( !v7 )
    Class = 0;
  this->m_InterruptInfo.Irql = Class;
  v9 = CmDescTrans->Flags & 2;
  this->m_InterruptInfo.MessageSignaled = v9 != 0;
  if ( v6 != Latched || (v10 = 1, v9) )
    v10 = 0;
  MessageSignaled = this->m_InterruptInfo.MessageSignaled;
  this->m_IsEdgeTriggeredNonMsiInterrupt = v10;
  if ( MessageSignaled && CmDescRaw->u.MessageInterrupt.Raw.MessageCount > 1u )
  {
    v12 = 8LL;
    this->m_InterruptInfo.Vector = CmDescTrans->u.Generic.Start.HighPart + this->m_InterruptInfo.MessageNumber;
  }
  else
  {
    this->m_InterruptInfo.Vector = CmDescTrans->u.Interrupt.Vector;
    if ( MessageSignaled )
    {
      v12 = 4LL;
    }
    else
    {
      v12 = 1LL;
      if ( (CmDescTrans->Flags & 1) != 0 )
        v12 = 2LL;
    }
  }
  ((void (__fastcall *)(FxDeviceBase *, __int64, __int64, __int64))this->m_DeviceBase->SetDeviceTelemetryInfoFlags)(
    this->m_DeviceBase,
    v12,
    1LL,
    2LL);
  if ( this->m_PassiveHandling )
    this->m_DeviceBase->SetDeviceTelemetryInfoFlags(this->m_DeviceBase, DeviceInfoPassiveLevelInterrupt);
  this->m_CmTranslatedResource = CmDescTrans;
  WPP_IFR_SF_ddLLdxDD(
    this->m_Globals,
    this->m_InterruptInfo.Group,
    this->m_InterruptInfo.MessageSignaled,
    v13,
    v14,
    this->m_InterruptInfo.MessageSignaled,
    this->m_InterruptInfo.MessageNumber,
    this->m_Policy,
    this->m_Priority,
    this->m_InterruptInfo.Group,
    this->m_InterruptInfo.TargetProcessorSet,
    this->m_InterruptInfo.Irql,
    this->m_InterruptInfo.Vector);
}
