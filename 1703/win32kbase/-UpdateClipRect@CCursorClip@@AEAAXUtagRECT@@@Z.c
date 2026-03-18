/*
 * XREFs of ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C0072598
 * Callers:
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C0072340 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     ?RefreshMonitorList@CCursorClip@@QEAAXXZ @ 0x1C0072394 (-RefreshMonitorList@CCursorClip@@QEAAXXZ.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C012A1A0 (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C012A2A0 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     PtInRect @ 0x1C007268C (PtInRect.c)
 *     SendClipChanged @ 0x1C00726C0 (SendClipChanged.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ApiSetInternalSetCursorPos @ 0x1C013D0F4 (ApiSetInternalSetCursorPos.c)
 */

void __fastcall CCursorClip::UpdateClipRect(struct tagRECT *this, struct tagRECT *a2)
{
  LONG bottom; // r10d
  struct tagRECT *v4; // r8
  LONG right; // ecx
  LONG left; // r9d
  LONG top; // r8d
  struct tagRECT v8; // xmm0
  __int64 v9; // rcx
  struct tagRECT v10; // [rsp+20h] [rbp-28h] BYREF

  bottom = a2->bottom;
  v4 = a2;
  if ( this->left > a2->left )
    v4 = this;
  right = a2->right;
  left = v4->left;
  top = a2->top;
  a2->left = left;
  if ( this->right < right )
    right = this->right;
  a2->right = right;
  if ( this->top > top )
    top = this->top;
  a2->top = top;
  if ( this->bottom < bottom )
    bottom = this->bottom;
  a2->bottom = bottom;
  if ( left > right || top > bottom )
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
  if ( !(unsigned int)PtInRect(&this[1], *((_QWORD *)gpsi + 671)) )
  {
    *(_QWORD *)&this[2].right = 0LL;
    ExReleasePushLockExclusiveEx(&this[2], 0LL);
    KeLeaveCriticalRegion();
    ApiSetInternalSetCursorPos(*((unsigned int *)gpsi + 1342), *((unsigned int *)gpsi + 1343));
    RIMLockExclusive((__int64)&this[2]);
  }
}
