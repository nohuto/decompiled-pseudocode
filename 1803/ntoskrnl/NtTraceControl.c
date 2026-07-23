/*
 * XREFs of NtTraceControl @ 0x14058F8F0
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140649BE0 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x140649F60 (PerfDiagpUpdateCKCLEnableFlags.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1407A115C (PerfDiagpSaveActiveDCLLogFileName.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x1400A1C70 (PsGetCurrentThreadProcessId.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpCreateActivityId @ 0x1400D3F84 (EtwpCreateActivityId.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     WdiUpdateSem @ 0x1402ACDC0 (WdiUpdateSem.c)
 *     EtwpGetCompressionSettings @ 0x1402B3ACC (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1402B3F8C (EtwpSetCompressionSettings.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     EtwpFlushTrace @ 0x140580054 (EtwpFlushTrace.c)
 *     EtwpTrackProviderBinary @ 0x140581C38 (EtwpTrackProviderBinary.c)
 *     EtwpStartTrace @ 0x140588150 (EtwpStartTrace.c)
 *     EtwpStopTrace @ 0x140589108 (EtwpStopTrace.c)
 *     EtwpNotifyGuid @ 0x14058B468 (EtwpNotifyGuid.c)
 *     EtwpValidateLoggerInfo @ 0x14058B828 (EtwpValidateLoggerInfo.c)
 *     EtwpQueryTrace @ 0x14058B85C (EtwpQueryTrace.c)
 *     EtwpEnableGuid @ 0x14058D2FC (EtwpEnableGuid.c)
 *     EtwpReceiveNotification @ 0x14058DD40 (EtwpReceiveNotification.c)
 *     EtwpAddNotificationEvent @ 0x14058E238 (EtwpAddNotificationEvent.c)
 *     EtwpRegisterUMGuid @ 0x140590090 (EtwpRegisterUMGuid.c)
 *     EtwpSetProviderTraitsUm @ 0x140590E6C (EtwpSetProviderTraitsUm.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     EtwpEnumerateTraceGuids @ 0x1405C09B8 (EtwpEnumerateTraceGuids.c)
 *     EtwpSendReplyDataBlock @ 0x1405C2FF4 (EtwpSendReplyDataBlock.c)
 *     EtwpReceiveReplyDataBlock @ 0x1405C3328 (EtwpReceiveReplyDataBlock.c)
 *     EtwpRealtimeConnect @ 0x1405E4288 (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x1405E6FA4 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     WdiDispatchControl @ 0x14060D450 (WdiDispatchControl.c)
 *     EtwpUpdateTrace @ 0x140629C7C (EtwpUpdateTrace.c)
 *     EtwpUpdateDisallowList @ 0x1407A5C30 (EtwpUpdateDisallowList.c)
 *     EtwpGetDisallowList @ 0x1407A5EC8 (EtwpGetDisallowList.c)
 *     EtwpGetTraceGroupInfo @ 0x1407A5FA4 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGroupList @ 0x1407A6214 (EtwpGetTraceGroupList.c)
 *     EtwpGetTraceGuidInfo @ 0x1407A62B4 (EtwpGetTraceGuidInfo.c)
 *     EtwpGetTraceGuidList @ 0x1407A6804 (EtwpGetTraceGuidList.c)
 *     EtwpUseDescriptorTypeUm @ 0x1407A68D0 (EtwpUseDescriptorTypeUm.c)
 *     EtwpQueryReferenceTime @ 0x1407A6958 (EtwpQueryReferenceTime.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1407B00D8 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpQuerySessionDemuxObject @ 0x1407B02D4 (EtwpQuerySessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x1407B0348 (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1407B05FC (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpSetProviderBinaryTracking @ 0x1407B2290 (EtwpSetProviderBinaryTracking.c)
 */

