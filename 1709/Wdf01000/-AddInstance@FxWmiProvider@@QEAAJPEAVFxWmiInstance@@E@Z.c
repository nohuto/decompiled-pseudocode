/*
 * XREFs of ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1C003105C
 * Callers:
 *     ?UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C00286B8 (-UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     ?UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C0028700 (-UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     imp_WdfWmiInstanceRegister @ 0x1C0071260 (imp_WdfWmiInstanceRegister.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z @ 0x1C0030EEC (-AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0066834 (WPP_IFR_SF_qid.c)
 *     ?DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z @ 0x1C00726C4 (-DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x1C0072894 (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 */

__int64 __fastcall FxWmiProvider::AddInstance(
        FxWmiProvider *this,
        unsigned __int64 Instance,
        unsigned __int8 NoErrorIfPresent)
{
  unsigned int v6; // eax
  unsigned __int8 v7; // r8
  unsigned __int8 updated; // si
  unsigned int v9; // ebp
  unsigned __int64 _a2; // r10
  const void *_a1; // rsi
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int8 update; // [rsp+78h] [rbp+20h] BYREF

  if ( (this->m_Flags & 4) != 0 )
  {
    _a2 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !this->m_ObjectSize )
      _a2 = 0LL;
    _a1 = (const void *)(Instance ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(Instance + 10) )
      _a1 = 0LL;
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0x12u, 0x12u, WPP_FxWmiProvider_cpp_Traceguids, _a1, _a2, -1073741808);
    return 3221225488LL;
  }
  else
  {
    FxNonPagedObject::Lock(this->m_Parent, &irql, NoErrorIfPresent);
    v6 = FxWmiProvider::AddInstanceLocked(this, Instance, NoErrorIfPresent, &update, AddInstanceToTail);
    updated = update;
    v9 = v6;
    if ( update )
      updated = FxWmiIrpHandler::DeferUpdateLocked(this->m_Parent, irql);
    FxNonPagedObject::Unlock(this->m_Parent, irql, v7);
    if ( updated )
      FxWmiIrpHandler::UpdateGuids(this->m_Parent);
    return v9;
  }
}
