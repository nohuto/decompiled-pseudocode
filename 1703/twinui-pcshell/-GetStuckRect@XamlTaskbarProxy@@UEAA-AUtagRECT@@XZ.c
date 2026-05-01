/*
 * XREFs of ?GetStuckRect@XamlTaskbarProxy@@UEAA?AUtagRECT@@XZ @ 0x180128450
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_96eb3092302b05654d332d00c578341a__void_::Invoke @ 0x18012A020 (Platform--Details--__abi_FunctorCapture__lambda_96eb3092302b05654d332d00c578341a__void_--Invoke.c)
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?GetRectsInternal@XamlTaskbarProxy@@AEAAXAEAUtagRECT@@0@Z @ 0x180128C94 (-GetRectsInternal@XamlTaskbarProxy@@AEAAXAEAUtagRECT@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct tagRECT *__fastcall XamlTaskbarProxy::GetStuckRect(RTL_SRWLOCK *this, struct tagRECT *__return_ptr retstr)
{
  struct tagRECT v5; // [rsp+28h] [rbp-20h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 11, &SRWLock);
  *(_QWORD *)&retstr->left = 0LL;
  *(_QWORD *)&retstr->right = 0LL;
  *(_QWORD *)&v5.left = 0LL;
  *(_QWORD *)&v5.right = 0LL;
  if ( this[7].Ptr )
    XamlTaskbarProxy::GetRectsInternal((XamlTaskbarProxy *)this, retstr, &v5);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return retstr;
}
