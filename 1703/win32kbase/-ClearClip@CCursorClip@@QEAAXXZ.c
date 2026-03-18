/*
 * XREFs of ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C0072340
 * Callers:
 *     NtUserLockCursor @ 0x1C00713C0 (NtUserLockCursor.c)
 *     NtUserClipCursor @ 0x1C0097F10 (NtUserClipCursor.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C0072598 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
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
