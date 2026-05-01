/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_96eb3092302b05654d332d00c578341a__void_::Invoke @ 0x18012A020
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?GetStuckRect@XamlTaskbarProxy@@UEAA?AUtagRECT@@XZ @ 0x180128450 (-GetStuckRect@XamlTaskbarProxy@@UEAA-AUtagRECT@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Platform::Details::__abi_FunctorCapture__lambda_96eb3092302b05654d332d00c578341a__void_::Invoke(
        __int64 a1)
{
  struct tagRECT *StuckRect; // rax
  PSRWLOCK SRWLock[2]; // [rsp+40h] [rbp-38h] BYREF
  struct tagRECT v4; // [rsp+50h] [rbp-28h] BYREF

  SRWLock[1] = (PSRWLOCK)-2LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK *)(*(_QWORD *)(a1 + 8) + 88LL), SRWLock);
  StuckRect = XamlTaskbarProxy::GetStuckRect(*(RTL_SRWLOCK **)(a1 + 8), &v4);
  SetWindowPos(
    *(HWND *)(*(_QWORD *)(a1 + 8) + 64LL),
    0LL,
    StuckRect->left,
    StuckRect->top,
    StuckRect->right - StuckRect->left,
    StuckRect->bottom - StuckRect->top,
    0x14u);
  if ( SRWLock[0] )
    ReleaseSRWLockShared(SRWLock[0]);
}
