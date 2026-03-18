/*
 * XREFs of ??_GFxRequest@@UEAAPEAXI@Z @ 0x1C0009290
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0003AD0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C000B110 (--1FxObject@@UEAA@XZ.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003C5E4 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003C86C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003D2F4 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

FxRequest *__fastcall FxRequest::`scalar deleting destructor'(FxRequest *this, char a2)
{
  _MDL *m_AllocatedMdl; // rcx
  FxRequestContext *m_RequestContext; // rcx
  _IRP *m_Irp; // rdi
  FxRequestTimer *m_Timer; // rcx
  FxRequest *v8; // rcx
  FxRequestContext *v10; // rcx
  _LIST_ENTRY *Flink; // rcx

  this->__vftable = (FxRequest_vtbl *)FxRequestBase::`vftable';
  m_AllocatedMdl = this->m_AllocatedMdl;
  if ( m_AllocatedMdl )
  {
    if ( this->m_Globals->FxVerifierOn )
      FxMdlFreeDebug(this->m_Globals, m_AllocatedMdl);
    else
      IoFreeMdl(m_AllocatedMdl);
  }
  m_RequestContext = this->m_RequestContext;
  m_Irp = this->m_Irp.m_Irp;
  if ( m_RequestContext )
  {
    if ( m_Irp )
      m_RequestContext->ReleaseAndRestore(m_RequestContext, this);
    v10 = this->m_RequestContext;
    if ( v10 )
      ((void (__fastcall *)(FxRequestContext *, __int64))v10->~FxRequestContext)(v10, 1LL);
  }
  if ( m_Irp && this->m_IrpAllocation == 1 )
    IoFreeIrp(this->m_Irp.m_Irp);
  m_Timer = this->m_Timer;
  if ( m_Timer )
    FxRequestTimer::`scalar deleting destructor'(m_Timer, a2);
  this->__vftable = (FxRequest_vtbl *)FxNonPagedObject::`vftable';
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    Flink = this[-1].m_ForwardProgressList.Flink;
    if ( Flink )
    {
      FxVerifierLock::`scalar deleting destructor'((FxVerifierLock *)Flink, a2);
      this[-1].m_ForwardProgressList.Flink = 0LL;
    }
  }
  this->m_NPLock.m_DbgFlagIsInitialized = 0;
  FxObject::~FxObject(this);
  if ( (a2 & 1) != 0 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      v8 = (FxRequest *)((char *)this - 48);
    else
      v8 = this;
    FxPoolFree(v8);
  }
  return this;
}
