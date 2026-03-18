/*
 * XREFs of ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C005DCD4
 * Callers:
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C005DA50 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C005DAA4 (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C0129ADC (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C0129BE0 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     PtInRect @ 0x1C005DDC8 (PtInRect.c)
 *     SendClipChanged @ 0x1C005DDF0 (SendClipChanged.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ApiSetInternalSetCursorPos @ 0x1C013C5C8 (ApiSetInternalSetCursorPos.c)
 */

void __fastcall CCursorClip::UpdateClipRect(struct tagRECT *this, struct tagRECT *a2)
{
  LONG left; // r8d
  LONG top; // r9d
  LONG bottom; // r10d
  LONG right; // eax
  LONG v7; // ecx
  struct tagRECT v8; // xmm0
  __int64 v9; // rcx
  struct tagRECT v10; // [rsp+20h] [rbp-28h] BYREF

  left = a2->left;
  top = a2->top;
  bottom = a2->bottom;
  if ( this->left > a2->left )
    left = this->left;
  a2->left = left;
  right = this->right;
  v7 = a2->right;
  if ( right < v7 )
    v7 = right;
  a2->right = v7;
  if ( this->top > top )
    top = this->top;
  a2->top = top;
  if ( this->bottom < bottom )
    bottom = this->bottom;
  a2->bottom = bottom;
  if ( left > v7 || top > bottom )
    *a2 = *this;
  v8 = *a2;
  this[1] = *a2;
  v9 = *(_QWORD *)&this[1].left - *(_QWORD *)&this->left;
  if ( !v9 )
    v9 = *(_QWORD *)&this[1].right - *(_QWORD *)&this->right;
  if ( v9 )
    v10 = v8;
  else
    v10 = (struct tagRECT)0LL;
  SendClipChanged(&v10);
  if ( !(unsigned int)PtInRect(&this[1]) )
  {
    *(_QWORD *)&this[2].right = 0LL;
    ExReleasePushLockExclusiveEx(&this[2], 0LL);
    KeLeaveCriticalRegion();
    ApiSetInternalSetCursorPos(*((unsigned int *)gpsi + 1236), *((unsigned int *)gpsi + 1237));
    RIMLockExclusive((__int64)&this[2]);
  }
}
