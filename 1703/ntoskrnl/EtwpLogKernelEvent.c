/*
 * XREFs of EtwpLogKernelEvent @ 0x1400F22E0
 * Callers:
 *     PerfInfoLogInterrupt @ 0x140010A80 (PerfInfoLogInterrupt.c)
 *     EtwTraceTimedEvent @ 0x140020870 (EtwTraceTimedEvent.c)
 *     EtwpTraceFileName @ 0x140028630 (EtwpTraceFileName.c)
 *     EtwpCCSwapFlush @ 0x140028E80 (EtwpCCSwapFlush.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     KiExecuteAllDpcs @ 0x1400F1ED0 (KiExecuteAllDpcs.c)
 *     EtwTracePool @ 0x14017D8C0 (EtwTracePool.c)
 *     EtwpLogMemInfo @ 0x1402541D0 (EtwpLogMemInfo.c)
 *     EtwpTraceKernelEventWithFilter @ 0x140254DD8 (EtwpTraceKernelEventWithFilter.c)
 *     EtwpTraceStackWalk @ 0x140256F38 (EtwpTraceStackWalk.c)
 *     EtwpTraceCachedStack @ 0x14025849C (EtwpTraceCachedStack.c)
 *     EtwpTraceStackKey @ 0x140258578 (EtwpTraceStackKey.c)
 *     EtwpLogGroupMask @ 0x140434E3C (EtwpLogGroupMask.c)
 *     EtwpLogAlwaysPresentRundown @ 0x140435078 (EtwpLogAlwaysPresentRundown.c)
 *     EtwpTraceProcessRundown @ 0x1404B06C4 (EtwpTraceProcessRundown.c)
 *     EtwpSysModuleRunDown @ 0x1404B0BC8 (EtwpSysModuleRunDown.c)
 *     EtwpSystemImageEnumCallback @ 0x1404B0E60 (EtwpSystemImageEnumCallback.c)
 *     EtwpTraceImageRundown @ 0x1404F8E08 (EtwpTraceImageRundown.c)
 *     EtwpEnumerateAddressSpace @ 0x1404FA9C0 (EtwpEnumerateAddressSpace.c)
 *     CmEtwRunDown @ 0x140660B64 (CmEtwRunDown.c)
 *     CmpLogHiveRundownEvent @ 0x14066117C (CmpLogHiveRundownEvent.c)
 *     MmIdentifyPhysicalMemory @ 0x1406B4DF0 (MmIdentifyPhysicalMemory.c)
 *     MmPerfLogSessionRundown @ 0x1406B66B8 (MmPerfLogSessionRundown.c)
 *     MmLogQueryCombineStats @ 0x1406BF734 (MmLogQueryCombineStats.c)
 *     EtwpLogMemInfoWsHelper @ 0x14070B850 (EtwpLogMemInfoWsHelper.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x14070BAE8 (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpLogTxREvent @ 0x14070BCDC (EtwpLogTxREvent.c)
 *     EtwLogPfnInfoRundown @ 0x14070FDCC (EtwLogPfnInfoRundown.c)
 *     EtwpClockSourceRunDown @ 0x1407100C8 (EtwpClockSourceRunDown.c)
 *     EtwpExecutiveResourceConfigRunDown @ 0x140710240 (EtwpExecutiveResourceConfigRunDown.c)
 *     EtwpLogPmcCounterRundown @ 0x14071038C (EtwpLogPmcCounterRundown.c)
 *     EtwpObjectHandleEnumCallback @ 0x140710550 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x140710810 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x140710968 (EtwpPoolRunDown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x140710D94 (EtwpProcessPerfCtrsRundown.c)
 *     EtwpProcessorRundown @ 0x140710EC4 (EtwpProcessorRundown.c)
 *     EtwpSampledProfileRunDown @ 0x140711320 (EtwpSampledProfileRunDown.c)
 *     EtwpSpinLockConfigRunDown @ 0x1407114B4 (EtwpSpinLockConfigRunDown.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400053B0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140061BB0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpReserveTraceBuffer @ 0x140086960 (EtwpReserveTraceBuffer.c)
 *     EtwpCloseLogger @ 0x14008788C (EtwpCloseLogger.c)
 *     EtwpSwitchBuffer @ 0x1400878C8 (EtwpSwitchBuffer.c)
 *     EtwpUnlockBufferList @ 0x140087CE0 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x140087D24 (EtwpLockBufferList.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     EtwpUpdateEventsLostCount @ 0x140131B10 (EtwpUpdateEventsLostCount.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     EtwpReserveWithPebsIndex @ 0x140254854 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x1402548E8 (EtwpReserveWithPmcCounters.c)
 *     EtwpSendTraceEvent @ 0x140255AF0 (EtwpSendTraceEvent.c)
 *     EtwpStackTraceDispatcher @ 0x140256CE0 (EtwpStackTraceDispatcher.c)
 */

