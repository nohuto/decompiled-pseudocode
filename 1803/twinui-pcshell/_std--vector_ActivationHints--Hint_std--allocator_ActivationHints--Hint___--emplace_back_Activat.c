/*
 * XREFs of _std::vector_ActivationHints::Hint_std::allocator_ActivationHints::Hint___::emplace_back_ActivationHints::Hint__::_1_::catch$99 @ 0x1802B0C67
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 *     ??$destroy@UHint@ActivationHints@@@?$_Default_allocator_traits@V?$allocator@UHint@ActivationHints@@@std@@@std@@SAXAEAV?$allocator@UHint@ActivationHints@@@1@QEAUHint@ActivationHints@@@Z @ 0x1802B0AB8 (--$destroy@UHint@ActivationHints@@@-$_Default_allocator_traits@V-$allocator@UHint@ActivationHint.c)
 */

void __fastcall __noreturn std::vector_ActivationHints::Hint_std::allocator_ActivationHints::Hint___::emplace_back_ActivationHints::Hint__::_1_::catch_99(
        __int64 a1,
        __int64 a2)
{
  std::_Default_allocator_traits<std::allocator<ActivationHints::Hint>>::destroy<ActivationHints::Hint>(
    a1,
    *(_QWORD *)(a2 + 136) + 48LL * *(_QWORD *)(a2 + 128));
  std::_Deallocate(*(char **)(a2 + 136), *(_QWORD *)(a2 + 112), 0x30uLL);
  throw;
}
