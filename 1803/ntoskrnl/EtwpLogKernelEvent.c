/*
 * XREFs of EtwpLogKernelEvent @ 0x1401080D0
 * Callers:
 *     MiDeletePteRun @ 0x14002A950 (MiDeletePteRun.c)
 *     EtwTraceSiloKernelEvent @ 0x14003EF90 (EtwTraceSiloKernelEvent.c)
 *     PerfInfoLogInterrupt @ 0x1400AAE80 (PerfInfoLogInterrupt.c)
 *     EtwTraceTimedEvent @ 0x1400B76E4 (EtwTraceTimedEvent.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     KiExecuteAllDpcs @ 0x140107C40 (KiExecuteAllDpcs.c)
 *     EtwpCCSwapFlush @ 0x140172E84 (EtwpCCSwapFlush.c)
 *     EtwpTraceFileName @ 0x140177690 (EtwpTraceFileName.c)
 *     EtwTracePool @ 0x1401A6EE0 (EtwTracePool.c)
 *     EtwpTraceStackWalk @ 0x1402AE564 (EtwpTraceStackWalk.c)
 *     EtwTraceSiloDcEvent @ 0x1402AF31C (EtwTraceSiloDcEvent.c)
 *     EtwTraceSiloTimedEvent @ 0x1402AF354 (EtwTraceSiloTimedEvent.c)
 *     EtwpLogMemInfo @ 0x1402AFB10 (EtwpLogMemInfo.c)
 *     EtwpTraceKernelEventWithFilter @ 0x1402B07A8 (EtwpTraceKernelEventWithFilter.c)
 *     EtwpTraceCachedStack @ 0x1402B41A8 (EtwpTraceCachedStack.c)
 *     EtwpTraceStackKey @ 0x1402B4280 (EtwpTraceStackKey.c)
 *     EtwpTraceLastBranchRecord @ 0x1402B617C (EtwpTraceLastBranchRecord.c)
 *     EtwpWriteProcessorTrace @ 0x1402B6400 (EtwpWriteProcessorTrace.c)
 *     EtwpEnumerateAddressSpace @ 0x1404B4AE4 (EtwpEnumerateAddressSpace.c)
 *     EtwpLogGroupMask @ 0x140628E18 (EtwpLogGroupMask.c)
 *     EtwpLogAlwaysPresentRundown @ 0x140629084 (EtwpLogAlwaysPresentRundown.c)
 *     EtwpTraceProcessRundown @ 0x1406295EC (EtwpTraceProcessRundown.c)
 *     EtwpSysModuleRunDown @ 0x1406297E8 (EtwpSysModuleRunDown.c)
 *     EtwpSystemImageEnumCallback @ 0x140629A80 (EtwpSystemImageEnumCallback.c)
 *     EtwpTraceImageRundown @ 0x140633820 (EtwpTraceImageRundown.c)
 *     EtwpLogMemInfoWsHelper @ 0x1407A8580 (EtwpLogMemInfoWsHelper.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1407A883C (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpLogTxREvent @ 0x1407A8A40 (EtwpLogTxREvent.c)
 *     EtwLogPfnInfoRundown @ 0x1407AE68C (EtwLogPfnInfoRundown.c)
 *     EtwpClockSourceRunDown @ 0x1407AE9A4 (EtwpClockSourceRunDown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x1407AEB2C (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpLogPmcCounterRundown @ 0x1407AECDC (EtwpLogPmcCounterRundown.c)
 *     EtwpObjectHandleEnumCallback @ 0x1407AEEA0 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x1407AF16C (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1407AF2C4 (EtwpPoolRunDown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x1407AF6FC (EtwpProcessPerfCtrsRundown.c)
 *     EtwpProcessorRundown @ 0x1407AF830 (EtwpProcessorRundown.c)
 *     EtwpSampledProfileRunDown @ 0x1407AFC84 (EtwpSampledProfileRunDown.c)
 *     EtwpSpinLockConfigRunDown @ 0x1407AFE18 (EtwpSpinLockConfigRunDown.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006430 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006660 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpCloseLogger @ 0x1400621D0 (EtwpCloseLogger.c)
 *     EtwpUpdateEventsLostCount @ 0x1400CF900 (EtwpUpdateEventsLostCount.c)
 *     EtwpSwitchBuffer @ 0x1400D40D0 (EtwpSwitchBuffer.c)
 *     EtwpUnlockBufferList @ 0x1400D44D8 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1400D4514 (EtwpLockBufferList.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     EtwpReserveTraceBuffer @ 0x1400F0B50 (EtwpReserveTraceBuffer.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     EtwpStackTraceDispatcher @ 0x1402AE330 (EtwpStackTraceDispatcher.c)
 *     EtwpReserveWithPebsIndex @ 0x1402B01C8 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x1402B025C (EtwpReserveWithPmcCounters.c)
 *     EtwpSendTraceEvent @ 0x1402B1578 (EtwpSendTraceEvent.c)
 *     EtwpTraceLastBranchRecord @ 0x1402B617C (EtwpTraceLastBranchRecord.c)
 *     EtwpTraceProcessorTrace @ 0x1402B6360 (EtwpTraceProcessorTrace.c)
 */

