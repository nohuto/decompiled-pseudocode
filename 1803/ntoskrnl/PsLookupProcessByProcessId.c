/*
 * XREFs of PsLookupProcessByProcessId @ 0x14059A9C0
 * Callers:
 *     PfpRpControlRequestUpdate @ 0x1404913E4 (PfpRpControlRequestUpdate.c)
 *     PfpCopyEvent @ 0x1405293C0 (PfpCopyEvent.c)
 *     PsOpenProcess @ 0x14059A0D0 (PsOpenProcess.c)
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 *     PiUEventHandleVetoEvent @ 0x1405E5ED8 (PiUEventHandleVetoEvent.c)
 *     CmpDumpOneKeyBody @ 0x1405ED3EC (CmpDumpOneKeyBody.c)
 *     PopDiagTraceAppPowerMessage @ 0x1405EDBA0 (PopDiagTraceAppPowerMessage.c)
 *     EtwpProcessThreadImageRundown @ 0x140629158 (EtwpProcessThreadImageRundown.c)
 *     SeAuditProcessCreation @ 0x1406414B8 (SeAuditProcessCreation.c)
 *     PnpLogVetoInformation @ 0x140732698 (PnpLogVetoInformation.c)
 *     EtwpUpdatePerProcessTracing @ 0x1407A5C94 (EtwpUpdatePerProcessTracing.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1407B00D8 (EtwpGetPrivateSessionTraceHandle.c)
 *     ViCreateProcessCallbackInternal @ 0x140824FFC (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400C5D80 (ExfAcquireReleasePushLockExclusive.c)
 *     PsIsProcessInSilo @ 0x1400F0EC0 (PsIsProcessInSilo.c)
 *     PsGetCurrentServerSilo @ 0x1400F17B0 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     PspReferenceCidTableEntry @ 0x14059B080 (PspReferenceCidTableEntry.c)
 */

NTSTATUS __stdcall PsLookupProcessByProcessId(HANDLE ProcessId, PEPROCESS *Process)
{
  PEPROCESS *v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rbx
  __int64 CurrentServerSilo; // rax
  __int64 v6; // rbp
  bool v7; // zf
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = Process;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  LOBYTE(Process) = 3;
  v4 = PspReferenceCidTableEntry(ProcessId, Process);
  if ( v4 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    v6 = CurrentServerSilo;
    if ( (*(_DWORD *)(v4 + 772) & 0x4000000) != 0 )
    {
      if ( PsIsProcessInSilo((struct _KPROCESS *)v4, CurrentServerSilo) )
        goto LABEL_4;
LABEL_14:
      ObfDereferenceObjectWithTag((PVOID)v4, 0x746C6644u);
      v4 = 0LL;
      goto LABEL_4;
    }
    _InterlockedOr(v9, 0);
    if ( (*(_QWORD *)(v4 + 728) & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v4 + 728));
    if ( (*(_DWORD *)(v4 + 772) & 0x4000000) == 0 || !PsIsProcessInSilo((struct _KPROCESS *)v4, v6) )
      goto LABEL_14;
  }
LABEL_4:
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( !v4 )
    return -1073741813;
  *v2 = (PEPROCESS)v4;
  return 0;
}
