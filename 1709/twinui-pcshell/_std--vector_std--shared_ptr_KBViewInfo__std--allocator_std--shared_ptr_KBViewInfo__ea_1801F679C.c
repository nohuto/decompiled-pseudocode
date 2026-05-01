/*
 * XREFs of _std::vector_std::shared_ptr_KBViewInfo__std::allocator_std::shared_ptr_KBViewInfo_____::emplace_std::shared_ptr_KBViewInfo____::_1_::catch$153 @ 0x1801F679C
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAXPEAUItem@AgileRegistrationList@@_K@Z @ 0x180025980 (-deallocate@-$_Wrap_alloc@V-$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAXPEAUItem@Ag.c)
 *     ?_Destroy@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXPEAV?$shared_ptr@UKBViewInfo@@@2@0@Z @ 0x18019E4AC (-_Destroy@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@@@std.c)
 *     _CxxThrowException_0 @ 0x1801E2E88 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::shared_ptr_KBViewInfo__std::allocator_std::shared_ptr_KBViewInfo_____::emplace_std::shared_ptr_KBViewInfo____::_1_::catch_153(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::vector<std::shared_ptr<KBViewInfo>>::_Destroy(
    a1,
    *(volatile signed __int32 ***)(a2 + 48),
    *(volatile signed __int32 ***)(a2 + 160));
  std::_Wrap_alloc<std::allocator<AgileRegistrationList::Item>>::deallocate(
    v3,
    *(_QWORD **)(a2 + 144),
    *(_QWORD *)(a2 + 56));
  throw;
}
