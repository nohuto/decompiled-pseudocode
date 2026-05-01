/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_ActivationHints::Hint_____ptr64_ActivationHints::Hint_____ptr64_std::allocator_ActivationHints::Hint____::_1_::catch$19 @ 0x1802B0A91
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@UHint@ActivationHints@@@std@@@std@@YAXPEAUHint@ActivationHints@@0AEAV?$allocator@UHint@ActivationHints@@@0@@Z @ 0x1802B09CC (--$_Destroy_range@V-$allocator@UHint@ActivationHints@@@std@@@std@@YAXPEAUHint@ActivationHints@@0.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_ActivationHints::Hint_____ptr64_ActivationHints::Hint_____ptr64_std::allocator_ActivationHints::Hint____::_1_::catch_19(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<ActivationHints::Hint>>(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
