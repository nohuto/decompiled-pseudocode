/*
 * XREFs of KdInitSystem @ 0x140803140
 * Callers:
 *     KdEnableDebuggerWithLock @ 0x14023E74C (KdEnableDebuggerWithLock.c)
 *     KeEnterKernelDebugger @ 0x1402438B0 (KeEnterKernelDebugger.c)
 *     KiSystemStartup @ 0x14046F010 (KiSystemStartup.c)
 *     KiSetProcessorSignature @ 0x14046F4C8 (KiSetProcessorSignature.c)
 *     PopHiberCheckResume @ 0x140475210 (PopHiberCheckResume.c)
 *     KiSetFeatureBits @ 0x140479754 (KiSetFeatureBits.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeInitializeDpc @ 0x140038FE0 (KeInitializeDpc.c)
 *     RtlInitString @ 0x140076840 (RtlInitString.c)
 *     MmGetPagedPoolCommitPointer @ 0x1400D2F04 (MmGetPagedPoolCommitPointer.c)
 *     KeInitializeTimerEx @ 0x1401325F0 (KeInitializeTimerEx.c)
 *     DbgLoadImageSymbols @ 0x140161260 (DbgLoadImageSymbols.c)
 *     KdDisableDebuggerWithLock @ 0x140186DD4 (KdDisableDebuggerWithLock.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _strupr @ 0x140187B20 (_strupr.c)
 *     strncmp @ 0x140187D50 (strncmp.c)
 *     strstr @ 0x140187E10 (strstr.c)
 *     atol @ 0x140187EC0 (atol.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     __report_rangecheckfailure @ 0x14021F8EC (__report_rangecheckfailure.c)
 *     KdPollBreakIn @ 0x14023F130 (KdPollBreakIn.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     KdRegisterDebuggerDataBlock @ 0x1408033F0 (KdRegisterDebuggerDataBlock.c)
 */

