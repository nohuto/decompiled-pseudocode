/*
 * XREFs of ?GetClip@CCursorClip@@QEBA?AUtagRECT@@XZ @ 0x1C0098120
 * Callers:
 *     NtUserGetClipCursor @ 0x1C00E15C0 (NtUserGetClipCursor.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall CCursorClip::GetClip(struct tagRECT *this, struct tagRECT *__return_ptr retstr)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&this[2], 0LL);
  *retstr = this[1];
  ExReleasePushLockSharedEx(&this[2], 0LL);
  KeLeaveCriticalRegion();
  return retstr;
}
