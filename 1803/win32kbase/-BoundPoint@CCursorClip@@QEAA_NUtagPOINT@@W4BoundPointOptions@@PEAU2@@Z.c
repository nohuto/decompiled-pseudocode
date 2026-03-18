/*
 * XREFs of ?BoundPoint@CCursorClip@@QEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C0055BF0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C0055A4C (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 *     ?ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z @ 0x1C0055E0C (-ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z.c)
 */

bool __fastcall CCursorClip::BoundPoint(__int64 a1, struct tagPOINT a2, unsigned int a3, struct tagPOINT *a4)
{
  const struct tagRECT *v8; // rdx
  bool v9; // bl
  LONG y; // [rsp+4Ch] [rbp+14h]

  y = a2.y;
  RIMLockExclusive(a1 + 32);
  *a4 = a2;
  v8 = (const struct tagRECT *)a1;
  if ( (a3 & 4) == 0 )
    v8 = (const struct tagRECT *)(a1 + 16);
  CCursorClip::ClipPointToRect(a2, v8, a4);
  CCursorClip::BoundPointToRegions((struct tagRECT *)a1, *a4, a3, a4);
  v9 = *a4 != __PAIR64__(y, a2.x);
  *(_QWORD *)(a1 + 40) = 0LL;
  ExReleasePushLockExclusiveEx(a1 + 32, 0LL);
  KeLeaveCriticalRegion();
  return v9;
}
