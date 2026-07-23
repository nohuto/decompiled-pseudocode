/*
 * XREFs of NtTraceControl @ 0x14047FD70
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14045C280 (PerfDiagpProxyWorker.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140578618 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x1405D6650 (PerfDiagpUpdateCKCLEnableFlags.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpCreateActivityId @ 0x140024728 (EtwpCreateActivityId.c)
 *     PsGetCurrentThreadProcessId @ 0x14003C360 (PsGetCurrentThreadProcessId.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     WdiUpdateSem @ 0x1402526B0 (WdiUpdateSem.c)
 *     EtwpGetCompressionSettings @ 0x140257DD8 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x140258294 (EtwpSetCompressionSettings.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpSendReplyDataBlock @ 0x140428FA0 (EtwpSendReplyDataBlock.c)
 *     EtwpStopTrace @ 0x140434854 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x140451AD4 (EtwpFlushTrace.c)
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x140451C08 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpRealtimeConnect @ 0x140451D24 (EtwpRealtimeConnect.c)
 *     EtwpGetTraceGuidInfo @ 0x140454F48 (EtwpGetTraceGuidInfo.c)
 *     EtwpTrackProviderBinary @ 0x14045A320 (EtwpTrackProviderBinary.c)
 *     EtwpReceiveReplyDataBlock @ 0x14045BE80 (EtwpReceiveReplyDataBlock.c)
 *     EtwpStartTrace @ 0x14045C080 (EtwpStartTrace.c)
 *     WdiDispatchControl @ 0x14046748C (WdiDispatchControl.c)
 *     EtwpRegisterUMGuid @ 0x140480530 (EtwpRegisterUMGuid.c)
 *     EtwpSetProviderTraitsUm @ 0x1404F22A0 (EtwpSetProviderTraitsUm.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     EtwpQueryTrace @ 0x1405515A4 (EtwpQueryTrace.c)
 *     EtwpValidateLoggerInfo @ 0x140551754 (EtwpValidateLoggerInfo.c)
 *     EtwpNotifyGuid @ 0x140551CB4 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x140552C6C (EtwpEnableGuid.c)
 *     EtwpAddNotificationEvent @ 0x140553534 (EtwpAddNotificationEvent.c)
 *     EtwpReceiveNotification @ 0x140553BEC (EtwpReceiveNotification.c)
 *     EtwpEnumerateTraceGuids @ 0x14056B218 (EtwpEnumerateTraceGuids.c)
 *     EtwpUpdateDisallowList @ 0x1405C7C60 (EtwpUpdateDisallowList.c)
 *     EtwpUpdateTrace @ 0x1405D8AE8 (EtwpUpdateTrace.c)
 *     EtwpGetDisallowList @ 0x140709FDC (EtwpGetDisallowList.c)
 *     EtwpGetTraceGroupInfo @ 0x14070A0B8 (EtwpGetTraceGroupInfo.c)
 *     EtwpGetTraceGroupList @ 0x14070A32C (EtwpGetTraceGroupList.c)
 *     EtwpGetTraceGuidList @ 0x14070A3CC (EtwpGetTraceGuidList.c)
 *     EtwpUseDescriptorTypeUm @ 0x14070A468 (EtwpUseDescriptorTypeUm.c)
 *     EtwpQueryReferenceTime @ 0x14070A4D0 (EtwpQueryReferenceTime.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14071172C (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpQuerySessionDemuxObject @ 0x140711910 (EtwpQuerySessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x140711984 (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x140711C20 (EtwpUpdatePeriodicCaptureState.c)
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
  _QWORD *v9; // r14
  char PreviousMode; // di
  NTSTATUS TraceGuidList; // esi
  PULONG v12; // rdi
  __int64 v13; // rcx
  int v14; // eax
  ULONG v15; // r12d
  ULONG v16; // r15d
  ULONG v17; // eax
  _QWORD *PoolWithQuotaTag; // rax
  unsigned int *v19; // rdx
  NTSTATUS updated; // eax
  __int64 v21; // rcx
  unsigned __int64 v23; // r8
  __int64 v24; // rcx
  NTSTATUS Trace; // eax
  void *v26; // rcx
  unsigned int v27; // edx
  _QWORD *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  char *v31; // r9
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned int v33; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int8 v34; // [rsp+34h] [rbp-74h]
  __int64 v35; // [rsp+38h] [rbp-70h]
  _WORD v36[2]; // [rsp+40h] [rbp-68h] BYREF
  int v37; // [rsp+44h] [rbp-64h]
  _QWORD *v38; // [rsp+48h] [rbp-60h]
  unsigned int v39; // [rsp+50h] [rbp-58h] BYREF
  void *v40; // [rsp+58h] [rbp-50h]
  __int64 v41; // [rsp+60h] [rbp-48h]

  v8 = (unsigned int)FunctionCode;
  v9 = 0LL;
  v38 = 0LL;
  v33 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v35 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  TraceGuidList = 0;
  v37 = 0;
  v34 = 0;
  if ( PreviousMode )
  {
    if ( (v8 & 0x80000000) != 0LL )
    {
      LODWORD(v8) = v8 & 0x7FFFFFFF;
      v34 = 1;
    }
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
    v12 = ReturnLength;
    if ( !ReturnLength )
    {
      TraceGuidList = -1073741811;
      v37 = -1073741811;
      goto LABEL_43;
    }
    v13 = (__int64)ReturnLength;
    if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v13 = *(_DWORD *)v13;
    TraceGuidList = v37;
  }
  else
  {
    v12 = ReturnLength;
  }
  if ( (unsigned int)v8 <= 0x1B )
  {
    v14 = 134238208;
    if ( _bittest(&v14, v8) )
    {
      v16 = OutputBufferLength;
      v15 = InputBufferLength;
LABEL_51:
      v19 = (unsigned int *)InputBuffer;
      goto LABEL_26;
    }
  }
  v15 = InputBufferLength;
  v16 = OutputBufferLength;
  if ( !InputBufferLength && !OutputBufferLength )
    goto LABEL_51;
  if ( InputBufferLength > OutputBufferLength )
    v17 = InputBufferLength;
  else
    v17 = OutputBufferLength;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v17, 0x50777445u);
  v9 = PoolWithQuotaTag;
  v38 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
  {
    TraceGuidList = -1073741801;
    goto LABEL_43;
  }
  memset(PoolWithQuotaTag, 0, OutputBufferLength);
  v19 = (unsigned int *)InputBuffer;
  if ( InputBuffer )
  {
    memmove(v9, InputBuffer, InputBufferLength);
    v19 = (unsigned int *)InputBuffer;
  }
LABEL_26:
  if ( (_DWORD)v8 != 15 )
  {
    if ( (_DWORD)v8 == 30 )
    {
      if ( v15 == 24 && v16 - 120 <= 0xFF88 )
      {
        updated = EtwpSetProviderTraitsUm(v9, v16, &v33);
        goto LABEL_30;
      }
LABEL_120:
      TraceGuidList = -1073741811;
      goto LABEL_31;
    }
    if ( (_DWORD)v8 == 12 )
    {
      if ( v16 == 16 )
      {
        TraceGuidList = 0;
        EtwpCreateActivityId((volatile signed __int64 *)OutputBuffer);
        goto LABEL_31;
      }
      goto LABEL_120;
    }
    v23 = 0x140000000uLL;
    switch ( (int)v8 )
    {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
        if ( v15 < 0xB0 || v16 < 0xB0 )
          goto LABEL_122;
        TraceGuidList = EtwpValidateLoggerInfo(v9);
        if ( TraceGuidList < 0 )
          goto LABEL_69;
        if ( *(_DWORD *)v9 > v15 )
        {
LABEL_122:
          TraceGuidList = -1073741306;
          goto LABEL_31;
        }
        TraceGuidList = 0;
LABEL_69:
        if ( TraceGuidList < 0 )
          goto LABEL_31;
        switch ( (_DWORD)v8 )
        {
          case 3:
            Trace = EtwpQueryTrace(v35, v9);
            break;
          case 1:
            *((_DWORD *)v9 + 20) = v34 | v9[10] & 0xFFFFFFFE;
            Trace = EtwpStartTrace(v35, (__int64)v9);
            break;
          case 2:
            Trace = EtwpStopTrace(v35, (__int64)v9, 0);
            break;
          case 4:
            Trace = EtwpUpdateTrace(v35, v9);
            break;
          case 5:
            Trace = EtwpFlushTrace(v35, (__int64)v9);
            break;
          default:
            goto LABEL_73;
        }
        TraceGuidList = Trace;
LABEL_73:
        v33 = 176;
        goto LABEL_31;
      case 11:
        if ( v15 != 96 || v16 != 96 )
          goto LABEL_120;
        updated = EtwpRealtimeConnect((int *)v9);
        v33 = 96;
        goto LABEL_30;
      case 13:
        if ( v15 != 48 || v16 )
          goto LABEL_120;
        updated = WdiDispatchControl((unsigned int *)v9);
        goto LABEL_30;
      case 14:
        if ( v15 != 8 || v16 )
          goto LABEL_120;
        v26 = (void *)*v19;
        v40 = v26;
        TraceGuidList = EtwpRealtimeDisconnectConsumerByHandle(v26);
        goto LABEL_31;
      case 16:
        if ( v15 || v16 - 72 > 0xFFB8 )
          goto LABEL_120;
        updated = EtwpReceiveNotification(v9);
        goto LABEL_30;
      case 17:
        if ( v15 < 0x48 || v16 != 72 || *((_DWORD *)v9 + 1) != v15 )
          goto LABEL_120;
        if ( *(_DWORD *)v9 == 3 )
        {
          if ( v15 < 0x78 )
            goto LABEL_120;
          LOBYTE(v23) = 1;
          updated = EtwpEnableGuid(v35, v9, v23);
          v33 = 72;
        }
        else
        {
          LOBYTE(v23) = 1;
          updated = EtwpNotifyGuid(v35, v9, v23);
          v33 = 72;
        }
        goto LABEL_30;
      case 18:
        if ( v15 < 0x48 || *((_DWORD *)v9 + 1) != v15 )
          goto LABEL_120;
        *((_DWORD *)v9 + 9) = PsGetCurrentThreadProcessId();
        updated = EtwpSendReplyDataBlock((__int64)v9);
        goto LABEL_30;
      case 19:
        if ( v15 != 8 )
          goto LABEL_120;
        TraceGuidList = EtwpReceiveReplyDataBlock((unsigned int *)v9, v16, &v39);
        v33 = v39;
        goto LABEL_31;
      case 20:
        if ( v15 || v16 )
          goto LABEL_120;
        updated = WdiUpdateSem();
        goto LABEL_30;
      case 21:
        v33 = v16;
        TraceGuidList = EtwpGetTraceGuidList(v35, v9, &v33);
        goto LABEL_31;
      case 22:
        if ( v15 != 16 )
          goto LABEL_120;
        v33 = v16;
        updated = EtwpGetTraceGuidInfo(v35, v9, (int *)v9, (int *)&v33);
        goto LABEL_30;
      case 23:
        v33 = v16;
        TraceGuidList = EtwpEnumerateTraceGuids(v35, v9, &v33);
        goto LABEL_31;
      case 24:
        if ( v15 || v16 )
          goto LABEL_120;
        if ( *(_DWORD *)(v35 + 5040) )
        {
          TraceGuidList = -1073741790;
        }
        else
        {
          *(_DWORD *)(v35 + 5040) = PsGetCurrentThreadProcessId();
          TraceGuidList = 0;
        }
        goto LABEL_31;
      case 25:
        if ( v15 != 4 || v16 != 16 )
          goto LABEL_120;
        updated = EtwpQueryReferenceTime(v35, *(unsigned int *)v9, v9);
        v33 = 16;
        goto LABEL_30;
      case 26:
        if ( v15 != 8 )
          goto LABEL_120;
        updated = EtwpTrackProviderBinary(v35, (HANDLE *)v9);
        v33 = 0;
        goto LABEL_30;
      case 27:
        if ( v15 != 4 )
          goto LABEL_120;
        v24 = *v19;
        v41 = v24;
        if ( !v24 )
          goto LABEL_120;
        TraceGuidList = EtwpAddNotificationEvent(v24, v34);
        goto LABEL_31;
      case 28:
        if ( v15 < 8 )
          goto LABEL_120;
        v27 = *((_DWORD *)v9 + 1);
        if ( 16LL * v27 + 8 != v15 )
          goto LABEL_120;
        if ( v27 )
          v28 = v9 + 1;
        else
          v28 = 0LL;
        updated = EtwpUpdateDisallowList(v35, *(unsigned int *)v9, v27, v28);
        goto LABEL_30;
      case 31:
        if ( v15 != 16 || v16 )
          goto LABEL_120;
        updated = EtwpUseDescriptorTypeUm(v9);
        goto LABEL_30;
      case 32:
        v33 = v16;
        TraceGuidList = EtwpGetTraceGroupList(v35, v9, &v33);
        goto LABEL_31;
      case 33:
        if ( v15 != 16 )
          goto LABEL_120;
        v33 = v16;
        updated = EtwpGetTraceGroupInfo(v35, v9, v9, &v33);
        goto LABEL_30;
      case 34:
        if ( v15 != 8 )
          goto LABEL_120;
        v33 = v16;
        updated = EtwpGetDisallowList(v35, v9, v9, &v33);
        goto LABEL_30;
      case 35:
        if ( v15 != 16 || v16 )
          goto LABEL_120;
        updated = EtwpSetCompressionSettings((unsigned int *)v9);
        goto LABEL_30;
      case 36:
        if ( v15 != 8 || v16 != 16 )
          goto LABEL_120;
        v33 = 16;
        TraceGuidList = EtwpGetCompressionSettings((unsigned __int16 *)v9, (unsigned int *)v9);
        if ( !TraceGuidList )
          v33 = 16;
        goto LABEL_31;
      case 37:
        if ( v15 < 0xC )
          goto LABEL_120;
        v29 = *((unsigned __int16 *)v9 + 4);
        if ( (unsigned __int16)v29 > 0x10u )
          goto LABEL_120;
        v30 = *((unsigned int *)v9 + 1);
        if ( (unsigned int)(v30 - 1) <= 3 || 16LL * (unsigned __int16)v29 + 12 != v15 )
          goto LABEL_120;
        v31 = 0LL;
        if ( (_WORD)v29 )
          v31 = (char *)v9 + 12;
        EtwpUpdatePeriodicCaptureState(*(unsigned int *)v9, v30, v29, v31);
        goto LABEL_31;
      case 38:
        if ( v15 < 8 || (v15 & 7) != 0 || v16 < 2 )
          goto LABEL_120;
        TraceGuidList = EtwpGetPrivateSessionTraceHandle(v9, v15 >> 3, v36);
        if ( !TraceGuidList )
        {
          v33 = 2;
          *(_WORD *)v9 = v36[0];
        }
        goto LABEL_31;
      case 39:
        if ( v15 < 2 || v16 < 8 )
          goto LABEL_120;
        CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
        TraceGuidList = EtwpRegisterPrivateSession(
                          CurrentServerSiloGlobals[108],
                          *(unsigned __int16 *)v9,
                          (char *)v9 + 4,
                          v9);
        if ( !TraceGuidList )
          v33 = 8;
        goto LABEL_31;
      case 40:
        if ( v15 < 8 || v16 < 2 )
          goto LABEL_120;
        TraceGuidList = EtwpQuerySessionDemuxObject(*v9, v9);
        if ( !TraceGuidList )
          v33 = 2;
        goto LABEL_31;
      default:
        TraceGuidList = -1073741808;
        goto LABEL_31;
    }
  }
  if ( v15 != 160 || v16 - 160 > 0xFF60 )
    goto LABEL_120;
  updated = EtwpRegisterUMGuid(v35, (_DWORD)v9, v16, v34, (__int64)&v33);
LABEL_30:
  TraceGuidList = updated;
LABEL_31:
  if ( TraceGuidList >= 0 )
  {
    if ( v33 )
      memmove(OutputBuffer, v9, v33);
    *v12 = v33;
  }
  if ( TraceGuidList == -1073741789 && ((unsigned int)(v8 - 15) <= 1 || (unsigned int)(v8 - 21) <= 1)
    || (unsigned int)v8 <= 0x28 && (v21 = 0x1D700880000LL, _bittest64(&v21, v8)) )
  {
    *v12 = v33;
  }
LABEL_43:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return TraceGuidList;
}
