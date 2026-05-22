/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_InputProvider_____ptr64_InputProvider_____ptr64_std::allocator_InputProvider____::_1_::catch$3 @ 0x1800E412B
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@0AEAV?$allocator@UInputProvider@@@0@@Z @ 0x180005160 (--$_Destroy_range@V-$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@0AEAV-$allocato.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_InputProvider_____ptr64_InputProvider_____ptr64_std::allocator_InputProvider____::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<InputProvider>>(*(__int64 **)(a2 + 88), *(__int64 **)(a2 + 80));
  throw;
}
