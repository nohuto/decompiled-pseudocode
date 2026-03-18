/*
 * XREFs of ??0FxSystemWorkItem@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0018C98
 * Callers:
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001CE70 (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 * Callees:
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0068068 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D8B00 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

void __fastcall FxSystemWorkItem::FxSystemWorkItem(FxSystemWorkItem *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  _FX_DRIVER_GLOBALS *v4; // rdx
  FxVerifierLock *VerifierLock; // [rsp+30h] [rbp+8h] BYREF

  this->m_Globals = FxDriverGlobals;
  this->__vftable = (FxSystemWorkItem_vtbl *)&FxObject::`vftable';
  *(_DWORD *)&this->m_Type = 4145;
  this->m_SpinLock.m_Lock = 0LL;
  this->m_SpinLock.m_DbgFlagIsInitialized = 1;
  this->m_Refcnt = 1;
  *(_DWORD *)&this->m_ObjectFlags = 0x10000;
  this->m_ParentObject = 0LL;
  this->m_ChildListHead.Blink = &this->m_ChildListHead;
  this->m_ChildListHead.Flink = &this->m_ChildListHead;
  this->m_ChildEntry.Blink = &this->m_ChildEntry;
  this->m_ChildEntry.Flink = &this->m_ChildEntry;
  m_Globals = this->m_Globals;
  this->m_DisposeSingleEntry.Next = 0LL;
  this->m_DeviceBase = 0LL;
  if ( m_Globals->FxVerifierOn )
    FxObject::Vf_VerifyConstruct(this, FxDriverGlobals, 0);
  this->__vftable = (FxSystemWorkItem_vtbl *)FxNonPagedObject::`vftable';
  this->m_NPLock.m_Lock = 0LL;
  this->m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    v4 = this->m_Globals;
    if ( v4->FxVerifierLock )
    {
      VerifierLock = 0LL;
      FxVerifierLock::CreateAndInitialize(&VerifierLock, v4, this);
      *(_QWORD *)&this[-1].m_WorkItemRunningCount = VerifierLock;
    }
  }
  this->__vftable = (FxSystemWorkItem_vtbl *)FxSystemWorkItem::`vftable';
  this->m_WorkItem.m_WorkItem = 0LL;
  this->m_WorkItemCompleted.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&this->m_WorkItemCompleted.m_Event.m_Event, NotificationEvent, 1u);
  this->m_WorkItemCompleted.m_Event.m_DbgFlagIsInitialized = 1;
  this->m_RemoveEvent.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&this->m_RemoveEvent.m_Event.m_Event, SynchronizationEvent, 0);
  this->m_RemoveEvent.m_Event.m_DbgFlagIsInitialized = 1;
  *(_WORD *)&this->m_RunningDown = 0;
  this->m_Callback = 0LL;
  this->m_CallbackArg = 0LL;
  this->m_WorkItemRunningCount = 0;
  this->m_OutStandingWorkItem = 1;
}
