/*
 * XREFs of ExpCheckForResource @ 0x14025C2B4
 * Callers:
 *     ExFreeLargePool @ 0x1400DCA30 (ExFreeLargePool.c)
 *     ExpFreePoolChecks @ 0x14025B100 (ExpFreePoolChecks.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 * Callees:
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     VfCheckForResource @ 0x14077DB38 (VfCheckForResource.c)
 */

__int64 __fastcall ExpCheckForResource(__int64 *a1, __int64 a2)
{
  KIRQL v5; // al
  __int64 *v6; // rbx
  KIRQL v7; // bp

  if ( (MmVerifierData & 0x800) != 0 && (unsigned int)VfCheckForResource()
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
