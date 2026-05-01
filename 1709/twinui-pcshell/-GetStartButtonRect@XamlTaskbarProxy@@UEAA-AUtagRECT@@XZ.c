/*
 * XREFs of ?GetStartButtonRect@XamlTaskbarProxy@@UEAA?AUtagRECT@@XZ @ 0x180152870
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRectsInternal@XamlTaskbarProxy@@AEAAXAEAUtagRECT@@0@Z @ 0x1801530C0 (-GetRectsInternal@XamlTaskbarProxy@@AEAAXAEAUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
struct tagRECT *__fastcall XamlTaskbarProxy::GetStartButtonRect(RTL_SRWLOCK *this, struct tagRECT *__return_ptr retstr)
{
  RTL_SRWLOCK *v4; // rbx
  struct tagRECT v6; // [rsp+30h] [rbp-28h] BYREF

  v4 = this + 13;
  AcquireSRWLockShared(this + 13);
  *(_QWORD *)&v6.left = 0LL;
  *(_QWORD *)&v6.right = 0LL;
  *(_QWORD *)&retstr->left = 0LL;
  *(_QWORD *)&retstr->right = 0LL;
  if ( this[9].Ptr )
    XamlTaskbarProxy::GetRectsInternal((XamlTaskbarProxy *)this, &v6, retstr);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return retstr;
}
