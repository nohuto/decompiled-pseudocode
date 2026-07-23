/*
 * XREFs of SepRmCommandServerThread @ 0x1405A76C0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetHostSilo @ 0x140004290 (PsGetHostSilo.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     PsIsHostSilo @ 0x1400859F0 (PsIsHostSilo.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x1400AF180 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1400AF1A0 (PsAttachSiloToCurrentThread.c)
 *     SepRmProcessCreationCommandLineAuditSettingsWrkr @ 0x140132600 (SepRmProcessCreationCommandLineAuditSettingsWrkr.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwReplyWaitReceivePort @ 0x14017DA20 (ZwReplyWaitReceivePort.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     SepAdtInitLsaDeadEventForNonPagedList @ 0x14025D9E0 (SepAdtInitLsaDeadEventForNonPagedList.c)
 *     SepRmAddLogonSessionInfoWrkr @ 0x14058B2C0 (SepRmAddLogonSessionInfoWrkr.c)
 *     SepRmCreateLogonSessionWrkr @ 0x1405A7820 (SepRmCreateLogonSessionWrkr.c)
 *     SepRmDeleteLogonSessionWrkr @ 0x1405A79B0 (SepRmDeleteLogonSessionWrkr.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1405A7FC0 (SepRmGlobalSaclSetWrkr.c)
 *     SepRmSetAuditEventWrkr @ 0x1405E05A0 (SepRmSetAuditEventWrkr.c)
 *     SepRmLsaConnectRequest @ 0x1405EAF1C (SepRmLsaConnectRequest.c)
 *     SepRmCapUpdateWrkr @ 0x1405EB500 (SepRmCapUpdateWrkr.c)
 *     PoRequestShutdownEvent @ 0x1405EDE30 (PoRequestShutdownEvent.c)
 *     SepRmCleanupRmLsaState @ 0x14072805C (SepRmCleanupRmLsaState.c)
 *     SepRmInteractiveLogoffLogonSessionCompletedWrkr @ 0x14072F4E0 (SepRmInteractiveLogoffLogonSessionCompletedWrkr.c)
 *     SepRmInteractiveLogoffLogonSessionWrkr @ 0x14072F510 (SepRmInteractiveLogoffLogonSessionWrkr.c)
 *     SepRmMakeLogonSessionsSiblingsWrkr @ 0x14072F540 (SepRmMakeLogonSessionsSiblingsWrkr.c)
 *     SepRmSetSharedUserSessionWrkr @ 0x14072F580 (SepRmSetSharedUserSessionWrkr.c)
 *     SepRmValidateProcUniqueLuidWrkr @ 0x14072F5C0 (SepRmValidateProcUniqueLuidWrkr.c)
 *     SepAuditFailed @ 0x140731750 (SepAuditFailed.c)
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
  $0BA95B9F04EF63610C616F97FEAF73D6 v21; // [rsp+290h] [rbp+188h]
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
            do
            {
              v3 = ZwReplyWaitReceivePort(PortHandle, &PortContext, v2, &ReceiveMessage);
              v2 = 0LL;
            }
            while ( v3 == -1073741813 );
          }
          while ( v3 == -1073741823 || v3 == -1073741281 );
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
        ExAcquireResourceExclusiveLite(&stru_14038D730, 1u);
        qword_14038D7D0 = (__int64)&Event;
        v8 = SepLsaAuditQueueInfo == (_QWORD)&SepLsaAuditQueueInfo;
        ExReleaseResourceLite(&stru_14038D730);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        inited = SepAdtInitLsaDeadEventForNonPagedList((__int64)&Object);
        v10 = KeGetCurrentThread();
        v11 = inited;
        --v10->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&stru_14038D5F0, 1u);
        qword_14038D690 = (__int64)&v17;
        v12 = SepLsaDeletedLogonQueueInfo == (_QWORD)&SepLsaDeletedLogonQueueInfo;
        ExReleaseResourceLite(&stru_14038D5F0);
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
