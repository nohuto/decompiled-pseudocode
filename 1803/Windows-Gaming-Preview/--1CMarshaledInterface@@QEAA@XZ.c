/*
 * XREFs of ??1CMarshaledInterface@@QEAA@XZ @ 0x18002117C
 * Callers:
 *     _Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_::Get_::_1_::dtor$0 @ 0x180044629 (_Windows--Internal--CMarshaledInterfaceResult_Windows--Gaming--Preview--GamesEnumeration--IGameL.c)
 *     _Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_::Get_::_1_::dtor$1 @ 0x180044635 (_Windows--Internal--CMarshaledInterfaceResult_Windows--Gaming--Preview--GamesEnumer_ea_180044635.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMarshaledInterface::~CMarshaledInterface(CMarshaledInterface *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