void __fastcall EtwpLogKernelEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  __int64 v6; // r12
  __int64 v9; // rsi
  char v10; // bl
  __int64 v11; // r15
  unsigned int v12; // r12d
  int v13; // esi
  unsigned int v14; // r10d
  __m128i v15; // xmm5
  __m128i v16; // xmm4
  unsigned int v17; // esi
  __int64 v18; // r9
  __m128i v19; // xmm3
  __m128i v20; // xmm0
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __m128i v24; // xmm3
  __m128i v25; // xmm3
  __m128i v26; // xmm4
  __m128i v27; // xmm4
  _DWORD *v28; // rcx
  __int64 v29; // rdx
  unsigned __int8 v30; // r13
  int v31; // eax
  unsigned int v32; // r11d
  unsigned int v33; // r10d
  unsigned __int64 v34; // r13
  signed __int64 *p_Lock; // r8
  signed __int64 v36; // rsi
  signed __int64 v37; // rax
  int v38; // eax
  unsigned __int64 v39; // rsi
  unsigned __int32 v40; // r9d
  __int64 (__fastcall *v41)(); // rax
  __int64 v42; // rax
  unsigned __int32 v43; // eax
  unsigned __int64 v44; // rcx
  unsigned __int16 v45; // r9
  unsigned int v46; // eax
  __int64 v47; // rax
  char *v48; // r13
  unsigned int v49; // r15d
  __int64 v50; // rdi
  __int64 v51; // rdi
  signed __int64 *v52; // roff
  signed __int64 v53; // rax
  unsigned __int64 v54; // rdx
  signed __int64 v55; // rtt
  int v56; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  LONG *p_LockNV; // r8
  int v61; // esi
  __int64 v62; // rax
  __int64 v63; // r8
  unsigned int v64; // edx
  __int64 v65; // rcx
  signed __int64 v66; // rax
  signed __int64 v67; // rtt
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v69; // r8
  signed __int64 v70; // r9
  signed __int64 v71; // rcx
  unsigned int Size; // [rsp+30h] [rbp-59h]
  __int16 v73; // [rsp+38h] [rbp-51h]
  char *v74; // [rsp+38h] [rbp-51h]
  __int64 v75; // [rsp+40h] [rbp-49h] BYREF
  struct _KTHREAD *v76; // [rsp+48h] [rbp-41h]
  unsigned int v77; // [rsp+50h] [rbp-39h]
  unsigned __int32 v78; // [rsp+54h] [rbp-35h]
  unsigned int v79; // [rsp+58h] [rbp-31h]
  unsigned int v80; // [rsp+5Ch] [rbp-2Dh]
  unsigned int Number; // [rsp+60h] [rbp-29h]
  __int64 v82; // [rsp+68h] [rbp-21h]
  unsigned __int64 v83; // [rsp+70h] [rbp-19h] BYREF
  signed __int64 *v84; // [rsp+78h] [rbp-11h]
  unsigned __int32 v85; // [rsp+80h] [rbp-9h]
  __int64 v86; // [rsp+88h] [rbp-1h]
  __int64 v87; // [rsp+90h] [rbp+7h]
  __int64 v88; // [rsp+E8h] [rbp+5Fh] BYREF
  unsigned int v89; // [rsp+F8h] [rbp+6Fh]

  v89 = a4;
  v88 = a2;
  v6 = EtwpHostSiloState;
  v86 = EtwpHostSiloState;
  v9 = a3;
  v10 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v6 + 8LL * a3 + 408), 1u) )
    {
      KeLeaveCriticalRegion();
      return;
    }
    v10 = 1;
  }
  v11 = *(_QWORD *)(v6 + 8 * v9 + 920);
  v87 = v9;
  v82 = v11;
  if ( (v11 & 1) != 0 )
  {
    EtwpCloseLogger(v9, v6, v10);
  }
  else if ( v11 )
  {
    v12 = 0;
    Size = 0;
    v13 = 0;
    v14 = 0;
    if ( a4 )
    {
      if ( a4 >= 8 )
      {
        v15 = 0LL;
        v16 = 0LL;
        v17 = 2;
        do
        {
          v18 = 2LL * v14;
          v14 += 8;
          v19 = _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v18 + 8)),
                  _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * v17 + 8)));
          v20 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v17 + 4) + 8));
          v21 = 2LL * (v17 + 5);
          v22 = 2LL * (v17 + 3);
          v23 = 2LL * (v17 + 2);
          v24 = _mm_add_epi32(
                  _mm_unpacklo_epi32(
                    v19,
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v17 - 1) + 8)),
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16LL * (v17 + 1) + 8)))),
                  v15);
          v17 += 8;
          v15 = v24;
          v25 = _mm_add_epi32(
                  _mm_unpacklo_epi32(
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v23 + 8)), v20),
                    _mm_unpacklo_epi32(
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v22 + 8)),
                      _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8 * v21 + 8)))),
                  v16);
          v16 = v25;
        }
        while ( v14 < a4 - (a4 & 7) );
        v26 = _mm_add_epi32(v25, v15);
        v27 = _mm_add_epi32(v26, _mm_srli_si128(v26, 8));
        v13 = _mm_cvtsi128_si32(_mm_add_epi32(v27, _mm_srli_si128(v27, 4)));
        Size = v13;
      }
      if ( v14 < a4 )
      {
        v28 = (_DWORD *)(16LL * v14 + a1 + 8);
        v29 = a4 - v14;
        do
        {
          v13 += *v28;
          v28 += 4;
          --v29;
        }
        while ( v29 );
        Size = v13;
      }
    }
    v30 = a6;
    if ( (a6 & 0x100) == 0 )
    {
      v31 = *(_DWORD *)(v11 + 816);
      if ( (v31 & 0xC00) != 0 )
      {
        if ( (v31 & 0x400) != 0 && a5 == 1316 )
        {
          v47 = EtwpReserveWithPebsIndex(v11, 1316, v13, (unsigned int)&v83, (__int64)&v75, a6);
          v45 = a5;
          v74 = (char *)v47;
          goto LABEL_33;
        }
        if ( (v31 & 0x800) != 0 )
        {
          v64 = 0;
          if ( *(_DWORD *)(*(_QWORD *)(v11 + 848) + 32LL) )
          {
            do
            {
              v65 = *(_QWORD *)(v11 + 848);
              if ( *(_WORD *)(v65 + 2LL * v64 + 36) == a5 )
              {
                v47 = EtwpReserveWithPmcCounters(v11, a5, v13, (unsigned int)&v83, (__int64)&v75, a6);
                v45 = a5;
                v74 = (char *)v47;
                goto LABEL_33;
              }
              ++v64;
            }
            while ( v64 < *(_DWORD *)(v65 + 32) );
          }
        }
      }
      v73 = v13 + 16;
      if ( *(int *)(v11 + 16) < 0 || (unsigned int)(v13 + 16) > *(_DWORD *)(v11 + 8) )
      {
LABEL_101:
        EtwpUpdateEventsLostCount(v11);
        goto LABEL_44;
      }
      v32 = *(_DWORD *)(v11 + 4);
      v33 = *(_DWORD *)v11;
      v80 = (v13 + 23) & 0xFFFFFFF8;
      v77 = v32;
      v79 = v33;
      while ( 1 )
      {
        Number = KeGetCurrentPrcb()->Number;
        v34 = *(_QWORD *)(*(_QWORD *)(v11 + 944) + 5104LL) + ((unsigned __int64)Number << 10);
        if ( (*(_DWORD *)(v11 + 12) & 0x10000000) != 0 )
          p_Lock = (signed __int64 *)(v11 + 128);
        else
          p_Lock = (signed __int64 *)(v34 + 8LL * v33);
        v76 = (struct _KTHREAD *)p_Lock;
        LOBYTE(v88) = 0;
        _m_prefetchw(p_Lock);
        v36 = *p_Lock;
        if ( (*p_Lock & 0xF) != 0 )
        {
          do
          {
            v37 = _InterlockedCompareExchange64(p_Lock, v36 - 1, v36);
            if ( v36 == v37 )
              break;
            v36 = v37;
          }
          while ( (v37 & 0xF) != 0 );
        }
        if ( v36 )
        {
          v38 = v36 & 0xF;
          if ( (v36 & 0xF) != 0 )
          {
            v39 = v36 & 0xFFFFFFFFFFFFFFF0uLL;
            if ( v38 == 1 )
            {
              _InterlockedExchangeAdd((volatile signed __int32 *)(v39 + 12), 0xFu);
              _m_prefetchw(p_Lock);
              v66 = *p_Lock;
              while ( (v66 & 0xF) == 0 )
              {
                if ( v39 != (v66 & 0xFFFFFFFFFFFFFFF0uLL) )
                  break;
                v67 = v66;
                v66 = _InterlockedCompareExchange64(p_Lock, v66 + 15, v66);
                if ( v67 == v66 )
                  goto LABEL_25;
              }
              _InterlockedExchangeAdd((volatile signed __int32 *)(v39 + 12), 0xFFFFFFF1);
            }
          }
          else
          {
            EtwpLockBufferList(v11, (unsigned __int8 *)&v88);
            v39 = *(_QWORD *)&v76->Header.Lock & 0xFFFFFFFFFFFFFFF0uLL;
            if ( v39 )
              _InterlockedIncrement((volatile signed __int32 *)(v39 + 12));
            EtwpUnlockBufferList(v11, (unsigned __int8 *)&v88);
            p_Lock = (signed __int64 *)&v76->Header.Lock;
            v32 = v77;
          }
LABEL_25:
          if ( v39 )
          {
            _m_prefetchw((const void *)(v39 + 8));
            v40 = *(_DWORD *)(v39 + 8);
            v78 = v40;
            if ( v40 <= v32 )
            {
              while ( 1 )
              {
                v41 = *(__int64 (__fastcall **)())(v11 + 40);
                if ( v41 == EtwpGetCycleCount )
                {
                  v42 = __rdtsc();
                }
                else
                {
                  v42 = ((__int64 (__fastcall *)(__int64 (__fastcall *)()))v41)(EtwpGetCycleCount);
                  v40 = v78;
                  v32 = v77;
                }
                v75 = v42;
                v43 = _InterlockedCompareExchange((volatile signed __int32 *)(v39 + 8), v40 + v80, v40);
                if ( v40 == v43 )
                  break;
                v40 = v43;
                v78 = v43;
                if ( v43 > v32 )
                  goto LABEL_54;
              }
              if ( v43 + v80 > v32 )
              {
                *(_DWORD *)(v39 + 4) = v43;
LABEL_54:
                p_Lock = (signed __int64 *)&v76->Header.Lock;
                goto LABEL_55;
              }
              v85 = v43;
              v83 = v39;
              ++*(_QWORD *)(v34 + 8LL * v79 + 512);
              v84 = (signed __int64 *)&v76->Header.Lock;
              v44 = v39 + v43;
              if ( !v44 )
                goto LABEL_44;
              v45 = a5;
              *(_QWORD *)(v44 + 8) = v75;
              v46 = (unsigned __int8)a6 | 0xC0110000;
              *(_WORD *)(v44 + 6) = v45;
              *(_DWORD *)v44 = v46;
              LOWORD(v46) = v73;
              v74 = (char *)(v44 + 16);
              v13 = Size;
              *(_WORD *)(v44 + 4) = v46;
              v47 = v44 + 16;
LABEL_33:
              if ( v47 )
              {
                v48 = v74;
                v49 = v13;
                if ( a4 )
                {
                  while ( 1 )
                  {
                    v50 = *(unsigned int *)(a1 + 8);
                    if ( (unsigned int)v50 > v49 )
                      break;
                    memmove(v48, *(const void **)a1, (unsigned int)v50);
                    v48 += v50;
                    v49 -= v50;
                    ++v12;
                    a1 += 16LL;
                    if ( v12 >= v89 )
                    {
                      v45 = a5;
                      goto LABEL_38;
                    }
                  }
                  memset(v74, 0, Size);
                  v51 = v82;
                  EtwpUpdateEventsLostCount(v82);
                  v45 = a5;
                }
                else
                {
LABEL_38:
                  v51 = v82;
                }
                if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
                  && (*(_DWORD *)(v51 + 12) & 0x80000) != 0 )
                {
                  EtwpSendTraceEvent(v51, &v83);
                  v45 = a5;
                }
                v52 = v84;
                _m_prefetchw(v84);
                v53 = *v52;
                v54 = v83;
                if ( (*v52 ^ v83) >= 0xF )
                {
LABEL_62:
                  _InterlockedDecrement((volatile signed __int32 *)(v54 + 12));
                }
                else
                {
                  while ( 1 )
                  {
                    v55 = v53;
                    v53 = _InterlockedCompareExchange64(v84, v53 + 1, v53);
                    if ( v55 == v53 )
                      break;
                    v54 = v83;
                    if ( (v53 ^ v83) >= 0xF )
                      goto LABEL_62;
                  }
                }
                v56 = *(_DWORD *)(v51 + 816);
                if ( (v56 & 0x80u) != 0 && _bittest(*(const signed __int32 **)(v51 + 832), v45 & 0x1FFF) )
                  EtwpStackTraceDispatcher(*(_DWORD *)v51 | v56 & 0xFFFF0000, &v75, 0LL, a6);
              }
              goto LABEL_44;
            }
          }
        }
        else
        {
          v39 = 0LL;
        }
LABEL_55:
        v61 = EtwpSwitchBuffer(v11, v39, p_Lock, Number, a6);
        if ( (*(_DWORD *)(v11 + 12) & 0x4000000) != 0 )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v69 = PerformanceCounter.QuadPart
              - _InterlockedExchange64((volatile __int64 *)(v11 + 1104), PerformanceCounter.QuadPart);
          do
          {
            v70 = *(_QWORD *)(v11 + 1112);
            if ( v70 )
              v71 = (v70 + v69 + 2 * v70) / 4;
            else
              v71 = v69;
          }
          while ( v70 != _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 1112), v71, v70) );
        }
        if ( v61 < 0 )
          goto LABEL_101;
        v33 = v79;
        v32 = v77;
      }
    }
    if ( (a6 & 0x10000000) != 0 )
    {
      v62 = EtwpReserveTraceBuffer((int *)v11, v13 + 24, (__int64)&v83, &v75, a6);
      v63 = v62;
      if ( v62 )
      {
        v45 = a5;
        *(_WORD *)(v62 + 6) = a5;
        *(_DWORD *)v62 = v30 | 0xC0040000;
        *(_QWORD *)(v62 + 16) = v75;
        *(_WORD *)(v62 + 4) = v13 + 24;
        *(_DWORD *)(v62 + 8) = KeGetCurrentThread()[1].KernelStack;
        *(_DWORD *)(v62 + 12) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
        v47 = v62 + 24;
        v74 = (char *)(v63 + 24);
        goto LABEL_33;
      }
    }
    else
    {
      v76 = KeGetCurrentThread();
      v58 = EtwpReserveTraceBuffer((int *)v11, v13 + 32, (__int64)&v83, &v75, a6);
      v59 = v58;
      if ( v58 )
      {
        p_LockNV = &v76->Header.LockNV;
        v45 = a5;
        *(_WORD *)(v58 + 6) = a5;
        *(_DWORD *)v58 = v30 | 0xC0020000;
        *(_QWORD *)(v58 + 16) = v75;
        *(_WORD *)(v58 + 4) = v13 + 32;
        *(_DWORD *)(v58 + 8) = p_LockNV[400];
        *(_DWORD *)(v58 + 12) = p_LockNV[398];
        *(_DWORD *)(v58 + 24) = p_LockNV[163];
        *(_DWORD *)(v58 + 28) = p_LockNV[183];
        v47 = v58 + 32;
        v74 = (char *)(v59 + 32);
        goto LABEL_33;
      }
    }
LABEL_44:
    if ( v10 )
    {
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v86 + 8 * v87 + 408), 1u);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
}
