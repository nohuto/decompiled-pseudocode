/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAXPEAUItem@AgileRegistrationList@@_K@Z @ 0x180025980
 * Callers:
 *     _std::vector_AgileRegistrationList::Item_std::allocator_AgileRegistrationList::Item___::emplace_back_AgileRegistrationList::Item__::_1_::catch$107 @ 0x1801E7716 (_std--vector_AgileRegistrationList--Item_std--allocator_AgileRegistrationList--Item___--emplace_.c)
 *     _std::vector_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64__std::allocator_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64_____::emplace_back_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64____::_1_::catch$107 @ 0x1801EA53A (_std--vector_std--pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr6_ea_1801EA53A.c)
 *     _std::vector_std::shared_ptr_PeoplePaneViewInfo__std::allocator_std::shared_ptr_PeoplePaneViewInfo_____::emplace_back_std::shared_ptr_PeoplePaneViewInfo__const_&___ptr64__::_1_::catch$73 @ 0x1801EC9F9 (_std--vector_std--shared_ptr_PeoplePaneViewInfo__std--allocator_std--shared_ptr_PeoplePaneViewIn.c)
 *     _std::vector_std::shared_ptr_PeoplePaneViewInfo__std::allocator_std::shared_ptr_PeoplePaneViewInfo_____::emplace_back_std::shared_ptr_PeoplePaneViewInfo____::_1_::catch$77 @ 0x1801EDFE7 (_std--vector_std--shared_ptr_PeoplePaneViewInfo__std--allocator_std--shared_ptr_Peo_ea_1801EDFE7.c)
 *     _std::vector_std::shared_ptr_KBViewInfo__std::allocator_std::shared_ptr_KBViewInfo_____::emplace_back_std::shared_ptr_KBViewInfo____::_1_::catch$77 @ 0x1801F670C (_std--vector_std--shared_ptr_KBViewInfo__std--allocator_std--shared_ptr_KBViewInfo_____--emplace.c)
 *     _std::vector_std::shared_ptr_KBViewInfo__std::allocator_std::shared_ptr_KBViewInfo_____::emplace_std::shared_ptr_KBViewInfo____::_1_::catch$153 @ 0x1801F679C (_std--vector_std--shared_ptr_KBViewInfo__std--allocator_std--shared_ptr_KBViewInfo__ea_1801F679C.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<AgileRegistrationList::Item>>::deallocate(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_8;
  if ( 16 * a3 >= 0x1000 )
  {
    if ( ((unsigned __int8)a2 & 0x1F) == 0 )
    {
      v3 = *(a2 - 1);
      if ( v3 < (unsigned __int64)a2 && (unsigned __int64)a2 - v3 - 8 <= 0x1F )
      {
        a2 = (_QWORD *)*(a2 - 1);
        goto LABEL_7;
      }
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(a1);
    JUMPOUT(0x1800259D0LL);
  }
LABEL_7:
  operator delete(a2);
}
