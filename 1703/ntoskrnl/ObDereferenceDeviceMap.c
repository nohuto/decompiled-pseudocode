/*
 * XREFs of ObDereferenceDeviceMap @ 0x140498984
 * Callers:
 *     PspProcessDelete @ 0x140061C30 (PspProcessDelete.c)
 *     PspAssignPrimaryToken @ 0x1406E0B70 (PspAssignPrimaryToken.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140085020 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ObfDereferenceDeviceMap @ 0x1404EC890 (ObfDereferenceDeviceMap.c)
 */

__int64 __fastcall ObDereferenceDeviceMap(__int64 a1)
{
  __int64 ProcessServerSilo; // rax
  void *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rdx
  ULONG_PTR v5; // rbx
  void *v6; // rsi
  __int64 result; // rax

  ProcessServerSilo = PsGetProcessServerSilo(a1);
  ServerSiloGlobals = PsGetServerSiloGlobals(ProcessServerSilo);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (ULONG_PTR)ServerSiloGlobals + 120;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)ServerSiloGlobals + 120, 0LL);
  v6 = *(void **)(a1 + 1072);
  *(_QWORD *)(a1 + 1072) = 0LL;
  ExReleasePushLockEx(v5, 0LL);
  result = KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v6 )
    return ObfDereferenceDeviceMap(v6);
  return result;
}
