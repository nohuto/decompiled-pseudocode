/*
 * XREFs of ?GetStuckRect@XamlTaskbarProxy@@UEAA?AUtagRECT@@XZ @ 0x1801527A0
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_96eb3092302b05654d332d00c578341a__void_::Invoke @ 0x180154850 (Platform--Details--__abi_FunctorCapture__lambda_96eb3092302b05654d332d00c578341a__void_--Invoke.c)
 * Callees:
 *     ?GetRectsInternal@XamlTaskbarProxy@@AEAAXAEAUtagRECT@@0@Z @ 0x1801530C0 (-GetRectsInternal@XamlTaskbarProxy@@AEAAXAEAUtagRECT@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct tagRECT *__fastcall XamlTaskbarProxy::GetStuckRect(RTL_SRWLOCK *this, struct tagRECT *__return_ptr retstr)
{
  RTL_SRWLOCK *v4; // rbx
  struct tagRECT v6; // [rsp+28h] [rbp-20h] BYREF

  v4 = this + 13;
  AcquireSRWLockShared(this + 13);
  *(_QWORD *)&retstr->left = 0LL;
  *(_QWORD *)&retstr->right = 0LL;
  *(_QWORD *)&v6.left = 0LL;
  *(_QWORD *)&v6.right = 0LL;
  if ( this[9].Ptr )
    XamlTaskbarProxy::GetRectsInternal((XamlTaskbarProxy *)this, retstr, &v6);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return retstr;
}
