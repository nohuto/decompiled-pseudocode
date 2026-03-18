/*
 * XREFs of ??1FxSystemWorkItem@@UEAA@XZ @ 0x1C007FBD0
 * Callers:
 *     ??_GFxSystemWorkItem@@UEAAPEAXI@Z @ 0x1C007FC50 (--_GFxSystemWorkItem@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0017EC8 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?Free@MxWorkItem@@QEAAXXZ @ 0x1C00302F8 (-Free@MxWorkItem@@QEAAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxSystemWorkItem::~FxSystemWorkItem(FxSystemWorkItem *this, unsigned int a2, unsigned int a3)
{
  bool v3; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rbx

  v3 = this->m_RunningDown == 0;
  this->__vftable = (FxSystemWorkItem_vtbl *)FxSystemWorkItem::`vftable';
  if ( v3 && this->m_WorkItem.m_WorkItem )
  {
    m_Globals = this->m_Globals;
    WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xAu, WPP_FxSystemWorkitem_cpp_Traceguids);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  if ( this->m_WorkItem.m_WorkItem )
    MxWorkItem::Free(&this->m_WorkItem);
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
}
