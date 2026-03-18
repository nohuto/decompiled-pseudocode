/*
 * XREFs of EtwpLogger @ 0x140531E30
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14006B570 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x1400AF180 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1400AF1A0 (PsAttachSiloToCurrentThread.c)
 *     EtwpResetFlushTimer @ 0x1400E09B8 (EtwpResetFlushTimer.c)
 *     EtwpRequestFlushTimer @ 0x1400E0C64 (EtwpRequestFlushTimer.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     EtwpStopLoggerInstance @ 0x1404F0374 (EtwpStopLoggerInstance.c)
 *     EtwpAdjustFreeBuffers @ 0x140532278 (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x1405322C8 (EtwpFlushActiveBuffers.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x14053282C (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpRealtimeUpdateConsumers @ 0x140532954 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpRealtimeCreateLogfile @ 0x140532AB0 (EtwpRealtimeCreateLogfile.c)
 *     EtwpFinalizeHeader @ 0x1405776D0 (EtwpFinalizeHeader.c)
 *     EtwpRealtimeNotifyConsumers @ 0x140577AFC (EtwpRealtimeNotifyConsumers.c)
 *     EtwpCreateLogFile @ 0x140577D70 (EtwpCreateLogFile.c)
 *     EtwpFreeLoggerContext @ 0x14058E0D4 (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x14058E65C (EtwpRealtimeDisconnectAllConsumers.c)
 *     PsTerminateSystemThread @ 0x140599300 (PsTerminateSystemThread.c)
 *     EtwpEventWriteTemplateSessionEnd @ 0x14059F2EC (EtwpEventWriteTemplateSessionEnd.c)
 *     EtwpEventWriteTemplateAdmin @ 0x14074943C (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateSession @ 0x140749674 (EtwpEventWriteTemplateSession.c)
 *     EtwpRealtimeSaveState @ 0x140752394 (EtwpRealtimeSaveState.c)
 */

