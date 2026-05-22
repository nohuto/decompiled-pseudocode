/*
 * XREFs of _std::vector_unsigned_int_std::allocator_unsigned_int___::emplace_back_unsigned_int_const_&___ptr64__::_1_::catch$67 @ 0x1800E458A
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@QEAAXQEAW4GamepadButtons@Input@Gaming@Windows@@_K@Z @ 0x180025884 (-deallocate@-$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@QEAAXQEAW4GamepadButtons@In.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_int_std::allocator_unsigned_int___::emplace_back_unsigned_int_const_____ptr64__::_1_::catch_67(
        __int64 a1,
        __int64 a2)
{
  std::allocator<enum Windows::Gaming::Input::GamepadButtons>::deallocate(
    a1,
    *(_QWORD *)(a2 + 96),
    *(_QWORD *)(a2 + 112));
  throw;
}
