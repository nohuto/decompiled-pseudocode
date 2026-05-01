/*
 * XREFs of _Platform::IVector_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_::Vector_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__1_::[Windows::Foundation::Collections::IVector_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_]::InsertAt_::_1_::catch$39 @ 0x1801A245B
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18011D270 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _CxxThrowException_0 @ 0x180194E68 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn Platform::IVector_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_::Vector_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__1_::_Windows::Foundation::Collections::IVector_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem_____ptr64__::InsertAt_::_1_::catch_39(
        __int64 a1,
        __int64 a2)
{
  void *Exception; // rax
  __int64 v4; // rax

  Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
  *(_QWORD *)(a2 + 96) = Exception;
  v4 = Platform::OutOfMemoryException::OutOfMemoryException(Exception);
  *(_QWORD *)(a2 + 96) = v4;
  *(_QWORD *)(a2 + 48) = __abi_winrt_ptr_ctor(v4);
  throw (Platform::OutOfMemoryException **)(a2 + 48);
}
