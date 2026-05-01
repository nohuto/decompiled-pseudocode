/*
 * XREFs of _Platform::IVector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64__1_::[Windows::Foundation::Collections::IVector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_]::Append_::_1_::catch$17 @ 0x18021BF40
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

void __fastcall __noreturn Platform::IVector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_::Vector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64_std::equal_to_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64__1_::_Windows::Foundation::Collections::IVector_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____ptr64__::Append_::_1_::catch_17(
        __int64 a1,
        __int64 a2)
{
  void *Exception; // rax
  __int64 v4; // rax

  Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
  *(_QWORD *)(a2 + 80) = Exception;
  v4 = Platform::OutOfMemoryException::OutOfMemoryException(Exception);
  *(_QWORD *)(a2 + 80) = v4;
  *(_QWORD *)(a2 + 32) = __abi_winrt_ptr_ctor(v4);
  throw (Platform::OutOfMemoryException **)(a2 + 32);
}
