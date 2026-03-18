/*
 * XREFs of ExpRemoveGeneralLookaside @ 0x14002D894
 * Callers:
 *     ExDeletePagedLookasideList @ 0x14002D790 (ExDeletePagedLookasideList.c)
 *     ExDeleteLookasideListEx @ 0x14002D810 (ExDeleteLookasideListEx.c)
 *     ExDeleteNPagedLookasideList @ 0x1401642E0 (ExDeleteNPagedLookasideList.c)
 *     ExDrainPoolLookasideList @ 0x14057A8E0 (ExDrainPoolLookasideList.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

PVOID __fastcall ExpRemoveGeneralLookaside(PKSPIN_LOCK SpinLock, __int64 a2)
{
  PVOID *v4; // rbx
  KIRQL v5; // bp
  __int64 *v6; // r9
  __int64 **v7; // r8
  PVOID result; // rax

  v4 = (PVOID *)(a2 + 64);
  v5 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v6 = (__int64 *)*v4;
  v7 = *(__int64 ***)(a2 + 72);
  if ( *((_QWORD *)*v4 + 1) != a2 + 64 || *v7 != (__int64 *)v4 )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = (__int64)v7;
  KxReleaseSpinLock(SpinLock);
  __writecr8(v5);
  *(_WORD *)(a2 + 16) = 0;
  result = MmBadPointer;
  *v4 = MmBadPointer;
  return result;
}
