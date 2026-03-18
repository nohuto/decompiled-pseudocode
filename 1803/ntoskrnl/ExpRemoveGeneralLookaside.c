/*
 * XREFs of ExpRemoveGeneralLookaside @ 0x1400C2F64
 * Callers:
 *     ExDeletePagedLookasideList @ 0x1400C2E60 (ExDeletePagedLookasideList.c)
 *     ExDeleteLookasideListEx @ 0x1400C2EE0 (ExDeleteLookasideListEx.c)
 *     ExDeleteNPagedLookasideList @ 0x140163E90 (ExDeleteNPagedLookasideList.c)
 *     ExDrainPoolLookasideList @ 0x1405ECFB8 (ExDrainPoolLookasideList.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

PVOID __fastcall ExpRemoveGeneralLookaside(PKSPIN_LOCK SpinLock, __int64 a2)
{
  __int64 *v4; // rbx
  KIRQL v5; // bp
  __int64 *v6; // r9
  __int64 **v7; // r8
  PVOID result; // rax

  v4 = (__int64 *)(a2 + 64);
  v5 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v6 = (__int64 *)*v4;
  if ( *(__int64 **)(*v4 + 8) != v4 || (v7 = *(__int64 ***)(a2 + 72), *v7 != v4) )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = (__int64)v7;
  KxReleaseSpinLock(SpinLock);
  __writecr8(v5);
  *(_WORD *)(a2 + 16) = 0;
  result = MmBadPointer;
  *v4 = (__int64)MmBadPointer;
  return result;
}
