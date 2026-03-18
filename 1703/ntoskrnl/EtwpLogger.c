/*
 * XREFs of EtwpLogger @ 0x14054F910
 * Callers:
 *     <none>
 * Callees:
 *     EtwpRequestFlushTimer @ 0x14002AE2C (EtwpRequestFlushTimer.c)
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     PsDetachSiloFromCurrentThread @ 0x14006F590 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14006F5B0 (PsAttachSiloToCurrentThread.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     EtwpResetFlushTimer @ 0x140121FCC (EtwpResetFlushTimer.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     EtwpStopLoggerInstance @ 0x140434A54 (EtwpStopLoggerInstance.c)
 *     EtwpFreeLoggerContext @ 0x1404358CC (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x140435C9C (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpRealtimeSaveState @ 0x14045ECA8 (EtwpRealtimeSaveState.c)
 *     EtwpAdjustFreeBuffers @ 0x1404F1DEC (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x1404F1E3C (EtwpFlushActiveBuffers.c)
 *     EtwpFinalizeHeader @ 0x14054E348 (EtwpFinalizeHeader.c)
 *     EtwpRealtimeNotifyConsumers @ 0x14054E5D0 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x14054FCD8 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpRealtimeUpdateConsumers @ 0x14054FE00 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpRealtimeCreateLogfile @ 0x14054FF60 (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateLogFile @ 0x14055808C (EtwpCreateLogFile.c)
 *     EtwpEventWriteTemplateAdmin @ 0x14070DAC8 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateSession @ 0x14070DDE0 (EtwpEventWriteTemplateSession.c)
 *     EtwpEventWriteTemplateSessionEnd @ 0x14070DFCC (EtwpEventWriteTemplateSessionEnd.c)
 */

