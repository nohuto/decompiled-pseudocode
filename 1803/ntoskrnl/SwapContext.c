// see https://github.com/nohuto/windbg-notes/blob/main/assets/SwapContext.c for a decompilation attempt

/*
 * XREFs of SwapContext @ 0x1401B1E80
 * Callers:
 *     KiIdleLoop @ 0x1401AE5C0 (KiIdleLoop.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 *     KxDispatchInterrupt @ 0x1401B1CB0 (KxDispatchInterrupt.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x14009E860 (KiBeginThreadAccountingPeriod.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceContextSwap @ 0x140172870 (EtwTraceContextSwap.c)
 *     KiClearLastBranchRecordStack @ 0x140177380 (KiClearLastBranchRecordStack.c)
 *     KiUpdateSpeculationControl @ 0x1401A6070 (KiUpdateSpeculationControl.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x14022E4B0 (HvlSwitchVirtualAddressSpace.c)
 *     KiResetProcessorTraceBuffer @ 0x140241230 (KiResetProcessorTraceBuffer.c)
 *     KeCheckAndApplyBamQos @ 0x140247AD0 (KeCheckAndApplyBamQos.c)
 *     KiCheckAndApplyCacheIsolation @ 0x140247FA0 (KiCheckAndApplyCacheIsolation.c)
 */