char __fastcall KdInitSystem(int a1, __int64 a2)
{
  __int64 v2; // rsi
  char v3; // r13
  char v4; // r12
  char v5; // r15
  __int64 v6; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  char *v8; // rbp
  char v9; // di
  char *v10; // rax
  __int64 v11; // rdi
  unsigned int v13; // eax
  const char *v14; // r14
  char *v15; // rdx
  char v16; // al
  __int64 v17; // rcx
  const char *j; // rcx
  char v19; // al
  const char *v20; // r14
  __int64 v21; // rdx
  int v22; // eax
  unsigned int v23; // r15d
  __int64 *k; // rdi
  CHAR *v25; // r9
  unsigned int v26; // r8d
  __int64 v27; // rdx
  CHAR v28; // al
  unsigned int i; // edi
  PVOID PoolWithTag; // rax
  PVOID v31; // rsi
  signed __int32 v32[8]; // [rsp+0h] [rbp-178h] BYREF
  STRING DestinationString; // [rsp+20h] [rbp-158h] BYREF
  CHAR SourceString[256]; // [rsp+30h] [rbp-148h] BYREF

  v2 = a2;
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
        v31 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 0x1000uLL);
          _InterlockedOr(v32, 0);
          KdLogBuffer[i] = v31;
        }
      }
    }
    KdpLoaderDebuggerBlock = 0LL;
    return 1;
  }
  if ( (_BYTE)KdDebuggerEnabled )
  {
LABEL_25:
    if ( v2 )
    {
      v11 = *(_QWORD *)(v2 + 240);
      if ( v11 )
        memset((void *)(v11 + 2152), 0, 0x20uLL);
    }
    return 1;
  }
  KdpDebugRoutineSelect = 0;
  KdBreakAfterSymbolLoad = 0;
  if ( !KdPitchDebugger || (v5 = 1, !KdLocalDebugEnabled) )
    v5 = 0;
  if ( KdDebugDevice && *(_DWORD *)(KdDebugDevice + 236) == 3 )
    KdTransportMaxPacketSize = 1408;
  if ( !KdpDebuggerDataListHead )
  {
    *((_QWORD *)&KdpContext + 1) = KdDebugDevice;
    qword_140396690 = (__int64)MmGetPagedPoolCommitPointer();
    KdpPowerSpinLock = 0LL;
    qword_1403C2F88 = (__int64)&KdpPowerListHead;
    KdpPowerListHead = (__int64)&KdpPowerListHead;
    qword_1403C2F68 = (__int64)&KdpDebuggerDataListHead;
    KdpDebuggerDataListHead = (__int64)&KdpDebuggerDataListHead;
    KdRegisterDebuggerDataBlock(v6, &KdDebuggerDataBlock);
    WORD3(KdVersionBlock) |= 1u;
    *((_QWORD *)&xmmword_140399DA0 + 1) = &PsLoadedModuleList;
    LODWORD(KdVersionBlock) = 1122893839;
    *(_WORD *)((char *)&KdVersionBlock + 11) = 13059;
    qword_140399DB0 = (__int64)&KdpDebuggerDataListHead;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->Context )
  {
    CurrentPrcb->ContextFlagsInit = 1048587;
    CurrentPrcb->Context = &CurrentPrcb->ProcessorState.ContextFrame;
  }
  if ( v2 )
  {
    a2 = v2 + 16;
    CurrentPrcb = *(struct _KPRCB **)(*(_QWORD *)(v2 + 16) + 48LL);
    off_1403967F8 = &KdpLoaderDebuggerBlock;
    KdpLoaderDebuggerBlock = v2 + 16;
    v8 = *(char **)(v2 + 216);
    *(_QWORD *)&xmmword_140399DA0 = CurrentPrcb;
    if ( !v8 )
    {
      KdPitchDebugger = 1;
      v9 = 0;
      KdPageDebuggerSection = 1;
      goto LABEL_19;
    }
    strupr(v8);
    LODWORD(KdPrintBufferAllocateSize) = 0;
    v9 = 0;
    v10 = strstr(v8, "DBGPRINT_LOG_SIZE=");
    if ( v10 )
    {
      v13 = (atol(v10 + 18) + 4095) & 0xFFFFF000;
      LODWORD(KdPrintBufferAllocateSize) = v13;
      if ( v13 > 0x1000000 )
      {
        LODWORD(KdPrintBufferAllocateSize) = 0x1000000;
        v13 = 0x1000000;
      }
      if ( v13 <= 0x1000 )
        LODWORD(KdPrintBufferAllocateSize) = 0;
    }
    if ( strstr(v8, "CRASHDEBUG") )
    {
      KdPitchDebugger = 0;
      KdpBootedNodebug = 0;
    }
    else if ( strstr(v8, "NODEBUG") )
    {
      KdPitchDebugger = 1;
      KdPageDebuggerSection = 1;
      KdpBootedNodebug = 1;
    }
    else if ( strstr(v8, "DEBUGPORT=LOCAL") )
    {
      KdPitchDebugger = 1;
      v5 = 1;
      KdPageDebuggerSection = 1;
      LOBYTE(KdDebuggerNotPresent) = 1;
      KdLocalDebugEnabled = 1;
      KdpBootedNodebug = 0;
    }
    else
    {
      v14 = v8;
      do
      {
        v15 = strstr(v14, " DEBUG=");
        if ( !v15 )
        {
          v15 = strstr(v14, " DEBUG");
          if ( !v15 )
            break;
        }
        v14 = v15 + 6;
        v16 = v15[6];
        if ( (unsigned __int8)v16 <= 0x3Du )
        {
          v17 = 0x2000000100000001LL;
          if ( _bittest64(&v17, v16) )
          {
            v9 = 1;
            KdpBootedNodebug = 0;
            if ( v15[6] == 61 )
            {
              for ( j = v15 + 7; ; j = v20 + 1 )
              {
                v19 = *j;
                v20 = j;
                while ( v19 )
                {
                  if ( (unsigned __int8)v19 <= 0x2Cu )
                  {
                    v21 = 0x100100000200LL;
                    if ( _bittest64(&v21, v19) )
                      break;
                  }
                  v19 = *++v20;
                }
                v22 = (_DWORD)v20 - (_DWORD)j;
                if ( (_DWORD)v20 == (_DWORD)j )
                  break;
                if ( v22 == 10 )
                {
                  if ( !strncmp(j, "AUTOENABLE", 0xAuLL) )
                  {
                    v3 = 1;
                    KdAutoEnableOnEvent = 1;
                    v4 = 0;
                  }
                }
                else if ( v22 == 7 )
                {
                  if ( !strncmp(j, "DISABLE", 7uLL) )
                  {
                    v3 = 1;
                    KdAutoEnableOnEvent = 0;
                    v4 = 1;
                  }
                }
                else if ( v22 == 6 && !strncmp(j, "NOUMEX", 6uLL) )
                {
                  KdIgnoreUmExceptions = 1;
                }
                if ( *v20 != 44 )
                  break;
              }
            }
            break;
          }
        }
      }
      while ( v15 != (char *)-6LL );
    }
    if ( strstr(v8, "NOEVENT") )
    {
      KdEventLoggingEnabled = 0;
      goto LABEL_19;
    }
    if ( !strstr(v8, "EVENT") )
      goto LABEL_19;
    KdEventLoggingEnabled = 1;
    KdPageDebuggerSection = 0;
  }
  else
  {
    *(_QWORD *)&xmmword_140399DA0 = PsNtosImageBase;
  }
  v9 = 1;
