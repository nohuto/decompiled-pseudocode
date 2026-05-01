/*
 * XREFs of _std::vector_std::shared_ptr_KBViewInfo__std::allocator_std::shared_ptr_KBViewInfo_____::emplace_std::shared_ptr_KBViewInfo____::_1_::catch$103 @ 0x18023B7C3
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXPEAV?$shared_ptr@UKBViewInfo@@@2@0@Z @ 0x180244FCC (-_Destroy@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@@@std.c)
 */

void __fastcall __noreturn std::vector_std::shared_ptr_KBViewInfo__std::allocator_std::shared_ptr_KBViewInfo_____::emplace_std::shared_ptr_KBViewInfo____::_1_::catch_103(
        __int64 a1,
        __int64 a2)
{
  std::vector<std::shared_ptr<KBViewInfo>>::_Destroy(a1, *(_QWORD *)(a2 + 160), *(_QWORD *)(a2 + 144));
  std::_Deallocate(*(char **)(a2 + 64), *(_QWORD *)(a2 + 48), 0x10uLL);
  throw;
}