void __fastcall EtwpLogKernelEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  unsigned int v6; // edi
  __int64 v7; // r15
  char v10; // bl
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned int v13; // r13d
  unsigned int v14; // r15d
  unsigned int v15; // r10d
  __m128i v16; // xmm5
  __m128i v17; // xmm4
  unsigned int v18; // r15d
  __int64 v19; // r9
  __m128i v20; // xmm3
  __m128i v21; // xmm0
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __m128i v25; // xmm3
  __m128i v26; // xmm3
  __m128i v27; // xmm4
  __m128i v28; // xmm4
  _DWORD *v29; // rcx
  __int64 v30; // rdx
  int v31; // eax
  unsigned int v32; // r13d
  __int64 v33; // rcx
  unsigned int v34; // edx
  _QWORD *v35; // r15
  unsigned __int64 *v36; // r12
  unsigned __int64 v37; // rdi
  signed __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rax
  unsigned __int32 v41; // r8d
  unsigned int v42; // r9d
  unsigned __int32 v43; // edx
  __int64 v44; // rax
  unsigned __int64 v45; // rcx
  __int64 v46; // rax
  char *v47; // r12
  __int64 v48; // rdi
  signed __int64 *v49; // roff
  signed __int64 v50; // rax
  unsigned __int64 v51; // rdx
  signed __int64 v52; // rtt
  int v53; // edx
  unsigned int v54; // r14d
  unsigned __int16 v55; // r9
  unsigned int v56; // edx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v58; // r12
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rdx
  __int64 v61; // rcx
  int v62; // edi
  unsigned __int64 v63; // r8
  __int64 v64; // rcx
  unsigned int v65; // edx
  __int64 v66; // rcx
  signed __int64 v67; // rax
  signed __int64 v68; // rtt
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v70; // r8
  signed __int64 v71; // r9
  signed __int64 v72; // rcx
  unsigned int v73; // r8d
  __int64 v74; // rcx
  __int64 v75; // rcx
  unsigned __int8 v76[8]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v77; // [rsp+38h] [rbp-41h] BYREF
  unsigned int v78; // [rsp+40h] [rbp-39h]
  _DWORD Size[3]; // [rsp+44h] [rbp-35h]
  unsigned __int32 v80; // [rsp+50h] [rbp-29h]
  unsigned int v81; // [rsp+54h] [rbp-25h]
  unsigned int v82; // [rsp+58h] [rbp-21h]
  unsigned __int64 v83; // [rsp+60h] [rbp-19h] BYREF
  signed __int64 *v84; // [rsp+68h] [rbp-11h]
  unsigned __int32 v85; // [rsp+70h] [rbp-9h]
  __int64 v86; // [rsp+78h] [rbp-1h]
  __int64 v87; // [rsp+80h] [rbp+7h]

  v6 = a4;
  v7 = a3;
  v10 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 424) + 8LL * a3), 1u) )
    {
      KeLeaveCriticalRegion();
      return;
    }
    v10 = 1;
  }
  v11 = *(_QWORD *)(a2 + 432);
  v87 = 8 * v7;
  v12 = *(_QWORD *)(8 * v7 + v11);
  v86 = v12;
  if ( (v12 & 1) != 0 )
  {
    EtwpCloseLogger(v7, a2, v10);
    return;
  }
  if ( v12 )
  {
    v13 = 0;
    Size[0] = 0;
    v14 = 0;
    v15 = 0;
    if ( v6 )
    {
      if ( v6 >= 8 )
      {
        v16 = 0LL;
        v17 = 0LL;
        v18 = 2;
        do
        {
          v19 = 2LL * v15;
          v15 += 8;
          v20 = _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v19 + 8)),
                  _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * v18 + 8)));
          v21 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v18 + 4) + 8));
          v22 = 2LL * (v18 + 5);
          v23 = 2LL * (v18 + 3);
          v24 = 2LL * (v18 + 2);
          v25 = _mm_add_epi32(
                  _mm_unpacklo_epi32(
                    v20,
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v18 - 1) + 8)),
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v18 + 1) + 8)))),
                  v16);
          v18 += 8;
          v16 = v25;
          v26 = _mm_add_epi32(
                  _mm_unpacklo_epi32(
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v24 + 8)), v21),
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v23 + 8)),
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v22 + 8)))),
                  v17);
          v17 = v26;
        }
        while ( v15 < (v6 & 0xFFFFFFF8) );
        v27 = _mm_add_epi32(v26, v16);
        v28 = _mm_add_epi32(v27, _mm_srli_si128(v27, 8));
        v14 = _mm_cvtsi128_si32(_mm_add_epi32(v28, _mm_srli_si128(v28, 4)));
        Size[0] = v14;
      }
      if ( v15 < v6 )
      {
        v29 = (_DWORD *)(16LL * v15 + a1 + 8);
        v30 = v6 - v15;
        do
        {
          v14 += *v29;
          v29 += 4;
          --v30;
        }
        while ( v30 );
        Size[0] = v14;
      }
    }
    if ( (a6 & 0x100) != 0 )
    {
      if ( (a6 & 0x10000000) != 0 )
      {
        v63 = EtwpReserveTraceBuffer((unsigned int *)v12, v14 + 24, (__int64)&v83, &v77, a6);
        if ( !v63 )
          goto LABEL_45;
        *(_DWORD *)v63 = (unsigned __int8)a6 | 0xC0040000;
        v64 = v77;
        *(_WORD *)(v63 + 6) = a5;
        *(_QWORD *)(v63 + 16) = v64;
        *(_WORD *)(v63 + 4) = v14 + 24;
        *(_DWORD *)(v63 + 8) = KeGetCurrentThread()[1].CurrentRunTime;
        *(_DWORD *)(v63 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
        v46 = v63 + 24;
        *(_QWORD *)&Size[1] = v63 + 24;
      }
      else
      {
        v58 = KeGetCurrentThread();
        v59 = EtwpReserveTraceBuffer((unsigned int *)v12, v14 + 32, (__int64)&v83, &v77, a6);
        v60 = v59;
        if ( !v59 )
          goto LABEL_45;
        *(_WORD *)(v59 + 4) = v14 + 32;
        *(_DWORD *)v59 = (unsigned __int8)a6 | 0xC0020000;
        v61 = v77;
        *(_WORD *)(v59 + 6) = a5;
        *(_QWORD *)(v59 + 16) = v61;
        *(_DWORD *)(v59 + 8) = v58[1].CurrentRunTime;
        *(_DWORD *)(v59 + 12) = v58[1].CycleTime;
        *(_DWORD *)(v59 + 24) = v58->SchedulerApc.SpareLong0;
        *(_DWORD *)(v59 + 28) = v58->UserTime;
        v46 = v59 + 32;
        *(_QWORD *)&Size[1] = v60 + 32;
      }
    }
    else
    {
      v31 = *(_DWORD *)(v12 + 832);
      if ( (v31 & 0xC00) == 0 )
      {
LABEL_15:
        v32 = v14 + 16;
        if ( *(int *)(v12 + 16) < 0 || v32 > *(_DWORD *)(v12 + 8) )
        {
LABEL_109:
          EtwpUpdateEventsLostCount(v12);
          goto LABEL_45;
        }
        v33 = *(unsigned int *)v12;
        v34 = *(_DWORD *)(v12 + 4);
        v82 = (v14 + 23) & 0xFFFFFFF8;
        v78 = v34;
        v81 = v33;
        while ( 1 )
        {
          Size[1] = KeGetCurrentPrcb()->Number;
          v35 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 1112) + 4112LL) + ((unsigned __int64)Size[1] << 6));
          if ( (*(_DWORD *)(v12 + 12) & 0x10000000) != 0 )
            v36 = (unsigned __int64 *)(v12 + 144);
          else
            v36 = (unsigned __int64 *)(*v35 + 8 * v33);
          v76[0] = 0;
          _m_prefetchw(v36);
          v37 = *v36;
          if ( (*v36 & 0xF) != 0 )
          {
            do
            {
              v38 = _InterlockedCompareExchange64((volatile signed __int64 *)v36, v37 - 1, v37);
              if ( v37 == v38 )
                break;
              v37 = v38;
            }
            while ( (v38 & 0xF) != 0 );
          }
          if ( v37 )
          {
            v39 = v37 & 0xF;
            if ( (v37 & 0xF) != 0 )
            {
              v37 &= 0xFFFFFFFFFFFFFFF0uLL;
              if ( v39 == 1 )
              {
                _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 12), 0xFu);
                _m_prefetchw(v36);
                v67 = *v36;
                while ( (v67 & 0xF) == 0 )
                {
                  if ( v37 != (v67 & 0xFFFFFFFFFFFFFFF0uLL) )
                    break;
                  v68 = v67;
                  v67 = _InterlockedCompareExchange64((volatile signed __int64 *)v36, v67 + 15, v67);
                  if ( v68 == v67 )
                    goto LABEL_25;
                }
                _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 12), 0xFFFFFFF1);
              }
            }
            else
            {
              EtwpLockBufferList(v12, v76);
              v37 = *v36 & 0xFFFFFFFFFFFFFFF0uLL;
              if ( v37 )
                _InterlockedIncrement((volatile signed __int32 *)(v37 + 12));
              EtwpUnlockBufferList(v12, v76);
              v34 = v78;
            }