LABEL_19:
  Base = (PVOID)xmmword_140399DA0;
  if ( !v5 )
  {
    if ( v2 && *(_DWORD *)(v2 + 12) != 1 )
      v9 = 0;
    if ( !v9 )
    {
      LOBYTE(KdDebuggerNotPresent) = 1;
      goto LABEL_25;
    }
    if ( (int)KdInitialize(0LL, v2, &KdpContext) < 0 )
    {
      KdPitchDebugger = 0;
      v9 = 0;
      LOBYTE(KdDebuggerNotPresent) = 1;
      KdLocalDebugEnabled = 1;
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
    KdEventLoggingPresent = v9;
    LOBYTE(KdDebuggerNotPresent) = 1;
    KdLocalDebugEnabled = 0;
  }
  else
  {
    LOBYTE(KdDebuggerEnabled) = 1;
    MEMORY[0xFFFFF780000002D4] = 1;
    if ( KdLocalDebugEnabled )
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
  if ( v2 )
  {
    v23 = 0;
    for ( k = *(__int64 **)(v2 + 16); k != (__int64 *)(v2 + 16); ++v23 )
    {
      if ( v23 >= 3 )
        break;
      v25 = (CHAR *)k[10];
      v26 = *((unsigned __int16 *)k + 36) >> 1;
      if ( v26 >= 0x100 )
        v26 = 255;
      v27 = 0LL;
      do
      {
        v28 = *v25;
        v25 += 2;
        SourceString[v27] = v28;
        v27 = (unsigned int)(v27 + 1);
      }
      while ( (unsigned int)v27 < v26 );
      if ( (unsigned int)v27 >= 0x100uLL )
        _report_rangecheckfailure();
      SourceString[v27] = 0;
      RtlInitString(&DestinationString, SourceString);
      DbgLoadImageSymbols(&DestinationString, (PVOID)k[6], 0xFFFFFFFFuLL);
      k = (__int64 *)*k;
    }
  }
  else
  {
    DbgLoadImageSymbols(0LL, Base, 0xFFFFFFFFuLL);
  }
  if ( v2 )
  {
    KdBreakAfterSymbolLoad = KdPollBreakIn((__int64)CurrentPrcb, a2);
    goto LABEL_25;
  }
  return 1;
}
