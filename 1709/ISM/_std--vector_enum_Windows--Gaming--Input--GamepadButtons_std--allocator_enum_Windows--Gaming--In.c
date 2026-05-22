/*
 * XREFs of _std::vector_enum_Windows::Gaming::Input::GamepadButtons_std::allocator_enum_Windows::Gaming::Input::GamepadButtons___::emplace_back_enum_Windows::Gaming::Input::GamepadButtons_const_&___ptr64__::_1_::catch$106 @ 0x1800CDE0D
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@@std@@QEAAXPEAW4GamepadButtons@Input@Gaming@Windows@@_K@Z @ 0x18002B6B8 (-deallocate@-$_Wrap_alloc@V-$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@@std@@QEAAXP.c)
 *     _CxxThrowException_0 @ 0x1800CB710 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_enum_Windows::Gaming::Input::GamepadButtons_std::allocator_enum_Windows::Gaming::Input::GamepadButtons___::emplace_back_enum_Windows::Gaming::Input::GamepadButtons_const_____ptr64__::_1_::catch_106(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<enum Windows::Gaming::Input::GamepadButtons>>::deallocate(
    a1,
    *(_QWORD **)(a2 + 112),
    *(_QWORD *)(a2 + 96));
  throw;
}
