/*
 * XREFs of ExpCheckForResource @ 0x140285BD4
 * Callers:
 *     ExFreeLargePool @ 0x14002E0E0 (ExFreeLargePool.c)
 *     ExpFreePoolChecks @ 0x1402848FC (ExpFreePoolChecks.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     VfCheckForResource @ 0x1407BFABC (VfCheckForResource.c)
 */

__int64 __fastcall ExpCheckForResource(__int64 *a1, ULONG_PTR a2)
{
  KIRQL v5; // al
  __int64 *v6; // rbx
  KIRQL v7; // bp

  if ( (MmVerifierData & 0x800) != 0 && (unsigned int)VfCheckForResource((ULONG_PTR)a1, a2)
    || (unsigned int)KeNumberProcessors_0 > 1
    || (ExResourceCheckFlags & 1) == 0 )
  {
    return 0LL;
  }
  v5 = ExAcquireSpinLockShared(&ExpResourceSpinLock);
  v6 = (__int64 *)ExpSystemResourcesList;
  v7 = v5;
  while ( v6 != &ExpSystemResourcesList )
  {
    if ( v6 >= a1 && v6 < (__int64 *)((char *)a1 + a2) )
    {
      DbgPrintEx(
        0,
        0,
        "EX: ExFreePool( %p, %Ix ) contains an ERESOURCE structure that has not been ExDeleteResourced\n",
        a1,
        a2);
      __debugbreak();
    }
    v6 = (__int64 *)*v6;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&ExpResourceSpinLock);
  __writecr8(v7);
  return 0LL;
}
