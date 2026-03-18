/*
 * XREFs of ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x1C0012350
 * Callers:
 *     imp_WdfIoResourceListRemove @ 0x1C00110E0 (imp_WdfIoResourceListRemove.c)
 *     imp_WdfCmResourceListRemove @ 0x1C0083560 (imp_WdfCmResourceListRemove.c)
 *     imp_WdfIoResourceRequirementsListRemove @ 0x1C00839F0 (imp_WdfIoResourceRequirementsListRemove.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C0012038 (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x1C001216C (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

unsigned __int8 __fastcall FxResourceCollection::RemoveAndDelete(
        FxResourceCollection *this,
        unsigned int Index,
        unsigned __int8 a3)
{
  FxObject *m_Object; // rbx
  FxCollectionEntry *Entry; // rax
  unsigned __int8 v7; // r8
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS **p_m_Globals; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // rdi
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  if ( (this->m_AccessFlags & 2) != 0 )
  {
    m_Object = 0LL;
    FxNonPagedObject::Lock(this, &irql, a3);
    Entry = (FxCollectionEntry *)FxCollectionInternal::FindEntry(&this->FxCollectionInternal, Index);
    if ( Entry )
    {
      this->m_Changed = 1;
      m_Object = Entry->m_Object;
      FxCollectionInternal::RemoveEntry(&this->FxCollectionInternal, Entry);
    }
    FxNonPagedObject::Unlock(this, irql, v7);
    if ( m_Object )
    {
      m_Object->DeleteObject(m_Object);
      return 1;
    }
  }
  else
  {
    m_ObjectSize = this->m_ObjectSize;
    p_m_Globals = &this->m_Globals;
    m_Globals = this->m_Globals;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0xAu, WPP_FxResourceCollection_cpp_Traceguids, _a1, Index);
    FxVerifierDbgBreakPoint(*p_m_Globals);
  }
  return 0;
}
