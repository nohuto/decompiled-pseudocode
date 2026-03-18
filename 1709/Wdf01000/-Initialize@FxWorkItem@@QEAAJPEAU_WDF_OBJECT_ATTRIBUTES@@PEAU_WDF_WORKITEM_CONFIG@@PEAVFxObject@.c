/*
 * XREFs of ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C001FA50
 * Callers:
 *     imp_WdfWorkItemCreate @ 0x1C001F470 (imp_WdfWorkItemCreate.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C001FEF0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C0020270 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003D0A4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?IsPassiveCallbacks@FxObject@@QEAAEE@Z @ 0x1C0082010 (-IsPassiveCallbacks@FxObject@@QEAAEE@Z.c)
 */

int __fastcall FxWorkItem::Initialize(
        FxWorkItem *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _WDF_WORKITEM_CONFIG *Config,
        FxObject *ParentObject,
        WDFWORKITEM__ **WorkItem)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  unsigned int RefCount; // r9d
  FxDeviceBase *v11; // rax
  unsigned __int8 AutomaticSerialization; // al
  IFxHasCallbacks *v13; // rbp
  _FX_DRIVER_GLOBALS *v14; // r12
  unsigned __int8 v15; // dl
  struct _IO_WORKITEM *v16; // rax
  unsigned int v17; // esi
  void **v18; // r8
  void (__fastcall *m_Callback)(WDFWORKITEM__ *); // rcx
  int v21; // ebx
  FxTagTracker *m_Lock; // rcx
  IFxHasCallbacks *pCallbacks; // [rsp+40h] [rbp-48h] BYREF
  int v24; // [rsp+90h] [rbp+8h] BYREF
  char v25; // [rsp+A0h] [rbp+18h] BYREF

  m_Globals = this->m_Globals;
  this->m_Callback = Config->EvtWorkItemFunc;
  RefCount = _InterlockedIncrement(&this->m_Refcnt);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_Callback = this[-1].m_Callback;
    if ( m_Callback )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)m_Callback,
        this,
        178,
        "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp",
        TagAddRef,
        RefCount);
  }
  v11 = FxDeviceBase::_SearchForDevice(ParentObject, &pCallbacks);
  this->m_DeviceBase = v11;
  if ( !v11 )
    return -1073741808;
  AutomaticSerialization = Config->AutomaticSerialization;
  v13 = pCallbacks;
  v14 = ParentObject->m_Globals;
  this->m_CallbackLock = 0LL;
  this->m_CallbackLockObject = 0LL;
  if ( AutomaticSerialization )
  {
    if ( !v13 )
      return -1073741808;
    v13->GetConstraints(v13, (_WDF_EXECUTION_LEVEL *)&v25, (_WDF_SYNCHRONIZATION_SCOPE *)&v24);
    if ( v24 != 4 && v24 != 1 )
    {
      if ( !FxObject::IsPassiveCallbacks(ParentObject, v15) )
      {
        FxVerifierDbgBreakPoint(v14);
        v21 = -1071644148;
        WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0xCu, WPP_FxWorkItem_cpp_Traceguids, Attributes->ParentObject, -1071644148);
        return v21;
      }
      this->m_CallbackLock = v13->GetCallbackLockPtr(v13, &this->m_CallbackLockObject);
    }
  }
  v16 = IoAllocateWorkItem(this->m_DeviceBase->m_DeviceObject.m_DeviceObject);
  this->m_WorkItem.m_WorkItem = v16;
  if ( v16 )
  {
    v17 = _InterlockedIncrement(&ParentObject->m_Refcnt);
    if ( SLOBYTE(ParentObject->m_ObjectFlags) < 0 )
    {
      m_Lock = (FxTagTracker *)ParentObject[-1].m_SpinLock.m_Lock;
      if ( m_Lock )
        FxTagTracker::UpdateTagHistory(
          m_Lock,
          this,
          269,
          "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp",
          TagAddRef,
          v17);
    }
    v18 = (void **)WorkItem;
    this->m_Object = ParentObject;
    return FxObject::Commit(this, Attributes, v18, ParentObject, 1u);
  }
  else
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xDu, WPP_FxWorkItem_cpp_Traceguids, -1073741670);
    return -1073741670;
  }
}
