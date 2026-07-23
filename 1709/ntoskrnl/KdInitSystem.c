/*
 * XREFs of KdInitSystem @ 0x140796140
 * Callers:
 *     KdEnableDebuggerWithLock @ 0x14020166C (KdEnableDebuggerWithLock.c)
 *     KeEnterKernelDebugger @ 0x140206120 (KeEnterKernelDebugger.c)
 *     KiSystemStartup @ 0x140423010 (KiSystemStartup.c)
 *     KiSetProcessorSignature @ 0x140423B28 (KiSetProcessorSignature.c)
 *     KiSetFeatureBits @ 0x140427A44 (KiSetFeatureBits.c)
 *     PopHiberCheckResume @ 0x1404335B0 (PopHiberCheckResume.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140025A80 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400B2860 (KeInitializeDpc.c)
 *     DbgLoadImageSymbols @ 0x1400F9770 (DbgLoadImageSymbols.c)
 *     RtlInitString @ 0x140120030 (RtlInitString.c)
 *     MmGetPagedPoolCommitPointer @ 0x14013265C (MmGetPagedPoolCommitPointer.c)
 *     KdDisableDebuggerWithLock @ 0x14015CD54 (KdDisableDebuggerWithLock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _strupr @ 0x14015DE20 (_strupr.c)
 *     strncmp @ 0x14015E050 (strncmp.c)
 *     strstr @ 0x14015E110 (strstr.c)
 *     atol @ 0x14015E1C0 (atol.c)
 *     memset @ 0x140192F40 (memset.c)
 *     __report_rangecheckfailure @ 0x1401E00DC (__report_rangecheckfailure.c)
 *     KdPollBreakIn @ 0x140201FD0 (KdPollBreakIn.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     KdRegisterDebuggerDataBlock @ 0x1407963F0 (KdRegisterDebuggerDataBlock.c)
 */

