/*
 * XREFs of ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C0055C94
 * Callers:
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C0055B4C (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C0055D90 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01202C8 (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01203D0 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     PtInRect @ 0x1C0055DE4 (PtInRect.c)
 *     SendClipChanged @ 0x1C0055E50 (SendClipChanged.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ApiSetInternalSetCursorPos @ 0x1C0140DD8 (ApiSetInternalSetCursorPos.c)
 */

void __fastcall CCursorClip::UpdateClipRect(struct tagRECT *this, struct tagRECT *a2)
{
  LONG left; // r8d
  LONG right; // eax
  LONG v6; // edx
  LONG top; // eax
  LONG v8; // ecx
  LONG bottom; // eax
  LONG v10; // r10d
  struct tagRECT v11; // xmm0
  __int64 v12; // rcx
  struct tagRECT v13; // [rsp+20h] [rbp-28h] BYREF

  left = this->left;
  if ( this->left <= a2->left )
    left = a2->left;
  right = a2->right;
  a2->left = left;
  v6 = this->right;
  if ( v6 >= right )
    v6 = right;
  top = a2->top;
  a2->right = v6;
  v8 = this->top;
  if ( v8 <= top )
    v8 = top;
  bottom = a2->bottom;
  a2->top = v8;
  v10 = this->bottom;
  if ( v10 >= bottom )
    v10 = bottom;
  a2->bottom = v10;
  if ( left > v6 || v8 > v10 )
    *a2 = *this;
  v11 = *a2;
  this[1] = *a2;
  v12 = *(_QWORD *)&this[1].left - *(_QWORD *)&this->left;
  if ( !v12 )
    v12 = *(_QWORD *)&this[1].right - *(_QWORD *)&this->right;
  if ( v12 )
    v13 = v11;
  else
    v13 = (struct tagRECT)0LL;
  SendClipChanged(&v13);
  if ( !(unsigned int)PtInRect(&this[1], *((_QWORD *)gpsi + 620)) )
  {
    *(_QWORD *)&this[2].right = 0LL;
    ExReleasePushLockExclusiveEx(&this[2], 0LL);
    KeLeaveCriticalRegion();
    ApiSetInternalSetCursorPos(*((unsigned int *)gpsi + 1240), *((unsigned int *)gpsi + 1241), 2LL);
    RIMLockExclusive((__int64)&this[2]);
  }
}
