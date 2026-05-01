/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@PEAV?$shared_ptr@UPeoplePaneViewInfo@@@2@@std@@YAXPEAV?$shared_ptr@UPeoplePaneViewInfo@@@0@0AEAU?$_Wrap_alloc@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@0@@Z @ 0x1800ECFE8
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked1_std::shared_ptr_PeoplePaneViewInfo______ptr64_std::shared_ptr_PeoplePaneViewInfo______ptr64_std::allocator_std::shared_ptr_PeoplePaneViewInfo______::_1_::catch$6 @ 0x18019DED6 (_std--_Uninitialized_move_al_unchecked1_std--shared_ptr_PeoplePaneViewInfo______ptr64_std--share.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall std::_Destroy_range<std::allocator<std::shared_ptr<PeoplePaneViewInfo>>,std::shared_ptr<PeoplePaneViewInfo> *>(
        volatile signed __int32 **a1,
        volatile signed __int32 **a2)
{
  volatile signed __int32 **v3; // rdi
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 **result; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 1;
    do
    {
      v4 = *v3;
      if ( *v3 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
      v3 += 2;
      result = v3 - 1;
    }
    while ( v3 - 1 != a2 );
  }
  return result;
}