LABEL_25:
            if ( v37 )
            {
              _m_prefetchw((const void *)(v37 + 8));
              v80 = *(_DWORD *)(v37 + 8);
              if ( v80 <= v34 )
              {
                while ( 1 )
                {
                  v40 = (*(__int64 (**)(void))(v12 + 40))();
                  v41 = v80;
                  v42 = v82;
                  v77 = v40;
                  v43 = _InterlockedCompareExchange((volatile signed __int32 *)(v37 + 8), v80 + v82, v80);
                  if ( v41 == v43 )
                    break;
                  v80 = v43;
                  if ( v43 > v78 )
                    goto LABEL_54;
                }
                if ( v43 + v42 <= v78 )
                {
                  v44 = v35[1];
                  v83 = v37;
                  v84 = (signed __int64 *)v36;
                  v85 = v43;
                  ++*(_QWORD *)(v44 + 8LL * v81);
                  v45 = v37 + v43;
                  if ( v45 )
                  {
                    v14 = Size[0];
                    *(_QWORD *)(v45 + 8) = v77;
                    *(_QWORD *)&Size[1] = v45 + 16;
                    v6 = a4;
                    *(_DWORD *)v45 = (unsigned __int8)a6 | 0xC0110000;
                    *(_WORD *)(v45 + 6) = a5;
                    v46 = *(_QWORD *)&Size[1];
                    *(_WORD *)(v45 + 4) = v32;
                    v13 = 0;
                    goto LABEL_31;
                  }
LABEL_45:
                  if ( v10 )
                  {
                    ExReleaseRundownProtectionCacheAwareEx(
                      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 424) + v87),
                      1u);
                    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                  }
                  return;
                }
                *(_DWORD *)(v37 + 4) = v43;
              }
            }
          }
