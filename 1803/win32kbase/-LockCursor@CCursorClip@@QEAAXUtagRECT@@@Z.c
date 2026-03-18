/*
 * XREFs of ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01202C8
 * Callers:
 *     NtUserLockCursor @ 0x1C0059860 (NtUserLockCursor.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C0055C94 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     PtInRect @ 0x1C0055DE4 (PtInRect.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

void __fastcall CCursorClip::LockCursor(CCursorClip *this, struct tagRECT *a2)
{
  CCursorClip *v2; // rsi
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  LONG top; // r9d
  struct tagRECT v7; // [rsp+20h] [rbp-28h] BYREF

  v2 = gpCursorClip;
  RIMLockExclusive((__int64)gpCursorClip + 32);
  *(_QWORD *)&v7.left = 0LL;
  *(_QWORD *)&v7.right = 0LL;
  if ( PtInRect(a2, *((_QWORD *)gpsi + 620)) )
  {
    *(_QWORD *)&v7.left = v4;
    v5 = HIDWORD(v4);
  }
  else
  {
    top = a2->top;
    LODWORD(v4) = a2->left + (a2->right - a2->left) / 2;
    v7.left = v4;
    LODWORD(v5) = top + (a2->bottom - top) / 2;
    v7.top = v5;
  }
  v7.right = v4 + 1;
  v7.bottom = v5 + 1;
  CCursorClip::UpdateClipRect((struct tagRECT *)v2, &v7);
  *((_QWORD *)v2 + 5) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v2 + 32, 0LL);
  KeLeaveCriticalRegion();
}
