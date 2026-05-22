/*
 * XREFs of std::_Func_impl_no_alloc__lambda_7acb0610d562435f37746a706592db82__void__MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE_const_____ptr64_::_Do_call @ 0x180023AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x18002535C (-ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_7acb0610d562435f37746a706592db82__void__MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE_const_____ptr64_::_Do_call(
        __int64 a1,
        HWND **a2)
{
  __int64 v2; // rbx
  unsigned int PropW; // eax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  PropW = *(_DWORD *)(v2 + 96);
  if ( !PropW )
    PropW = (unsigned int)GetPropW(**a2, L"Microsoft.Windows.WindowFactory.ViewId");
  InputAttemptedTargetManager::ProcessInputAttempt((InputAttemptedTargetManager *)(v2 + 64), PropW);
  v4 = *(_QWORD *)(v2 + 232);
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v4 + 40LL))(v4, 4LL, 0LL);
}
