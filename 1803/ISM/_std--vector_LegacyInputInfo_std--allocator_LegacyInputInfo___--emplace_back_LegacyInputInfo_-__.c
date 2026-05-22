/*
 * XREFs of _std::vector_LegacyInputInfo_std::allocator_LegacyInputInfo___::emplace_back_LegacyInputInfo_&___ptr64__::_1_::catch$103 @ 0x1800E6AAB
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@ULegacyInputInfo@@@std@@QEAAXQEAULegacyInputInfo@@_K@Z @ 0x18005E980 (-deallocate@-$allocator@ULegacyInputInfo@@@std@@QEAAXQEAULegacyInputInfo@@_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_LegacyInputInfo_std::allocator_LegacyInputInfo___::emplace_back_LegacyInputInfo_____ptr64__::_1_::catch_103(
        __int64 a1,
        __int64 a2)
{
  std::allocator<LegacyInputInfo>::deallocate(a1, *(_QWORD *)(a2 + 112), *(_QWORD *)(a2 + 128));
  throw;
}
