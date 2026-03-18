/*
 * XREFs of ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C01203D0
 * Callers:
 *     NtUserClipCursor @ 0x1C0072D80 (NtUserClipCursor.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C0055C94 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
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