NTSTATUS __fastcall EtwpLogger(__int64 *a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rsi
  _SINGLE_LIST_ENTRY *v3; // r8
  __int64 v4; // r9
  int v5; // r14d
  void *v6; // rdx
  int v7; // r15d
  int Logfile; // edi
  int i; // eax
  NTSTATUS v10; // edi
  void *v11; // rdx
  bool v13; // si
  int v14; // eax
  int v15; // ebp
  int v16; // ecx
  int v17; // r8d
  int v18; // edx
  int v19; // r8d
  __int64 v20; // rcx
  PKWAIT_BLOCK WaitBlockArray; // [rsp+38h] [rbp-40h]
  PVOID Object; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-30h]
  __int64 v24; // [rsp+80h] [rbp+8h]

  v1 = a1[1];
  *(_QWORD *)(v1 + 48) = KeGetCurrentThread();
  v2 = PsAttachSiloToCurrentThread(*a1);
  v24 = v2;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 15, v3, v4);
  KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
  v23 = v1 + 504;
  Object = (PVOID)(v1 + 480);
  if ( !*(_DWORD *)(v1 + 320) )
    goto LABEL_29;
  do
  {
    v5 = 0;
    if ( KeWaitForMultipleObjects((*(_DWORD *)(v1 + 208) != 0) + 1, &Object, WaitAny, Executive, 0, 0, 0LL, 0LL) == 1 )
    {
      if ( (*(_DWORD *)(v1 + 820) & 0x400) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(v1 + 820), 0xAu);
      KeResetEvent((PRKEVENT)(v1 + 480));
      v5 = 1;
    }
    if ( EtwpFileSystemReady )
      _InterlockedOr((volatile signed __int32 *)(v1 + 816), 4u);
    EtwpAdjustFreeBuffers(v1);
    v7 = *(_DWORD *)(v1 + 820) & 4;
    if ( v7 )
    {
      if ( *(_DWORD *)(v1 + 208) )
        EtwpResetFlushTimer(v1, 1);
      v5 = 1;
    }
    if ( (*(_DWORD *)(v1 + 816) & 4) == 0 )
    {
      EtwpFlushActiveBuffers((unsigned int *)v1, v5);
      continue;
    }
    if ( (*(_DWORD *)(v1 + 820) & 0x80u) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 820), 0xFFFFFF7F);
      v6 = *(void **)(v1 + 800);
      if ( v6 )
        EtwpFinalizeHeader(v1, v6, 1);
    }
    if ( (*(_DWORD *)(v1 + 12) & 0x100) != 0 )
      _InterlockedOr((volatile signed __int32 *)(v1 + 816), 8u);
    else
      _InterlockedAnd((volatile signed __int32 *)(v1 + 816), 0xFFFFFFF7);
    if ( (*(_DWORD *)(v1 + 816) & 8) != 0 )
    {
      Logfile = EtwpRealtimeCreateLogfile(v1);
      if ( Logfile < 0 )
        goto LABEL_57;
      EtwpRealtimeUpdateConsumers(v1);
      EtwpRealtimeFlushSavedBuffers(v1);
      if ( *(_DWORD *)(v1 + 344) && *(_DWORD *)(v1 + 424) )
        EtwpRequestFlushTimer(v1, 0);
    }
    if ( (*(_DWORD *)(v1 + 820) & 0x40) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 820), 0xFFFFFFBF);
      EtwpRealtimeNotifyConsumers(v1);
    }
    if ( (*(_DWORD *)(v1 + 820) & 8) != 0 )
    {
      EtwpRealtimeDisconnectAllConsumers(v1);
      _InterlockedAnd((volatile signed __int32 *)(v1 + 820), 0xFFFFFFF7);
      *(_DWORD *)(v1 + 56) = 0;
      KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
    }
    if ( (*(_DWORD *)(v1 + 820) & 3) != 0 )
    {
      v13 = 1;
      if ( (*(_DWORD *)(v1 + 820) & 2) != 0 )
        v13 = *(_QWORD *)(v1 + 800) == 0LL;
      LOBYTE(v6) = 1;
      v14 = EtwpCreateLogFile(v1, v6);
      *(_DWORD *)(v1 + 56) = v14;
      Logfile = v14;
      if ( v14 < 0 )
      {
        v15 = *(_DWORD *)(v1 + 12);
        if ( (v15 & 8) != 0 )
        {
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED) )
            EtwpEventWriteTemplateAdmin(
              v16,
              (unsigned int)&ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED,
              v17,
              v1 + 136,
              v1 + 152,
              Logfile,
              v15);
        }
      }
      KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
      if ( Logfile < 0 && v13 )
        goto LABEL_57;
    }
    Logfile = EtwpFlushActiveBuffers((unsigned int *)v1, v5);
    if ( (*(_DWORD *)(v1 + 820) & 1) != 0 && Logfile >= 0 && !v5 )
      Logfile = EtwpFlushActiveBuffers((unsigned int *)v1, 1);
    if ( v7 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 820), 0xFFFFFFFB);
      *(_DWORD *)(v1 + 56) = Logfile;
      KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
    }
    if ( Logfile < 0 )
    {
LABEL_57:
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_END_FAILED) )
      {
        LODWORD(WaitBlockArray) = *(_DWORD *)(v1 + 60);
        EtwpEventWriteTemplateSessionEnd(
          v1 + 152,
          v18,
          v19,
          v1 + 136,
          v1 + 152,
          Logfile,
          *(_DWORD *)(v1 + 12),
          WaitBlockArray,
          Object,
          v23);
      }
      *(_DWORD *)(v1 + 56) = Logfile;
      EtwpStopLoggerInstance(v1);
    }
  }
  while ( *(_DWORD *)(v1 + 320) );
  v2 = v24;
LABEL_29:
  for ( i = EtwpFlushActiveBuffers((unsigned int *)v1, 1); ; i = EtwpFlushActiveBuffers((unsigned int *)v1, 1) )
  {
    v10 = i;
    if ( i < 0 )
      break;
    if ( i == 259 )
    {
      if ( (*(_DWORD *)(v1 + 816) & 8) == 0 || (v10 = 0, *(_QWORD *)(v1 + 360)) )
        v10 = -1073741823;
      break;
    }
    if ( *(int *)(v1 + 232) <= 0 || *(_DWORD *)(v1 + 232) <= *(_DWORD *)(v1 + 228) )
      break;
    KeWaitForSingleObject((PVOID)(v1 + 480), Executive, 0, 0, (PLARGE_INTEGER)&EtwpOneSecond);
  }
  v11 = *(void **)(v1 + 800);
  if ( v11 )
  {
    EtwpFinalizeHeader(v1, v11, 0);
    ZwClose(*(HANDLE *)(v1 + 800));
    *(_QWORD *)(v1 + 800) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 360) )
  {
    EtwpRealtimeSaveState(v1);
    ZwClose(*(HANDLE *)(v1 + 360));
    *(_QWORD *)(v1 + 360) = 0LL;
  }
  *(_DWORD *)(v1 + 56) = v10;
  KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
  if ( v10 < 0 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
    EtwpEventWriteTemplateSession(v20, &ETW_EVENT_STOP_TRACE, v1);
  EtwpFreeLoggerContext((char *)v1);
  PsDetachSiloFromCurrentThread(v2);
  return PsTerminateSystemThread(v10);
}
