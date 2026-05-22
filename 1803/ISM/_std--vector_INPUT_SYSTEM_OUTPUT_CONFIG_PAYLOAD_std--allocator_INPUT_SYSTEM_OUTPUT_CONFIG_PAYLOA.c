/*
 * XREFs of _std::vector_INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD_std::allocator_INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD___::emplace_back_INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD_const_&___ptr64__::_1_::catch$102 @ 0x1800E820C
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@UINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@@std@@QEAAXQEAUINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@_K@Z @ 0x180004FB8 (-deallocate@-$allocator@UINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@@std@@QEAAXQEAUINPUT_SYSTEM_OUTPUT_.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD_std::allocator_INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD___::emplace_back_INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD_const_____ptr64__::_1_::catch_102(
        __int64 a1,
        __int64 a2)
{
  std::allocator<INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD>::deallocate(a1, *(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 112));
  throw;
}
