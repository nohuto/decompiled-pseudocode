/*
 * XREFs of ?GetStartButtonRect@XamlTaskbarProxy@@UEAA?AUtagRECT@@XZ @ 0x180128510
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?GetRectsInternal@XamlTaskbarProxy@@AEAAXAEAUtagRECT@@0@Z @ 0x180128C94 (-GetRectsInternal@XamlTaskbarProxy@@AEAAXAEAUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
struct tagRECT *__fastcall XamlTaskbarProxy::GetStartButtonRect(RTL_SRWLOCK *this, struct tagRECT *__return_ptr retstr)
{
  PSRWLOCK SRWLock[2]; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v6; // [rsp+30h] [rbp-28h] BYREF

  SRWLock[1] = (PSRWLOCK)-2LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 11, SRWLock);
  *(_QWORD *)&v6.left = 0LL;
  *(_QWORD *)&v6.right = 0LL;
  *(_QWORD *)&retstr->left = 0LL;
  *(_QWORD *)&retstr->right = 0LL;
  if ( this[7].Ptr )
    XamlTaskbarProxy::GetRectsInternal((XamlTaskbarProxy *)this, &v6, retstr);
  if ( SRWLock[0] )
    ReleaseSRWLockShared(SRWLock[0]);
  return retstr;
}
