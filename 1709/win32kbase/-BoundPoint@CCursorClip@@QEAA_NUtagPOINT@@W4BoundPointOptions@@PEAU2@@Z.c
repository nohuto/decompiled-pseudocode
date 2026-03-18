/*
 * XREFs of ?BoundPoint@CCursorClip@@QEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C005DB40
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C005DBD8 (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 *     ?ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z @ 0x1C005DEB8 (-ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z.c)
 */

char __fastcall CCursorClip::BoundPoint(__int64 a1, struct tagPOINT a2, unsigned int a3, struct tagPOINT *a4)
{
  struct tagPOINT v7; // rbx

  v7 = a2;
  RIMLockExclusive(a1 + 32);
  *a4 = v7;
  CCursorClip::ClipPointToRect(v7, (const struct tagRECT *)(a1 + 16), a4);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CCursorClip::BoundPointToRegions)(a1, *a4, a3, a4);
  LOBYTE(v7.x) = *a4 != a2;
  *(_QWORD *)(a1 + 40) = 0LL;
  ExReleasePushLockExclusiveEx(a1 + 32, 0LL);
  KeLeaveCriticalRegion();
  return v7.x;
}