NTSTATUS __fastcall EtwpLogger(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  _SINGLE_LIST_ENTRY *v3; // r8
  __int64 v4; // r9
  unsigned int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // r15d
  int Logfile; // edi
  int i; // eax
  NTSTATUS v11; // edi
  __int64 v12; // rdx
  bool v14; // si
  int v15; // eax
  int v16; // edx
  int v17; // r8d
  __int64 v18; // rcx
  int v19; // ebp
  int v20; // ecx
  int v21; // r8d
  PVOID Object[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v23; // [rsp+80h] [rbp+8h]

  v1 = a1[1];
  *(_QWORD *)(v1 + 48) = KeGetCurrentThread();
  v2 = PsAttachSiloToCurrentThread(*a1);
  v23 = v2;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 15, v3, v4);
  KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
  Object[1] = (PVOID)(v1 + 520);
  Object[0] = (PVOID)(v1 + 496);
  if ( !*(_DWORD *)(v1 + 336) )
    goto LABEL_29;
  do
  {
    v5 = 0;
    if ( KeWaitForMultipleObjects((*(_DWORD *)(v1 + 224) != 0) + 1, Object, WaitAny, Executive, 0, 0, 0LL, 0LL) == 1 )
    {
      if ( (*(_DWORD *)(v1 + 836) & 0x400) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(v1 + 836), 0xAu);
      KeResetEvent((PRKEVENT)(v1 + 496));
      v5 = 1;
    }
    if ( EtwpFileSystemReady )
      _InterlockedOr((volatile signed __int32 *)(v1 + 832), 4u);
    EtwpAdjustFreeBuffers(v1);
    v8 = *(_DWORD *)(v1 + 836) & 4;
    if ( v8 )
    {
      if ( *(_DWORD *)(v1 + 224) )
        EtwpResetFlushTimer(v1, 1);
      v5 = 1;
    }
    if ( (*(_DWORD *)(v1 + 832) & 4) == 0 )
    {
      EtwpFlushActiveBuffers(v1, v5);
      continue;
    }
    if ( (*(_DWORD *)(v1 + 836) & 0x80u) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 836), 0xFFFFFF7F);
      v6 = *(_QWORD *)(v1 + 816);
      if ( v6 )
      {
        LOBYTE(v7) = 1;
        EtwpFinalizeHeader(v1, v6, v7);
      }
    }
    if ( (*(_DWORD *)(v1 + 12) & 0x100) != 0 )
      _InterlockedOr((volatile signed __int32 *)(v1 + 832), 8u);
    else
      _InterlockedAnd((volatile signed __int32 *)(v1 + 832), 0xFFFFFFF7);
    if ( (*(_DWORD *)(v1 + 832) & 8) != 0 )
    {
      Logfile = EtwpRealtimeCreateLogfile(v1);
      if ( Logfile < 0 )
        goto LABEL_55;
      EtwpRealtimeUpdateConsumers(v1);
      EtwpRealtimeFlushSavedBuffers(v1);
      if ( *(_DWORD *)(v1 + 360) && *(_DWORD *)(v1 + 440) )
        EtwpRequestFlushTimer(v1, 0);
    }
    if ( (*(_DWORD *)(v1 + 836) & 0x40) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 836), 0xFFFFFFBF);
      EtwpRealtimeNotifyConsumers(v1);
    }
    if ( (*(_DWORD *)(v1 + 836) & 8) != 0 )
    {
      EtwpRealtimeDisconnectAllConsumers(v1);
      _InterlockedAnd((volatile signed __int32 *)(v1 + 836), 0xFFFFFFF7);
      *(_DWORD *)(v1 + 56) = 0;
      KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
    }
    if ( (*(_DWORD *)(v1 + 836) & 3) != 0 )
    {
      v14 = 1;
      if ( (*(_DWORD *)(v1 + 836) & 2) != 0 )
        v14 = *(_QWORD *)(v1 + 816) == 0LL;
      LOBYTE(v6) = 1;
      v15 = EtwpCreateLogFile(v1, v6);
      *(_DWORD *)(v1 + 56) = v15;
      Logfile = v15;
      if ( v15 < 0 )
      {
        v19 = *(_DWORD *)(v1 + 12);
        if ( (v19 & 8) != 0 )
        {
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED) )
            EtwpEventWriteTemplateAdmin(
              v20,
              (unsigned int)&ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED,
              v21,
              v1 + 152,
              v1 + 168,
              Logfile,
              v19);
        }
      }
      KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
      if ( Logfile < 0 && v14 )
        goto LABEL_55;
    }
    Logfile = EtwpFlushActiveBuffers(v1, v5);
    if ( (*(_DWORD *)(v1 + 836) & 1) != 0 && Logfile >= 0 && !v5 )
      Logfile = EtwpFlushActiveBuffers(v1, 1LL);
    if ( v8 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 836), 0xFFFFFFFB);
      *(_DWORD *)(v1 + 56) = Logfile;
      KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
    }
    if ( Logfile < 0 )
    {
LABEL_55:
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_END_FAILED) )
        EtwpEventWriteTemplateSessionEnd(
          v1 + 168,
          v16,
          v17,
          v1 + 152,
          v1 + 168,
          Logfile,
          *(_DWORD *)(v1 + 12),
          *(_DWORD *)(v1 + 60));
      *(_DWORD *)(v1 + 56) = Logfile;
      EtwpStopLoggerInstance(v1);
    }
  }
  while ( *(_DWORD *)(v1 + 336) );
  v2 = v23;
LABEL_29:
  for ( i = EtwpFlushActiveBuffers(v1, 1LL); ; i = EtwpFlushActiveBuffers(v1, 1LL) )
  {
    v11 = i;
    if ( i < 0 )
      break;
    if ( i == 259 )
    {
      if ( (*(_DWORD *)(v1 + 832) & 8) == 0 || (v11 = 0, *(_QWORD *)(v1 + 376)) )
        v11 = -1073741823;
      break;
    }
    if ( *(int *)(v1 + 248) <= 0 || *(_DWORD *)(v1 + 248) <= *(_DWORD *)(v1 + 244) )
      break;
    KeWaitForSingleObject((PVOID)(v1 + 496), Executive, 0, 0, (PLARGE_INTEGER)&EtwpOneSecond);
  }
  v12 = *(_QWORD *)(v1 + 816);
  if ( v12 )
  {
    EtwpFinalizeHeader(v1, v12, 0LL);
    ZwClose(*(HANDLE *)(v1 + 816));
    *(_QWORD *)(v1 + 816) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 376) )
  {
    EtwpRealtimeSaveState(v1);
    ZwClose(*(HANDLE *)(v1 + 376));
    *(_QWORD *)(v1 + 376) = 0LL;
  }
  *(_DWORD *)(v1 + 56) = v11;
  KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
  if ( v11 < 0 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
    EtwpEventWriteTemplateSession(v18, &ETW_EVENT_STOP_TRACE, v1);
  EtwpFreeLoggerContext((PVOID)v1);
  PsDetachSiloFromCurrentThread(v2);
  return PsTerminateSystemThread(v11);
}
