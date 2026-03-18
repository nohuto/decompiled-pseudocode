/*
 * XREFs of CmpReferenceKeyControlBlockLockNotHeld @ 0x140459E68
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x140502580 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x140503FA0 (CmpWalkOneLevel.c)
 * Callees:
 *     CmpLockKcbShared @ 0x1404FF9AC (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpReferenceKeyControlBlock @ 0x14054CCC0 (CmpReferenceKeyControlBlock.c)
 */

char __fastcall CmpReferenceKeyControlBlockLockNotHeld(volatile signed __int32 *P)
{
  signed __int32 v1; // eax
  char v3; // bl
  signed __int32 v4; // ett

  v1 = *P;
  v3 = 0;
  while ( v1 )
  {
    if ( v1 == -1 )
      return v3;
    v4 = v1;
    v1 = _InterlockedCompareExchange(P, v1 + 1, v1);
    if ( v4 == v1 )
      return 1;
  }
  CmpLockKcbShared(P);
  v3 = CmpReferenceKeyControlBlock((ULONG_PTR)P);
  CmpUnlockKcb((PVOID)P);
  return v3;
}