char __fastcall KdInitSystem(int a1, __int64 a2)
{
  char v3; // r13
  char v4; // r12
  char v5; // r15
  __int64 v6; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v8; // rcx
  char *v9; // rbp
  char v10; // di
  char *v11; // rax
  __int64 v12; // rdi
  unsigned int v14; // eax
  const char *v15; // r14
  char *v16; // rcx
  char v17; // al
  char *v18; // rcx
  const char *j; // rcx
  char v20; // al
  const char *v21; // r14
  __int64 v22; // rdx
  int v23; // eax
  unsigned int v24; // r15d
  __int64 *k; // rdi
  CHAR *v26; // r9
  unsigned int v27; // r8d
  __int64 v28; // rdx
  CHAR v29; // al
  unsigned int i; // edi
  PVOID PoolWithTag; // rax
  PVOID v32; // rsi
  signed __int32 v33[8]; // [rsp+0h] [rbp-178h] BYREF
  STRING DestinationString; // [rsp+20h] [rbp-158h] BYREF
  CHAR SourceString[256]; // [rsp+30h] [rbp-148h] BYREF

  v3 = 0;
  v4 = 0;
  if ( a1 )
  {
    KeQueryPerformanceCounter(&KdPerformanceCounterRate);
    if ( !KdPitchDebugger )
    {
      for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x6F49644Bu);
        v32 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 0x1000uLL);
          _InterlockedOr(v33, 0);
          KdLogBuffer[i] = v32;
        }
      }
    }
    KdpLoaderDebuggerBlock = 0LL;
    return 1;
  }
  if ( (_BYTE)KdDebuggerEnabled )
  {
LABEL_25:
    if ( a2 )
    {
      v12 = *(_QWORD *)(a2 + 240);
      if ( v12 )
        memset((void *)(v12 + 2152), 0, 0x20uLL);
    }
    return 1;
  }
  KdpDebugRoutineSelect = 0;
  KdBreakAfterSymbolLoad = 0;
  if ( !KdPitchDebugger || (v5 = 1, !BYTE1(KdDebuggerNotPresent)) )
    v5 = 0;
  if ( KdDebugDevice && *(_DWORD *)(KdDebugDevice + 236) == 3 )
    KdTransportMaxPacketSize = 1408;
  if ( !KdpDebuggerDataListHead )
  {
    *((_QWORD *)&KdpContext + 1) = KdDebugDevice;
    qword_140353AB0 = (__int64)MmGetPagedPoolCommitPointer();
    KdpPowerSpinLock = 0LL;
    qword_14037FD78 = (__int64)&KdpPowerListHead;
    KdpPowerListHead = (__int64)&KdpPowerListHead;
    qword_14037FD68 = (__int64)&KdpDebuggerDataListHead;
    KdpDebuggerDataListHead = (__int64)&KdpDebuggerDataListHead;
    KdRegisterDebuggerDataBlock(v6, &KdDebuggerDataBlock);
    WORD3(KdVersionBlock) |= 1u;
    *((_QWORD *)&xmmword_140356760 + 1) = &PsLoadedModuleList;
    LODWORD(KdVersionBlock) = 1068171279;
    *(_WORD *)((char *)&KdVersionBlock + 11) = 13059;
    qword_140356770 = (__int64)&KdpDebuggerDataListHead;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->Context )
  {
    CurrentPrcb->ContextFlagsInit = 1048587;
    CurrentPrcb->Context = &CurrentPrcb->ProcessorState.ContextFrame;
  }
  if ( a2 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 48LL);
    off_140353C18 = &KdpLoaderDebuggerBlock;
    KdpLoaderDebuggerBlock = a2 + 16;
    v9 = *(char **)(a2 + 216);
    *(_QWORD *)&xmmword_140356760 = v8;
    if ( !v9 )
    {
      KdPitchDebugger = 1;
      v10 = 0;
      KdPageDebuggerSection = 1;
      goto LABEL_19;
    }
    strupr(v9);
    LODWORD(KdPrintBufferAllocateSize) = 0;
    v10 = 0;
    v11 = strstr(v9, "DBGPRINT_LOG_SIZE=");
    if ( v11 )
    {
      v14 = (atol(v11 + 18) + 4095) & 0xFFFFF000;
      LODWORD(KdPrintBufferAllocateSize) = v14;
      if ( v14 > 0x1000000 )
      {
        v14 = 0x1000000;
        LODWORD(KdPrintBufferAllocateSize) = 0x1000000;
      }
      if ( v14 <= 0x1000 )
        LODWORD(KdPrintBufferAllocateSize) = 0;
    }
    if ( strstr(v9, "CRASHDEBUG") )
    {
      KdPitchDebugger = 0;
      KdpBootedNodebug = 0;
    }
    else if ( strstr(v9, "NODEBUG") )
    {
      KdPitchDebugger = 1;
      KdPageDebuggerSection = 1;
      KdpBootedNodebug = 1;
    }
    else if ( strstr(v9, "DEBUGPORT=LOCAL") )
    {
      KdPitchDebugger = 1;
      v5 = 1;
      KdPageDebuggerSection = 1;
      LOWORD(KdDebuggerNotPresent) = 257;
      KdpBootedNodebug = 0;
    }
    else
    {
      v15 = v9;
      do
      {
        v16 = strstr(v15, " DEBUG=");
        if ( !v16 )
        {
          v16 = strstr(v15, " DEBUG");
          if ( !v16 )
            break;
        }
        v15 = v16 + 6;
        v17 = v16[6];
        if ( v17 == 61 || v17 == 32 || !v17 )
        {
          v18 = v16 + 1;
          KdpBootedNodebug = 0;
          v10 = 1;
          if ( v18[5] == 61 )
          {
            for ( j = v18 + 6; ; j = v21 + 1 )
            {
              v20 = *j;
              v21 = j;
              while ( v20 )
              {
                if ( (unsigned __int8)v20 <= 0x2Cu )
                {
                  v22 = 0x100100000200LL;
                  if ( _bittest64(&v22, v20) )
                    break;
                }
                v20 = *++v21;
              }
              v23 = (_DWORD)v21 - (_DWORD)j;
              if ( (_DWORD)v21 == (_DWORD)j )
                break;
              if ( v23 == 10 )
              {
                if ( !strncmp(j, "AUTOENABLE", 0xAuLL) )
                {
                  v3 = 1;
                  KdAutoEnableOnEvent = 1;
                  v4 = 0;
                }
              }
              else if ( v23 == 7 )
              {
                if ( !strncmp(j, "DISABLE", 7uLL) )
                {
                  v3 = 1;
                  KdAutoEnableOnEvent = 0;
                  v4 = 1;
                }
              }
              else if ( v23 == 6 && !strncmp(j, "NOUMEX", 6uLL) )
              {
                KdIgnoreUmExceptions = 1;
              }
              if ( *v21 != 44 )
                break;
            }
          }
          break;
        }
      }
      while ( v16 != (char *)-6LL );
    }
    if ( strstr(v9, "NOEVENT") )
    {
      KdEventLoggingEnabled = 0;
      goto LABEL_19;
    }
    if ( !strstr(v9, "EVENT") )
      goto LABEL_19;
    KdEventLoggingEnabled = 1;
    KdPageDebuggerSection = 0;
  }
  else
  {
    *(_QWORD *)&xmmword_140356760 = PsNtosImageBase;
  }
  v10 = 1;
