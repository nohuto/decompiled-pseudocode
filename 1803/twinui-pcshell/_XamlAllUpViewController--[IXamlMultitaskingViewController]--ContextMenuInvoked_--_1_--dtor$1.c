/*
 * XREFs of _XamlAllUpViewController::[IXamlMultitaskingViewController]::ContextMenuInvoked_::_1_::dtor$1 @ 0x18021C83C
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall XamlAllUpViewController::_IXamlMultitaskingViewController_::ContextMenuInvoked_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 128) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 128) &= ~2u;
    return __abi_winrt_ptr_dtor(*(_QWORD *)(a2 + 32));
  }
  return result;
}
