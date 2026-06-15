/*
 * XREFs of _std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::emplace_Microsoft::WRL::WeakRef_const_&___ptr64__::_1_::catch$138 @ 0x1800679A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x1800657A3 (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXPEAVWeakRef@WRL@Microsoft@@0@Z @ 0x1800984F4 (-_Destroy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAA.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::emplace_Microsoft::WRL::WeakRef_const_____ptr64__::_1_::catch_138(
        __int64 a1,
        __int64 a2)
{
  std::vector<Microsoft::WRL::WeakRef>::_Destroy(a1, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 48));
  std::_Deallocate(*(_QWORD **)(a2 + 72), *(_QWORD *)(a2 + 160), 8uLL);
  throw;
}
