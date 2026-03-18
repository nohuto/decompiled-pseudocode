/*
 * XREFs of ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0035AC0
 * Callers:
 *     ?Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0035C28 (-Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C00182E4 (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     ?_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z @ 0x1C0018ADC (-_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C0018EB0 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C001FC20 (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C0020270 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     memset @ 0x1C003D9C0 (memset.c)
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxInterrupt::InitializeWorker(
        FxInterrupt *this,
        FxObject *Parent,
        _WDF_INTERRUPT_CONFIG *Configuration)
{
  unsigned __int16 m_Type; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  _WDF_TRI_STATE ReportInactiveOnPowerDown; // ecx
  unsigned __int8 PassiveHandling; // al
  WDFSPINLOCK__ *SpinLock; // rdx
  unsigned __int64 *p_m_Lock; // rax
  FxDeviceBase *v12; // rax
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int8 v14; // r9
  __int64 result; // rax
  WDFWAITLOCK__ *v16; // rdx
  int v17; // eax
  unsigned int v18; // esi
  int v19; // eax
  unsigned int v20; // ebx
  unsigned __int16 m_ObjectSize; // ax
  const void *v22; // rsi
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+40h] [rbp-40h] BYREF
  WDFWAITLOCK__ *waitLock; // [rsp+C0h] [rbp+40h] BYREF
  IFxHasCallbacks *callbacks; // [rsp+C8h] [rbp+48h] BYREF
  FxObject *tmpObject; // [rsp+D0h] [rbp+50h] BYREF

  m_Type = Parent->m_Type;
  m_Globals = this->m_Globals;
  this->m_EvtInterruptIsr = Configuration->EvtInterruptIsr;
  this->m_EvtInterruptDpc = Configuration->EvtInterruptDpc;
  this->m_EvtInterruptWorkItem = Configuration->EvtInterruptWorkItem;
  ReportInactiveOnPowerDown = Configuration->ReportInactiveOnPowerDown;
  if ( ReportInactiveOnPowerDown )
  {
    if ( ReportInactiveOnPowerDown == WdfTrue )
      this->m_UseSoftDisconnect = 1;
  }
  else
  {
    this->m_UseSoftDisconnect = 0;
  }
  PassiveHandling = Configuration->PassiveHandling;
  this->m_PassiveHandling = PassiveHandling;
  SpinLock = Configuration->SpinLock;
  if ( SpinLock )
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)SpinLock, 0x1024u, (void **)&waitLock);
    *((_BYTE *)waitLock + 121) = 1;
    p_m_Lock = (unsigned __int64 *)(waitLock + 28);
    goto LABEL_7;
  }
  if ( !PassiveHandling )
  {
    p_m_Lock = &this->m_BuiltInSpinLock.m_Lock;
LABEL_7:
    this->m_SpinLock = p_m_Lock;
  }
  v12 = FxDeviceBase::_SearchForDevice((unsigned __int64)Parent, &callbacks);
  m_DeviceBase = this->m_DeviceBase;
  if ( !m_DeviceBase || v12 != m_DeviceBase || (unsigned __int16)(m_Type - 4098) > 1u )
  {
    m_ObjectSize = Parent->m_ObjectSize;
    v22 = (const void *)((unsigned __int64)Parent ^ 0xFFFFFFFFFFFFFFF8uLL);
    v20 = -1073741811;
    if ( !m_ObjectSize )
      v22 = 0LL;
    WPP_IFR_SF_qid(
      m_Globals,
      2u,
      0xCu,
      0x12u,
      WPP_InterruptObject_cpp_Traceguids,
      v22,
      (__int64)Configuration,
      -1073741811);
    return v20;
  }
  if ( Configuration->EvtInterruptWorkItem )
  {
    v14 = 1;
  }
  else if ( Configuration->EvtInterruptDpc )
  {
    v14 = 0;
  }
  else
  {
    v14 = this->m_PassiveHandling != 0;
  }
  result = FxObject::_GetEffectiveLock(
             Parent,
             callbacks,
             Configuration->AutomaticSerialization,
             v14,
             &this->m_CallbackLock,
             &tmpObject);
  if ( (int)result >= 0 )
  {
    if ( m_Type == 4099 )
      FxObject::MarkNoDeleteDDI(Parent, ObjectLock);
    if ( this->m_PassiveHandling )
    {
      v16 = Configuration->WaitLock;
      if ( v16 )
        FxObjectHandleGetPtr(this->m_Globals, (unsigned __int64)v16, 0x1023u, (void **)&this->m_WaitLock);
      if ( !this->m_WaitLock )
      {
        waitLock = 0LL;
        memset(&attributes, 0, sizeof(attributes));
        attributes.Size = 56;
        attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
        attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
        v17 = FxWaitLock::_Create(m_Globals, &attributes, 0LL, 0, &waitLock);
        v18 = v17;
        if ( v17 < 0 )
        {
          WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0x13u, WPP_InterruptObject_cpp_Traceguids, v17);
          return v18;
        }
        FxObjectHandleGetPtr(m_Globals, (unsigned __int64)waitLock, 0x1023u, (void **)&this->m_WaitLock);
        this->m_DisposeWaitLock = 1;
      }
    }
    if ( this->m_EvtInterruptWorkItem || FxLibraryGlobals.IsUserModeFramework && this->m_EvtInterruptDpc )
    {
      v19 = FxSystemWorkItem::_Create(
              m_Globals,
              this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
              &this->m_SystemWorkItem);
      v20 = v19;
      if ( v19 < 0 )
      {
        WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0x14u, WPP_InterruptObject_cpp_Traceguids, v19);
        return v20;
      }
    }
    return 0LL;
  }
  return result;
}
