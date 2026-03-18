/*
 * XREFs of ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C005DA50
 * Callers:
 *     NtUserLockCursor @ 0x1C005D750 (NtUserLockCursor.c)
 *     NtUserClipCursor @ 0x1C00A2040 (NtUserClipCursor.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C005DCD4 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 */

void __fastcall CCursorClip::ClearClip(struct tagRECT *this)
{
  struct tagRECT v2; // [rsp+20h] [rbp-18h] BYREF

  RIMLockExclusive((__int64)&this[2]);
  v2 = *this;
  CCursorClip::UpdateClipRect((CCursorClip *)this, &v2);
  *(_QWORD *)&this[2].right = 0LL;
  ExReleasePushLockExclusiveEx(&this[2], 0LL);
  KeLeaveCriticalRegion();
}