LABEL_54:
          v62 = EtwpSwitchBuffer(v12, v37, (signed __int64 *)v36, Size[1], a6);
          if ( (*(_DWORD *)(v12 + 12) & 0x4000000) != 0 )
          {
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            v70 = PerformanceCounter.QuadPart
                - _InterlockedExchange64((volatile __int64 *)(v12 + 1272), PerformanceCounter.QuadPart);
            do
            {
              v71 = *(_QWORD *)(v12 + 1280);
              if ( v71 )
                v72 = (v71 + v70 + 2 * v71) / 4;
              else
                v72 = v70;
            }
            while ( v71 != _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 1280), v72, v71) );
          }
          if ( v62 < 0 )
            goto LABEL_109;
          v33 = v81;
          v34 = v78;
        }
      }
      if ( (v31 & 0x400) != 0 && a5 == 1316 )
      {
        v46 = EtwpReserveWithPebsIndex(v12, 1316, v14, (unsigned int)&v83, (__int64)&v77, a6);
        *(_QWORD *)&Size[1] = v46;
      }
      else
      {
        if ( (v31 & 0x800) == 0 )
          goto LABEL_15;
        v65 = 0;
        if ( !*(_DWORD *)(*(_QWORD *)(v12 + 1000) + 32LL) )
          goto LABEL_15;
        while ( 1 )
        {
          v66 = *(_QWORD *)(v12 + 1000);
          if ( *(_WORD *)(v66 + 2LL * v65 + 36) == a5 )
            break;
          if ( ++v65 >= *(_DWORD *)(v66 + 32) )
            goto LABEL_15;
        }
        v46 = EtwpReserveWithPmcCounters(v12, a5, v14, (unsigned int)&v83, (__int64)&v77, a6);
        *(_QWORD *)&Size[1] = v46;
      }
    }
