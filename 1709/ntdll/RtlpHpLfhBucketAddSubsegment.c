/*
 * XREFs of RtlpHpLfhBucketAddSubsegment @ 0x18005EF54
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x180042C90 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentFree @ 0x18005EFC0 (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18006E210 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpLfhSubsegmentSetOwner @ 0x180080DA8 (RtlpHpLfhSubsegmentSetOwner.c)
 */

void __fastcall RtlpHpLfhBucketAddSubsegment(__int64 a1, _RTL_SRWLOCK *a2, __int64 a3, char a4)
{
  __int64 v5; // rbx

  v5 = a3;
  if ( *(_WORD *)(a3 + 32) != *(_WORD *)(a3 + 34) )
  {
    RtlAcquireSRWLockExclusive(a2 + 2);
    RtlpHpLfhSubsegmentSetOwner(v5, a2);
    if ( *(_WORD *)(v5 + 32) == *(_WORD *)(v5 + 34) )
      *(_QWORD *)(v5 + 16) = 0LL;
    else
      v5 = RtlpHpLfhOwnerMoveSubsegment(a2, v5, 0LL);
    RtlReleaseSRWLockExclusive(a2 + 2);
  }
  if ( v5 )
    RtlpHpLfhSubsegmentFree(a1, v5, a2, 2 * (a4 & 1u));
}
