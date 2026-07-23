/*
 * XREFs of SepRmCommandServerThread @ 0x1406316F0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     PsGetHostSilo @ 0x14006CDB0 (PsGetHostSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x140073540 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140073560 (PsAttachSiloToCurrentThread.c)
 *     SepRmProcessCreationCommandLineAuditSettingsWrkr @ 0x1400D2E60 (SepRmProcessCreationCommandLineAuditSettingsWrkr.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     PsIsHostSilo @ 0x140108640 (PsIsHostSilo.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwReplyWaitReceivePort @ 0x1401A7620 (ZwReplyWaitReceivePort.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     SepAdtInitLsaDeadEventForNonPagedList @ 0x14029F2B8 (SepAdtInitLsaDeadEventForNonPagedList.c)
 *     SepRmCreateLogonSessionWrkr @ 0x14056A540 (SepRmCreateLogonSessionWrkr.c)
 *     SepRmAddLogonSessionInfoWrkr @ 0x140577900 (SepRmAddLogonSessionInfoWrkr.c)
 *     SepRmInteractiveLogoffLogonSessionCompletedWrkr @ 0x1405EE4F0 (SepRmInteractiveLogoffLogonSessionCompletedWrkr.c)
 *     SepRmInteractiveLogoffLogonSessionWrkr @ 0x1405EF3B0 (SepRmInteractiveLogoffLogonSessionWrkr.c)
 *     SepRmDeleteLogonSessionWrkr @ 0x1405F17E0 (SepRmDeleteLogonSessionWrkr.c)
 *     SepRmGlobalSaclSetWrkr @ 0x140631850 (SepRmGlobalSaclSetWrkr.c)
 *     SepRmCapUpdateWrkr @ 0x140631B80 (SepRmCapUpdateWrkr.c)
 *     SepRmSetAuditEventWrkr @ 0x140631C70 (SepRmSetAuditEventWrkr.c)
 *     SepRmLsaConnectRequest @ 0x140631D90 (SepRmLsaConnectRequest.c)
 *     PoRequestShutdownEvent @ 0x140632020 (PoRequestShutdownEvent.c)
 *     SepRmCleanupRmLsaState @ 0x14078C470 (SepRmCleanupRmLsaState.c)
 *     SepRmMakeLogonSessionsSiblingsWrkr @ 0x1407934D0 (SepRmMakeLogonSessionsSiblingsWrkr.c)
 *     SepRmSetSharedUserSessionWrkr @ 0x140793510 (SepRmSetSharedUserSessionWrkr.c)
 *     SepRmValidateProcUniqueLuidWrkr @ 0x140793550 (SepRmValidateProcUniqueLuidWrkr.c)
 *     SepAuditFailed @ 0x140795050 (SepAuditFailed.c)
 */

void __fastcall SepRmCommandServerThread(PVOID StartContext)
{
  NTSTATUS v1; // ebx
  _PORT_MESSAGE *v2; // rdi
  NTSTATUS v3; // eax
  void *HostSilo; // rbx
  __int16 v5; // ax
  __int64 v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  bool v8; // bl
  char inited; // al
  struct _KTHREAD *v10; // rcx
  char v11; // si
  bool v12; // r14
  char *ServerSiloGlobals; // rax
  PVOID PortContext; // [rsp+38h] [rbp-D0h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-C8h] BYREF
  struct _KEVENT Object; // [rsp+58h] [rbp-B0h] BYREF
  struct _KEVENT v17; // [rsp+70h] [rbp-98h] BYREF
  _PORT_MESSAGE ReceiveMessage; // [rsp+88h] [rbp-80h] BYREF
  int v19; // [rsp+B0h] [rbp-58h]
  _DWORD v20[2]; // [rsp+288h] [rbp+180h] BYREF
  $BC4EA57B2198FC1240006DB5E224C705 v21; // [rsp+290h] [rbp+188h]
  unsigned int MessageId; // [rsp+2A0h] [rbp+198h]

  SepRmLsaCallProcess = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
  ObfReferenceObject((PVOID)SepRmLsaCallProcess);
  v1 = PoRequestShutdownEvent(0LL);
  if ( v1 < 0 )
  {
    ZwClose(PortHandle);
    PortHandle = 0LL;
    SepAuditFailed((unsigned int)v1);
  }
  else
  {
    ReceiveMessage.u2.ZeroInit = 0;
    v20[1] = 0;
    v2 = 0LL;
    ReceiveMessage.u1.Length = 33554904;
    v20[0] = 33554904;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            v3 = ZwReplyWaitReceivePort(PortHandle, &PortContext, v2, &ReceiveMessage);
            v2 = 0LL;
          }
          while ( v3 < 0 && (v3 == -1073741823 || v3 == -1073741813 || v3 == -1073741281) );
          HostSilo = PortContext;
          if ( PortContext == (PVOID)-8LL )
          {
            HostSilo = (void *)PsGetHostSilo();
            PortContext = HostSilo;
          }
          v5 = ReceiveMessage.u2.s2.Type & 0x7FFF;
          ReceiveMessage.u2.s2.Type = v5;
          if ( v5 != 1 )
            break;
          if ( (unsigned int)(v19 - 1) <= 0xB )
          {
            v6 = PsAttachSiloToCurrentThread((__int64)HostSilo);
            ((void (__fastcall *)(_PORT_MESSAGE *, _DWORD *))SepRmCommandDispatch[v19])(&ReceiveMessage, v20);
            PsDetachSiloFromCurrentThread(v6);
            v2 = (_PORT_MESSAGE *)v20;
            MessageId = ReceiveMessage.MessageId;
            v21 = ReceiveMessage.8;
          }
        }
        if ( v5 == 5 )
          break;
        if ( v5 == 10 )
          SepRmLsaConnectRequest(&ReceiveMessage);
      }
      if ( PsIsHostSilo((__int64)HostSilo) )
      {
        SepRmAuditingEnabled = 0;
        KeInitializeEvent(&Event, NotificationEvent, 0);
        KeInitializeEvent(&v17, NotificationEvent, 0);
        KeInitializeEvent(&Object, NotificationEvent, 0);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&stru_1403D16A0, 1u);
        qword_1403D1740 = (__int64)&Event;
        v8 = SepLsaAuditQueueInfo == (_QWORD)&SepLsaAuditQueueInfo;
        ExReleaseResourceLite(&stru_1403D16A0);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        inited = SepAdtInitLsaDeadEventForNonPagedList((__int64)&Object);
        v10 = KeGetCurrentThread();
        v11 = inited;
        --v10->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&stru_1403D1580, 1u);
        qword_1403D1620 = (__int64)&v17;
        v12 = SepLsaDeletedLogonQueueInfo == (_QWORD)&SepLsaDeletedLogonQueueInfo;
        ExReleaseResourceLite(&stru_1403D1580);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        if ( !v8 )
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        if ( v11 )
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        if ( !v12 )
          KeWaitForSingleObject(&v17, Executive, 0, 0, 0LL);
        ZwClose(PortHandle);
        PortHandle = 0LL;
        HostSilo = PortContext;
      }
      ServerSiloGlobals = (char *)PsGetServerSiloGlobals((__int64)HostSilo);
      SepRmCleanupRmLsaState(ServerSiloGlobals + 784);
      if ( PsIsHostSilo((__int64)PortContext) )
        break;
      ObfDereferenceObjectWithTag(PortContext, 0x74536553u);
      PortContext = MmBadPointer;
    }
  }
}
