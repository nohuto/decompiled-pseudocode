/*
 * XREFs of ObIsDosDeviceLocallyMapped @ 0x140650060
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

__int64 __fastcall ObIsDosDeviceLocallyMapped(int a1, bool *a2)
{
  _DWORD *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // r8
  _DWORD *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9

  if ( (unsigned int)(a1 - 1) > 0x19 )
    return 3221225485LL;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  CurrentThread = KeGetCurrentThread();
  v6 = CurrentServerSiloGlobals;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)(CurrentServerSiloGlobals + 30), 0LL);
  *a2 = v6[a1 - 1 + 3] != 0;
  ExReleasePushLockEx((ULONG_PTR)(v6 + 30), 0LL, v7, v8);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return 0LL;
}
