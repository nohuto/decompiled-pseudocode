/*
 * XREFs of PsLookupProcessByProcessId @ 0x140575060
 * Callers:
 *     PfpRpControlRequestUpdate @ 0x14043EA18 (PfpRpControlRequestUpdate.c)
 *     PfpCopyEvent @ 0x140455440 (PfpCopyEvent.c)
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 *     PnpLogVetoInformation @ 0x14055BDB8 (PnpLogVetoInformation.c)
 *     SeAuditProcessCreation @ 0x1405A71B4 (SeAuditProcessCreation.c)
 *     PiUEventHandleVetoEvent @ 0x1405E0CB0 (PiUEventHandleVetoEvent.c)
 *     CmpDumpOneKeyBody @ 0x14068F724 (CmpDumpOneKeyBody.c)
 *     PopDiagTraceAppPowerMessage @ 0x140701AE0 (PopDiagTraceAppPowerMessage.c)
 *     EtwpUpdatePerProcessTracing @ 0x140743FB4 (EtwpUpdatePerProcessTracing.c)
 *     EtwpProcessThreadImageRundown @ 0x14074E288 (EtwpProcessThreadImageRundown.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14074F27C (EtwpGetPrivateSessionTraceHandle.c)
 *     ViCreateProcessCallbackInternal @ 0x1407B7DA4 (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     PsIsProcessInSilo @ 0x140089050 (PsIsProcessInSilo.c)
 *     PsGetCurrentServerSilo @ 0x140089070 (PsGetCurrentServerSilo.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1401324CC (ExfAcquireReleasePushLockExclusive.c)
 *     PspReferenceCidTableEntry @ 0x1404C5740 (PspReferenceCidTableEntry.c)
 */

NTSTATUS __stdcall PsLookupProcessByProcessId(HANDLE ProcessId, PEPROCESS *Process)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v4; // rbx
  __int64 CurrentServerSilo; // rdi
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v4 = (unsigned __int64 *)PspReferenceCidTableEntry((__int64)ProcessId, 3);
  if ( v4 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( (*((_DWORD *)v4 + 193) & 0x4000000) == 0 )
    {
      _InterlockedOr(v7, 0);
      if ( (v4[91] & 1) != 0 )
        ExfAcquireReleasePushLockExclusive(v4 + 91);
      if ( (*((_DWORD *)v4 + 193) & 0x4000000) == 0 )
        goto LABEL_10;
    }
    if ( !PsIsProcessInSilo((struct _KPROCESS *)v4, CurrentServerSilo) )
    {
LABEL_10:
      ObfDereferenceObjectWithTag(v4, 0x746C6644u);
      v4 = 0LL;
    }
  }
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( !v4 )
    return -1073741813;
  *Process = (PEPROCESS)v4;
  return 0;
}
