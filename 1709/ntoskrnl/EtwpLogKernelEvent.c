/*
 * XREFs of EtwpLogKernelEvent @ 0x14000F4E0
 * Callers:
 *     PerfInfoLogInterrupt @ 0x140003920 (PerfInfoLogInterrupt.c)
 *     EtwTraceTimedEvent @ 0x140008074 (EtwTraceTimedEvent.c)
 *     KiExecuteAllDpcs @ 0x140094F80 (KiExecuteAllDpcs.c)
 *     EtwTraceSiloKernelEvent @ 0x1400AE16C (EtwTraceSiloKernelEvent.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 *     EtwTracePool @ 0x14017D2D8 (EtwTracePool.c)
 *     EtwTraceSiloDcEvent @ 0x14027B96C (EtwTraceSiloDcEvent.c)
 *     EtwpLogMemInfo @ 0x14027C33C (EtwpLogMemInfo.c)
 *     EtwpTraceFileName @ 0x14027D090 (EtwpTraceFileName.c)
 *     EtwpTraceKernelEventWithFilter @ 0x14027D578 (EtwpTraceKernelEventWithFilter.c)
 *     EtwpTraceStackWalk @ 0x14027FF24 (EtwpTraceStackWalk.c)
 *     EtwpCCSwapFlush @ 0x140280A40 (EtwpCCSwapFlush.c)
 *     EtwpTraceLastBranchRecord @ 0x140281DAC (EtwpTraceLastBranchRecord.c)
 *     EtwpTraceCachedStack @ 0x1402820F4 (EtwpTraceCachedStack.c)
 *     EtwpTraceStackKey @ 0x1402821CC (EtwpTraceStackKey.c)
 *     EtwpEnumerateAddressSpace @ 0x1404524D0 (EtwpEnumerateAddressSpace.c)
 *     EtwpLogMemInfoWsHelper @ 0x140746978 (EtwpLogMemInfoWsHelper.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x140746C1C (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpLogTxREvent @ 0x140746E20 (EtwpLogTxREvent.c)
 *     EtwLogPfnInfoRundown @ 0x14074CA6C (EtwLogPfnInfoRundown.c)
 *     EtwpClockSourceRunDown @ 0x14074CD8C (EtwpClockSourceRunDown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x14074CF10 (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x14074D2A8 (EtwpLogAlwaysPresentRundown.c)
 *     EtwpLogGroupMask @ 0x14074D318 (EtwpLogGroupMask.c)
 *     EtwpLogPmcCounterRundown @ 0x14074D464 (EtwpLogPmcCounterRundown.c)
 *     EtwpObjectHandleEnumCallback @ 0x14074D630 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x14074D8FC (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x14074DA54 (EtwpPoolRunDown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x14074E154 (EtwpProcessPerfCtrsRundown.c)
 *     EtwpProcessorRundown @ 0x14074E58C (EtwpProcessorRundown.c)
 *     EtwpSampledProfileRunDown @ 0x14074E9E4 (EtwpSampledProfileRunDown.c)
 *     EtwpSpinLockConfigRunDown @ 0x14074EB78 (EtwpSpinLockConfigRunDown.c)
 *     EtwpSysModuleRunDown @ 0x14074EC14 (EtwpSysModuleRunDown.c)
 *     EtwpSystemImageEnumCallback @ 0x14074ED70 (EtwpSystemImageEnumCallback.c)
 *     EtwpTraceImageRundown @ 0x14074EE68 (EtwpTraceImageRundown.c)
 *     EtwpTraceProcessRundown @ 0x14074EF74 (EtwpTraceProcessRundown.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     EtwpReserveTraceBuffer @ 0x140092980 (EtwpReserveTraceBuffer.c)
 *     EtwpSwitchBuffer @ 0x1400E041C (EtwpSwitchBuffer.c)
 *     EtwpUnlockBufferList @ 0x1400E0828 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1400E0868 (EtwpLockBufferList.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA300 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400FA3C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpCloseLogger @ 0x14012B268 (EtwpCloseLogger.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     EtwpReserveWithPebsIndex @ 0x14027CC38 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x14027CCCC (EtwpReserveWithPmcCounters.c)
 *     EtwpSendTraceEvent @ 0x14027E3AC (EtwpSendTraceEvent.c)
 *     EtwpUpdateEventsLostCount @ 0x14027EED0 (EtwpUpdateEventsLostCount.c)
 *     EtwpStackTraceDispatcher @ 0x14027FCEC (EtwpStackTraceDispatcher.c)
 *     EtwpTraceLastBranchRecord @ 0x140281DAC (EtwpTraceLastBranchRecord.c)
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
  __int64 v8; // r13
  unsigned __int8 v10; // bl
  __int64 v11; // rax
  unsigned int *v12; // rsi
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
  __int64 v23; // rcx
  __m128i v24; // xmm3
  __m128i v25; // xmm3
  __m128i v26; // xmm4
  __m128i v27; // xmm4
  _DWORD *v28; // rcx
  unsigned int v29; // eax
  unsigned int v30; // r13d
  __int64 v31; // rcx
  unsigned int v32; // edx
  _QWORD *v33; // r15
  unsigned __int64 *v34; // r12
  unsigned __int64 v35; // rdi
  signed __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rax
  unsigned __int32 v39; // r8d
  unsigned int v40; // r9d
  unsigned __int32 v41; // edx
  __int64 v42; // rax
  unsigned __int64 v43; // rcx
  char *v44; // rax
  char *v45; // r12
  __int64 v46; // rdi
  signed __int64 *v47; // roff
  signed __int64 v48; // rax
  unsigned __int64 v49; // rdx
  signed __int64 v50; // rtt
  unsigned __int16 v51; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  _DWORD *v55; // r8
  int v56; // edi
  __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // rcx
  signed __int64 v60; // rax
  signed __int64 v61; // rtt
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v63; // r8
  signed __int64 v64; // r9
  signed __int64 v65; // rcx
  __int64 v66; // rdx
  unsigned int v67; // ecx
  __int64 v68; // rdx
  char v69[8]; // [rsp+30h] [rbp-49h] BYREF
  void *v70; // [rsp+38h] [rbp-41h]
  unsigned int v71; // [rsp+40h] [rbp-39h]
  _DWORD Size[3]; // [rsp+44h] [rbp-35h] BYREF
  unsigned __int32 v73; // [rsp+50h] [rbp-29h]
  unsigned int v74; // [rsp+54h] [rbp-25h]
  unsigned int v75; // [rsp+58h] [rbp-21h]
  unsigned __int64 v76; // [rsp+60h] [rbp-19h] BYREF
  signed __int64 *v77; // [rsp+68h] [rbp-11h]
  unsigned __int32 v78; // [rsp+70h] [rbp-9h]
  unsigned int *v79; // [rsp+78h] [rbp-1h]
  __int64 v80; // [rsp+80h] [rbp+7h]
  __int64 v81; // [rsp+D8h] [rbp+5Fh]

  v81 = a2;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v10 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 416) + 8LL * a3), 1u) )
    {
      KeLeaveCriticalRegion();
      return;
    }
    v10 = 1;
  }
  v11 = *(_QWORD *)(v8 + 424);
  v80 = 8 * v7;
  v12 = *(unsigned int **)(8 * v7 + v11);
  v79 = v12;
  if ( ((unsigned __int8)v12 & 1) != 0 )
  {
    EtwpCloseLogger((unsigned int)v7, v8, v10);
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
          a2 = 2LL * (v18 + 3);
          v23 = 2LL * (v18 + 2);
          v24 = _mm_add_epi32(
                  _mm_unpacklo_epi32(
                    v20,
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v18 - 1) + 8)),
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v18 + 1) + 8)))),
                  v16);
          v18 += 8;
          v16 = v24;
          v25 = _mm_add_epi32(
                  _mm_unpacklo_epi32(
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v23 + 8)), v21),
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * a2 + 8)),
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v22 + 8)))),
                  v17);
          v17 = v25;
        }
        while ( v15 < (v6 & 0xFFFFFFF8) );
        v26 = _mm_add_epi32(v25, v16);
        v27 = _mm_add_epi32(v26, _mm_srli_si128(v26, 8));
        v14 = _mm_cvtsi128_si32(_mm_add_epi32(v27, _mm_srli_si128(v27, 4)));
        Size[0] = v14;
      }
      if ( v15 < v6 )
      {
        v28 = (_DWORD *)(16LL * v15 + a1 + 8);
        a2 = v6 - v15;
        do
        {
          v14 += *v28;
          v28 += 4;
          --a2;
        }
        while ( a2 );
        Size[0] = v14;
      }
    }
    if ( (a6 & 0x100) != 0 )
    {
      if ( (a6 & 0x10000000) != 0 )
      {
        v57 = EtwpReserveTraceBuffer((_DWORD)v12, v14 + 24, (unsigned int)&v76, (unsigned int)&Size[1], a6);
        v58 = v57;
        if ( !v57 )
          goto LABEL_43;
        *(_DWORD *)v57 = (unsigned __int8)a6 | 0xC0040000;
        *(_QWORD *)(v57 + 16) = *(_QWORD *)&Size[1];
        *(_WORD *)(v57 + 4) = v14 + 24;
        *(_WORD *)(v57 + 6) = a5;
        *(_DWORD *)(v57 + 8) = KeGetCurrentThread()[1].CurrentRunTime;
        *(_DWORD *)(v57 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
        v44 = (char *)(v57 + 24);
        v70 = (void *)(v58 + 24);
      }
      else
      {
        v70 = KeGetCurrentThread();
        v53 = EtwpReserveTraceBuffer((_DWORD)v12, v14 + 32, (unsigned int)&v76, (unsigned int)&Size[1], a6);
        v54 = v53;
        if ( !v53 )
          goto LABEL_43;
        v55 = v70;
        *(_DWORD *)v53 = (unsigned __int8)a6 | 0xC0020000;
        *(_QWORD *)(v53 + 16) = *(_QWORD *)&Size[1];
        *(_WORD *)(v53 + 4) = v14 + 32;
        *(_WORD *)(v53 + 6) = a5;
        *(_DWORD *)(v53 + 8) = v55[400];
        *(_DWORD *)(v53 + 12) = v55[398];
        *(_DWORD *)(v53 + 24) = v55[163];
        *(_DWORD *)(v53 + 28) = v55[183];
        v44 = (char *)(v53 + 32);
        v70 = (void *)(v54 + 32);
      }
    }
    else
    {
      v29 = v12[208];
      if ( (v29 & 0xC00) == 0 )
      {
LABEL_15:
        v30 = v14 + 16;
        if ( (v12[4] & 0x80000000) != 0 || v30 > v12[2] )
        {
LABEL_103:
          EtwpUpdateEventsLostCount(v12, a2);
          goto LABEL_43;
        }
        v31 = *v12;
        v32 = v12[1];
        v75 = (v14 + 23) & 0xFFFFFFF8;
        v71 = v32;
        v74 = v31;
        while ( 1 )
        {
          LODWORD(v70) = KeGetCurrentPrcb()->Number;
          v33 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 282) + 4104LL) + ((unsigned __int64)(unsigned int)v70 << 6));
          if ( (v12[3] & 0x10000000) != 0 )
            v34 = (unsigned __int64 *)(v12 + 36);
          else
            v34 = (unsigned __int64 *)(*v33 + 8 * v31);
          v69[0] = 0;
          _m_prefetchw(v34);
          v35 = *v34;
          if ( (*v34 & 0xF) != 0 )
          {
            do
            {
              v36 = _InterlockedCompareExchange64((volatile signed __int64 *)v34, v35 - 1, v35);
              if ( v35 == v36 )
                break;
              v35 = v36;
            }
            while ( (v36 & 0xF) != 0 );
          }
          if ( v35 )
          {
            v37 = v35 & 0xF;
            if ( (v35 & 0xF) != 0 )
            {
              v35 &= 0xFFFFFFFFFFFFFFF0uLL;
              if ( v37 == 1 )
              {
                _InterlockedExchangeAdd((volatile signed __int32 *)(v35 + 12), 0xFu);
                _m_prefetchw(v34);
                v60 = *v34;
                while ( (v60 & 0xF) == 0 )
                {
                  if ( v35 != (v60 & 0xFFFFFFFFFFFFFFF0uLL) )
                    break;
                  v61 = v60;
                  v60 = _InterlockedCompareExchange64((volatile signed __int64 *)v34, v60 + 15, v60);
                  if ( v61 == v60 )
                    goto LABEL_25;
                }
                _InterlockedExchangeAdd((volatile signed __int32 *)(v35 + 12), 0xFFFFFFF1);
              }
            }
            else
            {
              EtwpLockBufferList(v12, v69);
              v35 = *v34 & 0xFFFFFFFFFFFFFFF0uLL;
              if ( v35 )
                _InterlockedIncrement((volatile signed __int32 *)(v35 + 12));
              EtwpUnlockBufferList(v12, v69);
              v32 = v71;
            }
LABEL_25:
            if ( v35 )
            {
              _m_prefetchw((const void *)(v35 + 8));
              v73 = *(_DWORD *)(v35 + 8);
              if ( v73 <= v32 )
              {
                while ( 1 )
                {
                  v38 = (*((__int64 (**)(void))v12 + 5))();
                  v39 = v73;
                  v40 = v75;
                  *(_QWORD *)&Size[1] = v38;
                  v41 = _InterlockedCompareExchange((volatile signed __int32 *)(v35 + 8), v73 + v75, v73);
                  if ( v39 == v41 )
                    break;
                  v73 = v41;
                  if ( v41 > v71 )
                    goto LABEL_52;
                }
                if ( v41 + v40 <= v71 )
                {
                  v42 = v33[1];
                  v76 = v35;
                  v77 = (signed __int64 *)v34;
                  v78 = v41;
                  ++*(_QWORD *)(v42 + 8LL * v74);
                  v43 = v35 + v41;
                  if ( v43 )
                  {
                    v14 = Size[0];
                    *(_QWORD *)(v43 + 8) = *(_QWORD *)&Size[1];
                    v70 = (void *)(v43 + 16);
                    v6 = a4;
                    *(_DWORD *)v43 = (unsigned __int8)a6 | 0xC0110000;
                    *(_WORD *)(v43 + 6) = a5;
                    v44 = (char *)v70;
                    *(_WORD *)(v43 + 4) = v30;
                    v13 = 0;
                    goto LABEL_31;
                  }
LABEL_43:
                  if ( v10 )
                  {
                    ExReleaseRundownProtectionCacheAwareEx(
                      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v81 + 416) + v80),
                      1u);
                    KeLeaveCriticalRegionThread(KeGetCurrentThread());
                  }
                  return;
                }
                *(_DWORD *)(v35 + 4) = v41;
              }
            }
          }
LABEL_52:
          v56 = EtwpSwitchBuffer((_DWORD)v12, v35, (_DWORD)v34, (_DWORD)v70, a6);
          if ( (v12[3] & 0x4000000) != 0 )
          {
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            v63 = PerformanceCounter.QuadPart
                - _InterlockedExchange64((volatile __int64 *)v12 + 302, PerformanceCounter.QuadPart);
            do
            {
              v64 = *((_QWORD *)v12 + 303);
              if ( v64 )
              {
                a2 = ((v64 + v63 + 2 * v64) >> 63) & 3;
                v65 = (v64 + v63 + 2 * v64) / 4;
              }
              else
              {
                v65 = v63;
              }
            }
            while ( v64 != _InterlockedCompareExchange64((volatile signed __int64 *)v12 + 303, v65, v64) );
          }
          if ( v56 < 0 )
            goto LABEL_103;
          v31 = v74;
          v32 = v71;
        }
      }
      if ( (v29 & 0x400) != 0 && (a2 = 1316LL, a5 == 1316) )
      {
        v44 = (char *)EtwpReserveWithPebsIndex((_DWORD)v12, 1316, v14, (unsigned int)&v76, (__int64)&Size[1], a6);
        v70 = v44;
      }
      else
      {
        if ( (v29 & 0x800) == 0 )
          goto LABEL_15;
        a2 = 0LL;
        if ( !*(_DWORD *)(*((_QWORD *)v12 + 269) + 32LL) )
          goto LABEL_15;
        while ( 1 )
        {
          v59 = *((_QWORD *)v12 + 269);
          if ( *(_WORD *)(v59 + 2LL * (unsigned int)a2 + 36) == a5 )
            break;
          a2 = (unsigned int)(a2 + 1);
          if ( (unsigned int)a2 >= *(_DWORD *)(v59 + 32) )
            goto LABEL_15;
        }
        v44 = (char *)EtwpReserveWithPmcCounters((_DWORD)v12, a5, v14, (unsigned int)&v76, (__int64)&Size[1], a6);
        v70 = v44;
      }
    }
LABEL_31:
    if ( !v44 )
      goto LABEL_43;
    v45 = v44;
    if ( v6 )
    {
      while ( 1 )
      {
        v46 = *(unsigned int *)(a1 + 8);
        if ( (unsigned int)v46 > v14 )
          break;
        memmove(v45, *(const void **)a1, (unsigned int)v46);
        v45 += v46;
        v14 -= v46;
        ++v13;
        a1 += 16LL;
        if ( v13 >= a4 )
        {
          v12 = v79;
          goto LABEL_36;
        }
      }
      memset(v70, 0, Size[0]);
      v12 = v79;
      EtwpUpdateEventsLostCount(v79, v66);
    }
LABEL_36:
    if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) && (v12[3] & 0x80000) != 0 )
      EtwpSendTraceEvent(v12, &v76);
    v47 = v77;
    _m_prefetchw(v77);
    v48 = *v47;
    v49 = v76;
    if ( (*v47 ^ v76) >= 0xF )
    {
LABEL_58:
      _InterlockedDecrement((volatile signed __int32 *)(v49 + 12));
    }
    else
    {
      while ( 1 )
      {
        v50 = v48;
        v48 = _InterlockedCompareExchange64(v77, v48 + 1, v48);
        if ( v50 == v48 )
          break;
        v49 = v76;
        if ( (v48 ^ v76) >= 0xF )
          goto LABEL_58;
      }
    }
    if ( (v12[208] & 0x80u) != 0 )
    {
      v51 = a5;
      if ( !_bittest(*((const signed __int32 **)v12 + 267), a5 & 0x1FFF) )
        goto LABEL_42;
      EtwpStackTraceDispatcher(v12, &Size[1], 0LL, a6);
    }
    v51 = a5;
LABEL_42:
    if ( (v12[208] & 0x8000) != 0 && *(_DWORD *)(*((_QWORD *)v12 + 270) + 8LL) )
    {
      v67 = 0;
      while ( 1 )
      {
        v68 = *((_QWORD *)v12 + 270);
        if ( *(_WORD *)(v68 + 2LL * v67 + 12) == v51 )
          break;
        if ( ++v67 >= *(_DWORD *)(v68 + 8) )
          goto LABEL_43;
      }
      EtwpTraceLastBranchRecord(v12, &Size[1], 0LL, a6);
    }
    goto LABEL_43;
  }
}