LABEL_19:
  Base = (PVOID)xmmword_140356760;
  if ( !v5 )
  {
    if ( a2 && *(_DWORD *)(a2 + 12) != 1 )
      v10 = 0;
    if ( !v10 )
    {
      LOBYTE(KdDebuggerNotPresent) = 1;
      goto LABEL_25;
    }
    if ( (int)KdInitialize(0LL, a2, &KdpContext) < 0 )
    {
      KdPitchDebugger = 0;
      v10 = 0;
      LOWORD(KdDebuggerNotPresent) = 257;
    }
    else
    {
      KdpDebugRoutineSelect = 1;
    }
  }
  if ( !KdpDebuggerStructuresInitialized )
  {
    BYTE4(KdpContext) = 0;
    LODWORD(KdpContext) = 20;
    KeInitializeDpc(&KdpTimeSlipDpc, KdpTimeSlipDpcRoutine, 0LL);
    KeInitializeTimerEx(&KdpTimeSlipTimer, NotificationTimer);
    KdpTimeSlipWorkItem.Parameter = 0LL;
    KdpTimeSlipWorkItem.WorkerRoutine = (void (__fastcall *)(void *))KdpTimeSlipWork;
    KdpTimeSlipWorkItem.List.Flink = 0LL;
    KdpDebuggerStructuresInitialized = 1;
  }
  KdTimerStart = 0LL;
  if ( KdEventLoggingEnabled && KdpBootedNodebug )
  {
    KdPitchDebugger = 1;
    KdEventLoggingPresent = v10;
    LOWORD(KdDebuggerNotPresent) = 1;
  }
  else
  {
    LOBYTE(KdDebuggerEnabled) = 1;
    MEMORY[0xFFFFF780000002D4] = 1;
    if ( BYTE1(KdDebuggerNotPresent) )
      goto LABEL_25;
  }
  if ( KdEventLoggingEnabled && !(_BYTE)KdDebuggerEnabled )
    goto LABEL_25;
  KdPitchDebugger = 0;
  if ( v3 )
  {
    KdDisableDebuggerWithLock();
    KdBlockEnable = v4;
    goto LABEL_25;
  }
  if ( a2 )
  {
    v24 = 0;
    for ( k = *(__int64 **)(a2 + 16); k != (__int64 *)(a2 + 16); ++v24 )
    {
      if ( v24 >= 3 )
        break;
      v26 = (CHAR *)k[10];
      v27 = *((unsigned __int16 *)k + 36) >> 1;
      if ( v27 >= 0x100 )
        v27 = 255;
      v28 = 0LL;
      do
      {
        v29 = *v26;
        v26 += 2;
        SourceString[v28] = v29;
        v28 = (unsigned int)(v28 + 1);
      }
      while ( (unsigned int)v28 < v27 );
      if ( (unsigned int)v28 >= 0x100uLL )
        _report_rangecheckfailure();
      SourceString[v28] = 0;
      RtlInitString(&DestinationString, SourceString);
      DbgLoadImageSymbols(&DestinationString, (PVOID)k[6], 0xFFFFFFFFuLL);
      k = (__int64 *)*k;
    }
  }
  else
  {
    DbgLoadImageSymbols(0LL, Base, 0xFFFFFFFFuLL);
  }
  if ( a2 )
  {
    KdBreakAfterSymbolLoad = KdPollBreakIn();
    goto LABEL_25;
  }
  return 1;
}
