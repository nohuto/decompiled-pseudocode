/*
 * XREFs of ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C0055D90
 * Callers:
 *     NtUserLockCursor @ 0x1C0059860 (NtUserLockCursor.c)
 *     NtUserClipCursor @ 0x1C0072D80 (NtUserClipCursor.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C0055C94 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 */

void __fastcall CCursorClip::ClearClip(struct tagRECT *this)
{
  struct tagRECT v2; // [rsp+20h] [rbp-18h] BYREF

  RIMLockExclusive((__int64)&this[2]);
  v2 = *this;
  CCursorClip::UpdateClipRect(this, &v2);
  *(_QWORD *)&this[2].right = 0LL;
  ExReleasePushLockExclusiveEx(&this[2], 0LL);
  KeLeaveCriticalRegion();
}
