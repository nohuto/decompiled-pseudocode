/*
 * XREFs of ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C0129BE0
 * Callers:
 *     NtUserClipCursor @ 0x1C00A2040 (NtUserClipCursor.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C005DCD4 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 */

void __fastcall CCursorClip::SetClip(struct tagRECT *this, struct tagRECT *a2)
{
  struct tagRECT v4; // [rsp+20h] [rbp-18h] BYREF

  RIMLockExclusive((__int64)&this[2]);
  v4 = *a2;
  CCursorClip::UpdateClipRect(this, &v4);
  *(_QWORD *)&this[2].right = 0LL;
  ExReleasePushLockExclusiveEx(&this[2], 0LL);
  KeLeaveCriticalRegion();
}
