/*
 * XREFs of ExpCheckForResource @ 0x1402BA204
 * Callers:
 *     ExFreeLargePool @ 0x1400DB3B0 (ExFreeLargePool.c)
 *     ExpFreePoolChecks @ 0x1402B8EBC (ExpFreePoolChecks.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     VfCheckForResource @ 0x14082CFFC (VfCheckForResource.c)
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
