// see https://github.com/nohuto/windbg-notes/blob/main/assets/SwapContext.c for a decompilation attempt

/*
 * XREFs of SwapContext @ 0x140188250
 * Callers:
 *     KiIdleLoop @ 0x140184970 (KiIdleLoop.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 *     KxDispatchInterrupt @ 0x140188090 (KxDispatchInterrupt.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400AC3B0 (KiBeginThreadAccountingPeriod.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     KiUpdateSpeculationControl @ 0x14017BB10 (KiUpdateSpeculationControl.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1401F0B80 (HvlSwitchVirtualAddressSpace.c)
 *     KiClearLastBranchRecordStack @ 0x140203EB0 (KiClearLastBranchRecordStack.c)
 *     KeCheckAndApplyBamQos @ 0x140209EA0 (KeCheckAndApplyBamQos.c)
 *     EtwTraceContextSwap @ 0x14027AFE0 (EtwTraceContextSwap.c)
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
  unsigned __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // rax
  unsigned int v22; // edx
  __int64 v23; // r8
  bool v24; // zf
  __int64 v25; // rcx
  int v27; // ebp
  _BYTE v28[32]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int8 v29; // [rsp+28h] [rbp-10h]

  _m_prefetchw((const void *)(v3 + 113));
  v29 = a1;
  if ( *(_BYTE *)(v3 + 113) )
  {
    v27 = 0;
    do
    {
      if ( (++v27 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
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
  *(_QWORD *)(v2 + 88) = v28;
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
  if ( (BYTE4(PerfGlobalGroupMask) & 4) != 0 )
    EtwTraceContextSwap(v2, v3);
  if ( KiLastBranchRecordInUse )
    KiClearLastBranchRecordStack();
  *(_BYTE *)(v2 + 113) = 0;
  _RCX = *(unsigned int **)(v3 + 96);
  v17 = (*(_QWORD *)(v3 + 592) | MEMORY[0xFFFFF780000005F0] & *(_QWORD *)(v2 + 592)) & 0xFFFFFFFFFFFFFFFDuLL;
  if ( v17 )
  {
    if ( (v7 & 0x20000000000LL) != 0 && (v17 & 1) != 0 )
      __asm { fninit }
    if ( (v7 & 0x4000000000LL) != 0 )
    {
      __asm { xrstors byte ptr [rcx] }
    }
    else if ( (v7 & 0x800000) != 0 )
    {
      _xrstor(_RCX, (unsigned int)v17);
    }
    else
    {
      _fxrstor(_RCX);
    }
  }
  _mm_setcsr(_RCX[6]);
  if ( !_bittest((const signed __int32 *)(v3 + 116), 0xAu) )
  {
    v18 = *(_DWORD *)(v3 + 1960);
    if ( *(_QWORD *)(*(_QWORD *)(v3 + 544) + 1064LL) )
      v18 = *(_DWORD *)(v3 + 240) + 0x2000;
    v19 = *(_QWORD *)(v1 - 384);
    *(_WORD *)(v19 + 82) = v18;
    v20 = HIWORD(v18);
    *(_BYTE *)(v19 + 84) = v20;
    *(_BYTE *)(v19 + 87) = BYTE1(v20);
    __writemsr(0xC0000100, *(_QWORD *)(v3 + 1960));
    if ( (__GS__ & (unsigned __int16)(__ES__ & __DS__)) != 43 )
    {
      __DS__ = 43;
      _disable();
      __asm { swapgs }
      __asm { swapgs }
      _enable();
    }
    v21 = *(_QWORD *)(v3 + 240);
    v22 = *(_DWORD *)(v3 + 244);
    *(_QWORD *)(v1 - 336) = v21;
    if ( (*(_BYTE *)(v3 + 3) & 0x84) != 0 )
    {
      if ( *(char *)(v3 + 3) >= 0 )
      {
        LODWORD(v21) = *(_DWORD *)(v3 + 1968);
        v22 = *(_DWORD *)(v3 + 1972);
      }
      else
      {
        v23 = *(_QWORD *)(v3 + 496);
        LODWORD(v21) = *(_DWORD *)(v23 + 128);
        v22 = *(_DWORD *)(v23 + 132);
      }
    }
    __writemsr(0xC0000102, __PAIR64__(v22, v21));
  }
  if ( (*(_DWORD *)(v1 + 11884) & 0x10001) != 0 )
    KeBugCheckEx(0xB8u, v2, v3, 0LL, 0LL);
  ++*(_DWORD *)(v3 + 340);
  v24 = *(_BYTE *)(v3 + 193) == 1;
  if ( *(_BYTE *)(v3 + 193) == 1 )
  {
    v24 = (*(_WORD *)(v3 + 486) | v29) == 0;
    if ( *(_WORD *)(v3 + 486) | v29 )
    {
      HalRequestSoftwareInterrupt(1LL);
      return ((unsigned __int64)v28 | v25) == 0;
    }
  }
  return v24;
}
