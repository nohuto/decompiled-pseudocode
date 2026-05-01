/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_96eb3092302b05654d332d00c578341a__void_::Invoke @ 0x180154850
 * Callers:
 *     <none>
 * Callees:
 *     ?GetStuckRect@XamlTaskbarProxy@@UEAA?AUtagRECT@@XZ @ 0x1801527A0 (-GetStuckRect@XamlTaskbarProxy@@UEAA-AUtagRECT@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Platform::Details::__abi_FunctorCapture__lambda_96eb3092302b05654d332d00c578341a__void_::Invoke(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rdi
  struct tagRECT *StuckRect; // rax
  struct tagRECT v4; // [rsp+50h] [rbp-28h] BYREF

  v2 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 8) + 104LL);
  AcquireSRWLockShared(v2);
  StuckRect = XamlTaskbarProxy::GetStuckRect(*(RTL_SRWLOCK **)(a1 + 8), &v4);
  SetWindowPos(
    *(HWND *)(*(_QWORD *)(a1 + 8) + 80LL),
    0LL,
    StuckRect->left,
    StuckRect->top,
    StuckRect->right - StuckRect->left,
    StuckRect->bottom - StuckRect->top,
    0x14u);
  if ( v2 )
    ReleaseSRWLockShared(v2);
}