LABEL_31:
    if ( !v46 )
      goto LABEL_45;
    v47 = (char *)v46;
    if ( v6 )
    {
      while ( 1 )
      {
        v48 = *(unsigned int *)(a1 + 8);
        if ( (unsigned int)v48 > v14 )
          break;
        memmove(v47, *(const void **)a1, (unsigned int)v48);
        v47 += v48;
        v14 -= v48;
        ++v13;
        a1 += 16LL;
        if ( v13 >= a4 )
        {
          v12 = v86;
          goto LABEL_36;
        }
      }
      memset(*(void **)&Size[1], 0, Size[0]);
      v12 = v86;
      EtwpUpdateEventsLostCount(v86);
    }
LABEL_36:
    if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
      && (*(_DWORD *)(v12 + 12) & 0x80000) != 0 )
    {
      EtwpSendTraceEvent(v12, &v83);
    }
    v49 = v84;
    _m_prefetchw(v84);
    v50 = *v49;
    v51 = v83;
    if ( (*v49 ^ v83) >= 0xF )
    {
LABEL_60:
      _InterlockedDecrement((volatile signed __int32 *)(v51 + 12));
    }
    else
    {
      while ( 1 )
      {
        v52 = v50;
        v50 = _InterlockedCompareExchange64(v84, v50 + 1, v50);
        if ( v52 == v50 )
          break;
        v51 = v83;
        if ( (v50 ^ v83) >= 0xF )
          goto LABEL_60;
      }
    }
    v53 = *(_DWORD *)(v12 + 832);
    if ( (v53 & 0x80u) != 0 && _bittest(*(const signed __int32 **)(v12 + 984), a5 & 0x1FFF) )
    {
      v54 = a6;
      EtwpStackTraceDispatcher(v12, &v77, 0LL, a6);
      v53 = *(_DWORD *)(v12 + 832);
    }
    else
    {
      v54 = a6;
    }
    v55 = a5;
    if ( (v53 & 0x8000) != 0 )
    {
      v56 = 0;
      v73 = 0;
      if ( !*(_DWORD *)(*(_QWORD *)(v12 + 1008) + 8LL) )
        goto LABEL_44;
      while ( 1 )
      {
        v74 = *(_QWORD *)(v12 + 1008);
        if ( *(_WORD *)(v74 + 2LL * v73 + 12) == a5 )
          break;
        if ( ++v73 >= *(_DWORD *)(v74 + 8) )
          goto LABEL_44;
      }
      EtwpTraceLastBranchRecord(v12, &v77, 0LL, v54);
      v55 = a5;
    }
    v56 = 0;
LABEL_44:
    if ( (*(_DWORD *)(v12 + 832) & 0x4000000) != 0 && *(_DWORD *)(*(_QWORD *)(v12 + 1016) + 24LL) )
    {
      while ( 1 )
      {
        v75 = *(_QWORD *)(v12 + 1016);
        if ( *(_WORD *)(v75 + 2LL * v56 + 28) == v55 )
          break;
        if ( ++v56 >= *(_DWORD *)(v75 + 24) )
          goto LABEL_45;
      }
      EtwpTraceProcessorTrace(v12, &v77, 0LL, v54);
    }
    goto LABEL_45;
  }
}
