/*
 * XREFs of ObpGetShadowDirectory @ 0x140758584
 * Callers:
 *     ObpLookupDirectoryEntryEx @ 0x140558350 (ObpLookupDirectoryEntryEx.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

__int64 __fastcall ObpGetShadowDirectory(__int64 a1, char a2)
{
  int v2; // eax
  __int64 v3; // rbx
  void *CurrentServerSiloGlobals; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax

  v2 = *(_DWORD *)(a1 + 336);
  v3 = 0LL;
  if ( (v2 & 4) != 0 )
  {
    if ( (v2 & 0x10) == 0 || a2 )
      return *(_QWORD *)(a1 + 312);
  }
  else
  {
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)CurrentServerSiloGlobals + 120, 0LL);
    v9 = *(_QWORD *)(a1 + 304);
    if ( v9 )
      v3 = *(_QWORD *)(v9 + 8);
    ExReleasePushLockEx((ULONG_PTR)CurrentServerSiloGlobals + 120, 0LL, v7, v8);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v3;
}
