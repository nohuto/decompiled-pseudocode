/*
 * XREFs of ??$destroy@V?$shared_ptr@UKBViewInfo@@@std@@@?$_Wrap_alloc@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@QEAAXPEAV?$shared_ptr@UKBViewInfo@@@1@@Z @ 0x1800EC144
 * Callers:
 *     _std::vector_std::shared_ptr_PeoplePaneViewInfo__std::allocator_std::shared_ptr_PeoplePaneViewInfo_____::emplace_back_std::shared_ptr_PeoplePaneViewInfo__const_&___ptr64__::_1_::catch$73 @ 0x1801EC9F9 (_std--vector_std--shared_ptr_PeoplePaneViewInfo__std--allocator_std--shared_ptr_PeoplePaneViewIn.c)
 *     _std::vector_std::shared_ptr_PeoplePaneViewInfo__std::allocator_std::shared_ptr_PeoplePaneViewInfo_____::emplace_back_std::shared_ptr_PeoplePaneViewInfo____::_1_::catch$77 @ 0x1801EDFE7 (_std--vector_std--shared_ptr_PeoplePaneViewInfo__std--allocator_std--shared_ptr_Peo_ea_1801EDFE7.c)
 *     _std::vector_std::shared_ptr_KBViewInfo__std::allocator_std::shared_ptr_KBViewInfo_____::emplace_back_std::shared_ptr_KBViewInfo____::_1_::catch$77 @ 0x1801F670C (_std--vector_std--shared_ptr_KBViewInfo__std--allocator_std--shared_ptr_KBViewInfo_____--emplace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Wrap_alloc<std::allocator<std::shared_ptr<KBViewInfo>>>::destroy<std::shared_ptr<KBViewInfo>>(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int32 *v2; // rbx
  __int64 result; // rax

  v2 = *(volatile signed __int32 **)(a2 + 8);
  if ( v2 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      result = (unsigned int)_InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  return result;
}
