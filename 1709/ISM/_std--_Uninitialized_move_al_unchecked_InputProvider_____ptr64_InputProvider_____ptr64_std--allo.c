/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_InputProvider_____ptr64_InputProvider_____ptr64_std::allocator_InputProvider____::_1_::catch$4 @ 0x1800CE579
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UInputProvider@@@std@@PEAUInputProvider@@@std@@YAXPEAUInputProvider@@0AEAU?$_Wrap_alloc@V?$allocator@UInputProvider@@@std@@@0@@Z @ 0x180005598 (--$_Destroy_range@V-$allocator@UInputProvider@@@std@@PEAUInputProvider@@@std@@YAXPEAUInputProvid.c)
 *     _CxxThrowException_0 @ 0x1800CB710 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_InputProvider_____ptr64_InputProvider_____ptr64_std::allocator_InputProvider____::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<InputProvider>,InputProvider *>(*(__int64 **)(a2 + 88), *(__int64 **)(a2 + 80));
  throw;
}
