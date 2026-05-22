/*
 * XREFs of std::_Func_impl__lambda_afbaf6c152b82f1491f097fb3fc7e327__std::allocator_int__void__MIT_INPUT_INTEROP_MESSAGE_const_____ptr64_::_Do_call @ 0x1800123E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall std::_Func_impl__lambda_afbaf6c152b82f1491f097fb3fc7e327__std::allocator_int__void__MIT_INPUT_INTEROP_MESSAGE_const_____ptr64_::_Do_call(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)*a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x97,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      a4);
    JUMPOUT(0x18001241BLL);
  }
  return ((__int64 (__fastcall *)(_QWORD, _QWORD))Win32kInterop::s_pfnMTCallback)(*a2, *(_QWORD *)(a1 + 8));
}