NTSTATUS __cdecl NtTraceControl(
        ETWTRACECONTROLCODE FunctionCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  unsigned __int64 v8; // rbx
  NTSTATUS Trace; // esi
  _QWORD *v10; // r13
  char PreviousMode; // di
  unsigned int v12; // r14d
  unsigned int v13; // eax
  PULONG v14; // rdi
  __int64 v15; // rcx
  int v16; // eax
  ULONG v17; // r12d
  ULONG v18; // r15d
  ULONG v19; // eax
  _QWORD *PoolWithQuotaTag; // rax
  unsigned int *v21; // rdx
  PVOID v22; // rcx
  __int64 v23; // rcx
  void *v25; // rcx
  unsigned int v26; // edx
  _QWORD *v27; // r9
  __int64 v28; // r8
  __int64 v29; // rdx
  char *v30; // r9
  _QWORD *CurrentServerSiloGlobals; // rax
  _WORD v32[2]; // [rsp+30h] [rbp-68h] BYREF
  size_t v33; // [rsp+34h] [rbp-64h] BYREF
  int v34; // [rsp+3Ch] [rbp-5Ch]
  __int64 v35; // [rsp+40h] [rbp-58h]
  _QWORD *v36; // [rsp+48h] [rbp-50h]
  __int64 v37; // [rsp+50h] [rbp-48h]
  void *v38; // [rsp+58h] [rbp-40h]

  v8 = (unsigned int)FunctionCode;
  Trace = 0;
  v10 = 0LL;
  v36 = 0LL;
  v33 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v35 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  LOBYTE(v12) = 0;
  if ( PreviousMode )
  {
    v12 = (unsigned int)v8 >> 31;
    v13 = v8 & 0x7FFFFFFF;
    if ( (v8 & 0x80000000) == 0LL )
      v13 = v8;
    v8 = v13;
    if ( InputBuffer )
    {
      if ( InputBufferLength
        && ((unsigned __int64)InputBuffer + InputBufferLength > 0x7FFFFFFF0000LL
         || (char *)InputBuffer + InputBufferLength < InputBuffer) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      InputBufferLength = 0;
    }
    if ( OutputBuffer )
      ProbeForWrite(OutputBuffer, OutputBufferLength, 1u);
    else
      OutputBufferLength = 0;
    v14 = ReturnLength;
    if ( !ReturnLength )
    {
      Trace = -1073741811;
      HIDWORD(v33) = -1073741811;
      goto LABEL_43;
    }
    v15 = (__int64)ReturnLength;
    if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    Trace = HIDWORD(v33);
  }
  else
  {
    v14 = ReturnLength;
  }
  if ( (unsigned int)v8 <= 0x1B )
  {
    v16 = 134238208;
    if ( _bittest(&v16, v8) )
    {
      v18 = OutputBufferLength;
      v17 = InputBufferLength;
LABEL_50:
      v21 = (unsigned int *)InputBuffer;
      goto LABEL_26;
    }
  }
  v17 = InputBufferLength;
  v18 = OutputBufferLength;
  if ( !InputBufferLength && !OutputBufferLength )
    goto LABEL_50;
  if ( InputBufferLength > OutputBufferLength )
    v19 = InputBufferLength;
  else
    v19 = OutputBufferLength;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v19, 0x50777445u);
  v10 = PoolWithQuotaTag;
  v36 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
  {
    Trace = -1073741801;
    goto LABEL_43;
  }
  memset(PoolWithQuotaTag, 0, OutputBufferLength);
  v21 = (unsigned int *)InputBuffer;
  if ( InputBuffer )
  {
    memmove(v10, InputBuffer, InputBufferLength);
    v21 = (unsigned int *)InputBuffer;
  }
LABEL_26:
  if ( (_DWORD)v8 != 15 )
  {
    if ( (_DWORD)v8 == 12 )
    {
      if ( v18 == 16 )
      {
        Trace = 0;
        EtwpCreateActivityId((volatile signed __int64 *)OutputBuffer);
        goto LABEL_31;
      }
    }
    else
    {
      if ( (_DWORD)v8 != 30 )
      {
        switch ( (int)v8 )
        {
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
            if ( v17 < 0xB0 || v18 < 0xB0 )
              goto LABEL_115;
            Trace = EtwpValidateLoggerInfo(v10);
            if ( Trace < 0 )
              goto LABEL_78;
            if ( *(_DWORD *)v10 > v17 )
            {
LABEL_115:
              Trace = -1073741306;
              goto LABEL_30;
            }
            Trace = 0;
LABEL_78:
            if ( Trace < 0 )
              goto LABEL_30;
            switch ( (_DWORD)v8 )
            {
              case 3:
                Trace = EtwpQueryTrace(v35, v10);
                break;
              case 1:
                *((_DWORD *)v10 + 20) = (unsigned __int8)v12 | v10[10] & 0xFFFFFFFE;
                Trace = EtwpStartTrace(v35, (__int64)v10);
                LODWORD(v33) = 176;
                goto LABEL_30;
              case 2:
                Trace = EtwpStopTrace(v35, (__int64)v10, 0);
                LODWORD(v33) = 176;
                goto LABEL_30;
              case 4:
                Trace = EtwpUpdateTrace(v35, v10);
                LODWORD(v33) = 176;
                goto LABEL_30;
              case 5:
                Trace = EtwpFlushTrace(v35, (__int64)v10);
                LODWORD(v33) = 176;
                goto LABEL_30;
            }
            LODWORD(v33) = 176;
            goto LABEL_30;
          case 11:
            if ( v17 != 96 || v18 != 96 )
              goto LABEL_113;
            Trace = EtwpRealtimeConnect(v10);
            LODWORD(v33) = 96;
            goto LABEL_30;
          case 13:
            if ( v17 != 48 || v18 )
              goto LABEL_113;
            Trace = WdiDispatchControl(v10);
            goto LABEL_30;
          case 14:
            if ( v17 != 8 || v18 )
              goto LABEL_113;
            v37 = *v21;
            Trace = EtwpRealtimeDisconnectConsumerByHandle();
            goto LABEL_30;
          case 16:
            if ( v17 || v18 - 72 > 0xFFB8 )
              goto LABEL_113;
            Trace = EtwpReceiveNotification(v10, v18, v12, &v33);
            goto LABEL_30;
          case 17:
            if ( v17 < 0x48 || v18 != 72 || *((_DWORD *)v10 + 1) != v17 )
              goto LABEL_113;
            if ( *(_DWORD *)v10 == 3 )
            {
              if ( v17 < 0x78 )
                goto LABEL_113;
              Trace = EtwpEnableGuid(v35, (__int64)v10, 1);
              LODWORD(v33) = 72;
            }
            else
            {
              Trace = EtwpNotifyGuid(v35, (__int64)v10, 1);
              LODWORD(v33) = 72;
            }
            goto LABEL_30;
          case 18:
            if ( v17 < 0x48 || *((_DWORD *)v10 + 1) != v17 )
              goto LABEL_113;
            *((_DWORD *)v10 + 9) = PsGetCurrentThreadProcessId();
            Trace = EtwpSendReplyDataBlock(v10);
            goto LABEL_30;
          case 19:
            if ( v17 != 8 )
              goto LABEL_113;
            Trace = EtwpReceiveReplyDataBlock(v10);
            LODWORD(v33) = v34;
            goto LABEL_30;
          case 20:
            if ( v17 || v18 )
              goto LABEL_113;
            Trace = WdiUpdateSem();
            goto LABEL_30;
          case 21:
            LODWORD(v33) = v18;
            Trace = EtwpGetTraceGuidList(v35, v10, &v33);
            goto LABEL_30;
          case 22:
            if ( v17 != 16 )
              goto LABEL_113;
            LODWORD(v33) = v18;
            Trace = EtwpGetTraceGuidInfo(v35, v10, v10, &v33);
            goto LABEL_30;
          case 23:
            LODWORD(v33) = v18;
            Trace = EtwpEnumerateTraceGuids(v35, v10, &v33);
            goto LABEL_30;
          case 24:
            if ( v17 || v18 )
              goto LABEL_113;
            if ( *(_DWORD *)(v35 + 4048) )
            {
              Trace = -1073741790;
            }
            else
            {
              *(_DWORD *)(v35 + 4048) = PsGetCurrentThreadProcessId();
              Trace = 0;
            }
            goto LABEL_30;
          case 25:
            if ( v17 != 4 || v18 != 16 )
              goto LABEL_113;
            Trace = EtwpQueryReferenceTime(v35, *(unsigned int *)v10, v10);
            LODWORD(v33) = 16;
            goto LABEL_30;
          case 26:
            if ( v17 != 8 )
              goto LABEL_113;
            Trace = EtwpTrackProviderBinary(v35, (HANDLE *)v10);
            LODWORD(v33) = 0;
            goto LABEL_30;
          case 27:
            if ( v17 != 4 )
              goto LABEL_113;
            v25 = (void *)*v21;
            v38 = v25;
            if ( !v25 )
              goto LABEL_113;
            Trace = EtwpAddNotificationEvent(v25, v12);
            goto LABEL_30;
          case 28:
            if ( v17 < 8 )
              goto LABEL_113;
            v26 = *((_DWORD *)v10 + 1);
            if ( 16LL * v26 + 8 != v17 )
              goto LABEL_113;
            v27 = 0LL;
            if ( v26 )
              v27 = v10 + 1;
            Trace = EtwpUpdateDisallowList(v35, *(unsigned int *)v10, v26, v27);
            goto LABEL_30;
          case 31:
            if ( v17 != 16 || v18 )
              goto LABEL_113;
            Trace = EtwpUseDescriptorTypeUm(v10);
            goto LABEL_30;
          case 32:
            LODWORD(v33) = v18;
            Trace = EtwpGetTraceGroupList(v35, v10, &v33);
            goto LABEL_30;
          case 33:
            if ( v17 != 16 )
              goto LABEL_113;
            LODWORD(v33) = v18;
            Trace = EtwpGetTraceGroupInfo(v35, v10, v10, &v33);
            goto LABEL_30;
          case 34:
            if ( v17 != 8 )
              goto LABEL_113;
            LODWORD(v33) = v18;
            Trace = EtwpGetDisallowList(v35, v10, v10, &v33);
            goto LABEL_30;
          case 35:
            if ( v17 != 16 || v18 )
              goto LABEL_113;
            Trace = EtwpSetCompressionSettings((unsigned int *)v10);
            goto LABEL_30;
          case 36:
            if ( v17 != 8 || v18 != 16 )
              goto LABEL_113;
            LODWORD(v33) = 16;
            Trace = EtwpGetCompressionSettings((unsigned __int16 *)v10, (unsigned int *)v10);
            if ( !Trace )
              LODWORD(v33) = 16;
            goto LABEL_30;
          case 37:
            if ( v17 < 0xC )
              goto LABEL_113;
            v28 = *((unsigned __int16 *)v10 + 4);
            if ( (unsigned __int16)v28 > 0x10u )
              goto LABEL_113;
            v29 = *((unsigned int *)v10 + 1);
            if ( (unsigned int)(v29 - 1) <= 3 || 16LL * (unsigned __int16)v28 + 12 != v17 )
              goto LABEL_113;
            v30 = 0LL;
            if ( (_WORD)v28 )
              v30 = (char *)v10 + 12;
            EtwpUpdatePeriodicCaptureState(*(unsigned int *)v10, v29, v28, v30);
            goto LABEL_30;
          case 38:
            if ( v17 < 8 || (v17 & 7) != 0 || v18 < 2 )
              goto LABEL_113;
            Trace = EtwpGetPrivateSessionTraceHandle(v10, v17 >> 3, v32);
            if ( !Trace )
            {
              LODWORD(v33) = 2;
              *(_WORD *)v10 = v32[0];
            }
            goto LABEL_30;
          case 39:
            if ( v17 < 2 || v18 < 8 )
              goto LABEL_113;
            CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
            Trace = EtwpRegisterPrivateSession(
                      CurrentServerSiloGlobals[108],
                      *(unsigned __int16 *)v10,
                      (char *)v10 + 4,
                      v10);
            if ( !Trace )
              LODWORD(v33) = 8;
            goto LABEL_30;
          case 40:
            if ( v17 < 8 || v18 < 2 )
              goto LABEL_113;
            Trace = EtwpQuerySessionDemuxObject(*v10, v10);
            if ( !Trace )
              LODWORD(v33) = 2;
            goto LABEL_30;
          case 41:
            if ( v17 < 8 )
              goto LABEL_113;
            Trace = EtwpSetProviderBinaryTracking(v35, *(unsigned int *)v10, *((unsigned __int8 *)v10 + 4));
            goto LABEL_30;
          case 42:
            if ( v18 < 4 )
              goto LABEL_113;
            *(_DWORD *)v10 = *(_DWORD *)(v35 + 16);
            LODWORD(v33) = 4;
            Trace = 0;
            goto LABEL_30;
          default:
            Trace = -1073741808;
            goto LABEL_30;
        }
      }
      if ( v17 == 24 && v18 - 120 <= 0xFF88 )
      {
        Trace = EtwpSetProviderTraitsUm((_DWORD)v10, v18, (unsigned int)&v33);
        goto LABEL_30;
      }
    }
LABEL_113:
    Trace = -1073741811;
    goto LABEL_30;
  }
  if ( v17 != 160 || v18 - 160 > 0xFF60 )
    goto LABEL_113;
  Trace = EtwpRegisterUMGuid(v35, (_DWORD)v10, v18, (unsigned __int8)v12, (__int64)&v33);
LABEL_30:
  v22 = OutputBuffer;
LABEL_31:
  if ( Trace >= 0 )
  {
    if ( (_DWORD)v33 )
      memmove(v22, v10, (unsigned int)v33);
    *v14 = v33;
  }
  if ( Trace == -1073741789 && ((unsigned int)(v8 - 15) <= 1 || (unsigned int)(v8 - 21) <= 1)
    || (unsigned int)v8 <= 0x28 && (v23 = 0x1D700880000LL, _bittest64(&v23, v8)) )
  {
    *v14 = v33;
  }
LABEL_43:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return Trace;
}
