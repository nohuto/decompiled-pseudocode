/*
 * XREFs of ??1FxWorkItem@@UEAA@XZ @ 0x1C001FB8C
 * Callers:
 *     ??_EFxWorkItem@@UEAAPEAXI@Z @ 0x1C001F7D0 (--_EFxWorkItem@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0017EC8 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?Free@MxWorkItem@@QEAAXXZ @ 0x1C00302F8 (-Free@MxWorkItem@@QEAAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxWorkItem::~FxWorkItem(FxWorkItem *this, unsigned int a2, unsigned int a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxObject *m_Object; // rcx
  const void *_a1; // rdx

  m_Globals = this->m_Globals;
  this->__vftable = (FxWorkItem_vtbl *)FxWorkItem::`vftable';
  if ( !this->m_RunningDown && this->m_Callback )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xAu, WPP_FxWorkItem_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  m_Object = this->m_Object;
  if ( m_Object )
  {
    m_Object->Release(m_Object, this, 91, "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp");
    this->m_Object = 0LL;
  }
  if ( this->m_WorkItem.m_WorkItem )
    MxWorkItem::Free(&this->m_WorkItem);
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
}
