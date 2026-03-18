/*
 * XREFs of EtwpLogger @ 0x14058EB20
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     PsDetachSiloFromCurrentThread @ 0x140073540 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140073560 (PsAttachSiloToCurrentThread.c)
 *     EtwpResetFlushTimer @ 0x1400D3E40 (EtwpResetFlushTimer.c)
 *     EtwpRequestFlushTimer @ 0x1400D3EF8 (EtwpRequestFlushTimer.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1400FF3A0 (KeWaitForMultipleObjects.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     EtwpEventWriteTemplateSessionEnd @ 0x14048BB4C (EtwpEventWriteTemplateSessionEnd.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x140493708 (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpFreeLoggerContext @ 0x140493884 (EtwpFreeLoggerContext.c)
 *     PsTerminateSystemThread @ 0x140582610 (PsTerminateSystemThread.c)
 *     EtwpFinalizeHeader @ 0x1405879E8 (EtwpFinalizeHeader.c)
 *     EtwpStopLoggerInstance @ 0x140587E20 (EtwpStopLoggerInstance.c)
 *     EtwpRealtimeNotifyConsumers @ 0x140587F34 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpCreateLogFile @ 0x1405884D0 (EtwpCreateLogFile.c)
 *     EtwpRealtimeCreateLogfile @ 0x14058E69C (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeUpdateConsumers @ 0x14058E8A0 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x14058E9F8 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpAdjustFreeBuffers @ 0x14058F250 (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x140591300 (EtwpFlushActiveBuffers.c)
 *     EtwpRealtimeSaveState @ 0x1405C3F44 (EtwpRealtimeSaveState.c)
 *     EtwpEventWriteTemplateAdmin @ 0x1407AB108 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateSession @ 0x1407AB340 (EtwpEventWriteTemplateSession.c)
 */

NTSTATUS __fastcall EtwpLogger(__int64 *a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rsi
  unsigned int v3; // r14d
  int v4; // r15d
  int Logfile; // edi
  int i; // eax
  NTSTATUS v7; // edi
  void *v8; // rdx
  void *v10; // rdx
  bool v11; // si
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  int v16; // ebp
  int v17; // ecx
  int v18; // r8d
  PVOID Object[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v20; // [rsp+80h] [rbp+8h]

  v1 = a1[1];
  *(_QWORD *)(v1 + 48) = KeGetCurrentThread();
  v2 = PsAttachSiloToCurrentThread(*a1);
  v20 = v2;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 15LL);
  KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
  Object[1] = (PVOID)(v1 + 520);
  Object[0] = (PVOID)(v1 + 496);
  if ( !*(_DWORD *)(v1 + 336) )
    goto LABEL_29;
  do
  {
    v3 = 0;
    if ( KeWaitForMultipleObjects((*(_DWORD *)(v1 + 224) != 0) + 1, Object, WaitAny, Executive, 0, 0, 0LL, 0LL) == 1 )
    {
      if ( (*(_DWORD *)(v1 + 836) & 0x400) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(v1 + 836), 0xAu);
      KeResetEvent((PRKEVENT)(v1 + 496));
      v3 = 1;
    }
    if ( EtwpFileSystemReady )
      _InterlockedOr((volatile signed __int32 *)(v1 + 832), 4u);
    EtwpAdjustFreeBuffers(v1);
    v4 = *(_DWORD *)(v1 + 836) & 4;
    if ( v4 )
    {
      if ( *(_DWORD *)(v1 + 224) )
        EtwpResetFlushTimer(v1, 1);
      v3 = 1;
    }
    if ( (*(_DWORD *)(v1 + 832) & 4) == 0 )
    {
      EtwpFlushActiveBuffers(v1, v3);
      continue;
    }
    if ( (*(_DWORD *)(v1 + 836) & 0x80u) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 836), 0xFFFFFF7F);
      v10 = *(void **)(v1 + 816);
      if ( v10 )
        EtwpFinalizeHeader(v1, v10, 1);
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
      v11 = 1;
      if ( (*(_DWORD *)(v1 + 836) & 2) != 0 )
        v11 = *(_QWORD *)(v1 + 816) == 0LL;
      v12 = EtwpCreateLogFile(v1, 1);
      *(_DWORD *)(v1 + 56) = v12;
      Logfile = v12;
      if ( v12 < 0 )
      {
        v16 = *(_DWORD *)(v1 + 12);
        if ( (v16 & 8) != 0 )
        {
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED) )
            EtwpEventWriteTemplateAdmin(
              v17,
              (unsigned int)&ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED,
              v18,
              v1 + 152,
              v1 + 168,
              Logfile,
              v16);
        }
      }
      KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
      if ( Logfile < 0 && v11 )
        goto LABEL_55;
    }
    Logfile = EtwpFlushActiveBuffers(v1, v3);
    if ( (*(_DWORD *)(v1 + 836) & 1) != 0 && Logfile >= 0 && !v3 )
      Logfile = EtwpFlushActiveBuffers(v1, 1LL);
    if ( v4 )
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
          v13,
          v14,
          (unsigned __int16 *)(v1 + 152),
          (unsigned __int16 *)(v1 + 168),
          Logfile,
          *(_DWORD *)(v1 + 12),
          *(_DWORD *)(v1 + 60));
      *(_DWORD *)(v1 + 56) = Logfile;
      EtwpStopLoggerInstance(v1);
    }
  }
  while ( *(_DWORD *)(v1 + 336) );
  v2 = v20;
LABEL_29:
  for ( i = EtwpFlushActiveBuffers(v1, 1LL); ; i = EtwpFlushActiveBuffers(v1, 1LL) )
  {
    v7 = i;
    if ( i < 0 )
      break;
    if ( i == 259 )
    {
      if ( (*(_DWORD *)(v1 + 832) & 8) == 0 || (v7 = 0, *(_QWORD *)(v1 + 376)) )
        v7 = -1073741823;
      break;
    }
    if ( *(int *)(v1 + 248) <= 0 || *(_DWORD *)(v1 + 248) <= *(_DWORD *)(v1 + 244) )
      break;
    KeWaitForSingleObject((PVOID)(v1 + 496), Executive, 0, 0, (PLARGE_INTEGER)&EtwpOneSecond);
  }
  v8 = *(void **)(v1 + 816);
  if ( v8 )
  {
    EtwpFinalizeHeader(v1, v8, 0);
    ZwClose(*(HANDLE *)(v1 + 816));
    *(_QWORD *)(v1 + 816) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 376) )
  {
    EtwpRealtimeSaveState(v1);
    ZwClose(*(HANDLE *)(v1 + 376));
    *(_QWORD *)(v1 + 376) = 0LL;
  }
  *(_DWORD *)(v1 + 56) = v7;
  KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
  if ( v7 < 0 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
    EtwpEventWriteTemplateSession(v15, &ETW_EVENT_STOP_TRACE, v1);
  EtwpFreeLoggerContext((char *)v1);
  PsDetachSiloFromCurrentThread(v2);
  return PsTerminateSystemThread(v7);
}
