/*
 * XREFs of std::_Func_impl__lambda_0af14be5e26ae7c36c83d7629202f60d__std::allocator_int__void__MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE_const_____ptr64_::_Do_call @ 0x180081330
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x180082B08 (-ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_impl__lambda_0af14be5e26ae7c36c83d7629202f60d__std::allocator_int__void__MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE_const_____ptr64_::_Do_call(
        __int64 a1,
        HWND **a2)
{
  _QWORD *v2; // rbx
  InputAttemptedTargetManager *v3; // rdi
  unsigned int PropW; // eax

  v2 = *(_QWORD **)(a1 + 8);
  v3 = (InputAttemptedTargetManager *)v2[74];
  PropW = *((_DWORD *)v3 + 18);
  if ( !PropW )
    PropW = (unsigned int)GetPropW(**a2, L"Microsoft.Windows.WindowFactory.ViewId");
  InputAttemptedTargetManager::ProcessInputAttempt(v3, PropW);
  return (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*v2 + 56LL))(v2, 4LL, 0LL);
}