bool __fastcall SwapContext(unsigned __int8 a1)
{
  __int64 v1; // rbx
  ULONG_PTR v2; // rdi
  ULONG_PTR v3; // rsi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // r12
  ULONG_PTR v7; // rbp
  unsigned __int64 v9; // rdx
  ULONG64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r14
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // edx
  __int64 v24; // r8
  bool v25; // zf
  __int64 v26; // rcx
  int v28; // ebp
  _BYTE v29[32]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int8 v30; // [rsp+28h] [rbp-10h]

  _m_prefetchw((const void *)(v3 + 113));
  v30 = a1;
  if ( *(_BYTE *)(v3 + 113) )
  {
    v28 = 0;
    do
    {
      if ( (++v28 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
        HvlNotifyLongSpinWait();
      _mm_pause();
    }
    while ( *(_BYTE *)(v3 + 113) );
  }
  *(_BYTE *)(v3 + 113) = 1;
  _disable();
  v4 = __rdtsc();
  v5 = (((unsigned __int64)HIDWORD(v4) << 32) | (unsigned int)v4) - *(_QWORD *)(v1 + 23488);
  *(_QWORD *)(v1 + 23608) += v5;
  *(_QWORD *)(v1 + 23488) += v5;
  v6 = v5;
  if ( *(_BYTE *)(v1 + 6) )
  {
    *(_BYTE *)(v1 + 6) = 0;
    if ( *(_QWORD *)(v1 + 24) != v3 )
      HalRequestSoftwareInterrupt(2LL);
  }
  if ( (*(_BYTE *)(v3 + 2) & 0x36) != 0 )
  {
    KiBeginThreadAccountingPeriod(v1, (struct _KTHREAD *)v3, v6);
  }
  else
  {
    --*(_BYTE *)(v1 + 32);
    _enable();
  }
  ++*(_DWORD *)(v1 + 11580);
  v7 = KeFeatureBits;
  if ( KiCacheIsoBitmap && (KeFeatureBits & 0x100000000000LL) != 0 )
    KiCheckAndApplyCacheIsolation(v1, v3);
  if ( *(_QWORD *)(v1 + 24) != v3 && ((*(_DWORD *)(v3 + 120) ^ *(_DWORD *)(v1 + 236)) & 3) != 0 )
    KeCheckAndApplyBamQos(v1, v3);
  _RCX = *(_DWORD **)(v2 + 96);
  v9 = *(_QWORD *)(v2 + 592) & 0xFFFFFFFFFFFFFFFDuLL;
  if ( v9 )
  {
    if ( (v7 & 0x4000000000LL) != 0 )
    {
      __asm { xsaves  byte ptr [rcx] }
    }
    else if ( (v7 & 0x8000) != 0 )
    {
      _xsaveopt(_RCX, (unsigned int)v9);
    }
    else if ( (v7 & 0x800000) != 0 )
    {
      _xsave(_RCX, (unsigned int)v9);
    }
    else
    {
      _fxsave(_RCX);
    }
  }
  _RCX[6] = _mm_getcsr();
  *(_QWORD *)(v2 + 88) = v29;
  if ( *(char *)(v2 + 3) < 0 )
  {
    v10 = __readmsr(0xC0000102);
    if ( v10 >= MmUserProbeAddress )
      v10 = MmUserProbeAddress;
    *(_QWORD *)(*(_QWORD *)(v2 + 496) + 128LL) = v10;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v2 + 544) + 1064LL) )
    *(_QWORD *)(v2 + 1960) = __readmsr(0xC0000100);
  v11 = *(_QWORD *)(v3 + 544);
  if ( v11 != *(_QWORD *)(v2 + 544) )
    KiUpdateSpeculationControl(v11);
  v12 = *(_QWORD *)(v3 + 184);
  if ( v12 != *(_QWORD *)(v2 + 184) )
  {
    _interlockedbittestandset64(
      (volatile signed __int32 *)(v12 + 8LL * *(unsigned __int8 *)(v1 + 208) + 280),
      *(unsigned __int8 *)(v1 + 209));
    v13 = *(_QWORD *)(v12 + 40);
    if ( (KiKvaShadow & 1) != 0 )
    {
      _disable();
      if ( (v13 & 2) != 0 )
      {
        v13 |= 0x8000000000000000uLL;
        *(_DWORD *)(v1 + 28312) |= 1u;
      }
      *(_QWORD *)(v1 + 28288) = v13;
      v13 &= ~0x8000000000000000uLL;
      *(_DWORD *)(v1 + 28312) &= ~2u;
      if ( _bittest((const signed __int32 *)(v12 + 640), 0) )
        *(_DWORD *)(v1 + 28312) ^= 3u;
      _enable();
    }
    if ( (HvlEnlightenments & 1) != 0 )
    {
      HvlSwitchVirtualAddressSpace(v13);
    }
    else
    {
      __writecr3(v13);
      if ( (KiKvaShadow & 1) != 0 && (v13 & 2) == 0 )
      {
        v14 = __readcr4();
        v14 ^= 0x80uLL;
        __writecr4(v14);
        __writecr4(v14 ^ 0x80);
      }
    }
    _interlockedbittestandreset64(
      (volatile signed __int32 *)(*(_QWORD *)(v2 + 184) + 8LL * *(unsigned __int8 *)(v1 + 208) + 280),
      *(unsigned __int8 *)(v1 + 209));
  }
  v15 = *(_QWORD *)(v3 + 40);
  if ( (KiKvaShadow & 1) != 0 )
    *(_QWORD *)(v1 + 28296) = v15;
  else
    *(_QWORD *)(*(_QWORD *)(v1 - 376) + 4LL) = v15;
  *(_QWORD *)(v1 + 40) = v15;
  if ( v15 >= 0 )
    KeBugCheckEx(0x1CEu, v2, v3, 0LL, 0LL);
  if ( KiCpuTracingFlags )
  {
    if ( (BYTE4(PerfGlobalGroupMask) & 4) != 0 )
      EtwTraceContextSwap(v2, v3);
    if ( (KiCpuTracingFlags & 2) != 0 )
      KiClearLastBranchRecordStack();
    if ( (KiCpuTracingFlags & 4) != 0 )
      KiResetProcessorTraceBuffer();
  }
  v16 = *(_QWORD *)(v3 + 592) | MEMORY[0xFFFFF780000005F0] & *(_QWORD *)(v2 + 592);
  *(_BYTE *)(v2 + 113) = 0;
  _RCX = *(unsigned int **)(v3 + 96);
  v18 = v16 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( v18 )
  {
    if ( (v7 & 0x20000000000LL) != 0 && (v18 & 1) != 0 )
      __asm { fninit }
    if ( (v7 & 0x4000000000LL) != 0 )
    {
      __asm { xrstors byte ptr [rcx] }
    }
    else if ( (v7 & 0x800000) != 0 )
    {
      _xrstor(_RCX, (unsigned int)v18);
    }
    else
    {
      _fxrstor(_RCX);
    }
  }
  _mm_setcsr(_RCX[6]);
  if ( !_bittest((const signed __int32 *)(v3 + 116), 0xAu) )
  {
    v19 = *(_DWORD *)(v3 + 1960);
    if ( *(_QWORD *)(*(_QWORD *)(v3 + 544) + 1064LL) )
      v19 = *(_DWORD *)(v3 + 240) + 0x2000;
    v20 = *(_QWORD *)(v1 - 384);
    *(_WORD *)(v20 + 82) = v19;
    v21 = HIWORD(v19);
    *(_BYTE *)(v20 + 84) = v21;
    *(_BYTE *)(v20 + 87) = BYTE1(v21);
    __writemsr(0xC0000100, *(_QWORD *)(v3 + 1960));
    if ( (__GS__ & (unsigned __int16)(__ES__ & __DS__)) != 43 )
    {
      __DS__ = 43;
      _disable();
      __asm { swapgs }
      __asm { swapgs }
      _enable();
    }
    v22 = *(_QWORD *)(v3 + 240);
    v23 = *(_DWORD *)(v3 + 244);
    *(_QWORD *)(v1 - 336) = v22;
    if ( (*(_BYTE *)(v3 + 3) & 0x84) != 0 )
    {
      if ( *(char *)(v3 + 3) >= 0 )
      {
        LODWORD(v22) = *(_DWORD *)(v3 + 1968);
        v23 = *(_DWORD *)(v3 + 1972);
      }
      else
      {
        v24 = *(_QWORD *)(v3 + 496);
        LODWORD(v22) = *(_DWORD *)(v24 + 128);
        v23 = *(_DWORD *)(v24 + 132);
      }
    }
    __writemsr(0xC0000102, __PAIR64__(v23, v22));
  }
  if ( (*(_DWORD *)(v1 + 11884) & 0x10001) != 0 )
    KeBugCheckEx(0xB8u, v2, v3, 0LL, 0LL);
  ++*(_DWORD *)(v3 + 340);
  v25 = *(_BYTE *)(v3 + 193) == 1;
  if ( *(_BYTE *)(v3 + 193) == 1 )
  {
    v25 = (*(_WORD *)(v3 + 486) | v30) == 0;
    if ( *(_WORD *)(v3 + 486) | v30 )
    {
      HalRequestSoftwareInterrupt(1LL);
      return ((unsigned __int64)v29 | v26) == 0;
    }
  }
  return v25;
}
