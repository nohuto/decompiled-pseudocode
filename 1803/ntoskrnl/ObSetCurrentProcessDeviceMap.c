/*
 * XREFs of ObSetCurrentProcessDeviceMap @ 0x14055FBE0
 * Callers:
 *     ObpReferenceDeviceMap @ 0x1404FD200 (ObpReferenceDeviceMap.c)
 *     ObpLookupObjectName @ 0x1405A5B90 (ObpLookupObjectName.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     PsReferencePrimaryToken @ 0x1404C13D0 (PsReferencePrimaryToken.c)
 *     ObfDereferenceDeviceMap @ 0x1404FD110 (ObfDereferenceDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x14055FCF8 (SeGetTokenDeviceMap.c)
 */

__int64 ObSetCurrentProcessDeviceMap()
{
  void *v0; // r14
  unsigned __int64 *CurrentServerSiloGlobals; // rbx
  _KPROCESS *Process; // r15
  PACCESS_TOKEN v3; // rax
  void *v4; // rsi
  int TokenDeviceMap; // edi
  unsigned __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0LL;
  CurrentServerSiloGlobals = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = PsReferencePrimaryToken(Process);
  v4 = v3;
  if ( !v3 )
    return 3221225596LL;
  TokenDeviceMap = 0;
  if ( *((_QWORD *)v3 + 3) == 999LL )
  {
    CurrentServerSiloGlobals = (unsigned __int64 *)PsGetCurrentServerSiloGlobals();
    v6 = *CurrentServerSiloGlobals;
  }
  else
  {
    TokenDeviceMap = SeGetTokenDeviceMap(v3, &v11);
    if ( TokenDeviceMap < 0 )
      goto LABEL_14;
    v6 = v11;
  }
  if ( v6 )
  {
    if ( !CurrentServerSiloGlobals )
      CurrentServerSiloGlobals = (unsigned __int64 *)PsGetCurrentServerSiloGlobals();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
    v0 = (void *)Process[1].ActiveProcessors.Bitmap[8];
    Process[1].ActiveProcessors.Bitmap[8] = v6;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 24));
    ExReleasePushLockEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL, v8, v9);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    goto LABEL_9;
  }
LABEL_14:
  TokenDeviceMap = -1073741767;
LABEL_9:
  ObfDereferenceObject(v4);
  if ( v0 )
    ObfDereferenceDeviceMap(v0);
  return (unsigned int)TokenDeviceMap;
}
