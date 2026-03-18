/*
 * XREFs of KiUpdateGlobalCpuSetConfiguration @ 0x1400A6F7C
 * Callers:
 *     KeCpuSetReportParkedProcessors @ 0x1400A6A88 (KeCpuSetReportParkedProcessors.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiIsThreadRankNonZero @ 0x14003A860 (KiIsThreadRankNonZero.c)
 *     KiSendSoftwareInterrupt @ 0x14007CC8C (KiSendSoftwareInterrupt.c)
 *     KiSelectNextThread @ 0x1400A70C0 (KiSelectNextThread.c)
 *     KiCheckThreadAffinity @ 0x1400A7380 (KiCheckThreadAffinity.c)
 *     KiTryToAcquireThreadLock @ 0x1400A73A8 (KiTryToAcquireThreadLock.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiComputeThreadAffinity @ 0x1401329B0 (KiComputeThreadAffinity.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140135EA0 (KiRescheduleThreadAfterAffinityChange.c)
 *     EtwTraceIdealProcessor @ 0x1402AEC2C (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiUpdateGlobalCpuSetConfiguration(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 i; // rbp
  __int64 v5; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v7; // rdi
  unsigned int v8; // esi
  int v9; // r14d
  __int64 v10; // rcx
  unsigned int v11; // r11d
  __int64 v12; // rsi
  int v13; // r8d
  char v14; // al
  __int64 v15; // rdx
  struct _KPRCB *v16; // rsi
  __int64 v17; // rdx
  struct _KPRCB *v18; // rsi
  __int64 v19; // rdi
  char v20; // cl
  bool IsThreadRankNonZero; // al
  int *v22; // rdx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // [rsp+78h] [rbp+10h] BYREF
  int v26; // [rsp+80h] [rbp+18h] BYREF
  int v27; // [rsp+88h] [rbp+20h] BYREF

  result = (unsigned int)KeNumberProcessors_0;
  for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
  {
    v5 = KiProcessorBlock[i];
    *(_QWORD *)(*(_QWORD *)(v5 + 24) + 568LL) = KiCpuSetSequence;
    while ( 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v25 = 0;
      while ( 1 )
      {
        LOBYTE(a2) = 1;
        KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v5 + 48), 0LL) )
          break;
        KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
        do
          KeYieldProcessorEx(&v25);
        while ( *(_QWORD *)(v5 + 48) );
      }
      v7 = *(_QWORD *)(v5 + 8);
      if ( (unsigned __int8)KiTryToAcquireThreadLock(v7, 0LL) )
        break;
      _InterlockedAdd16((volatile signed __int16 *)(v7 + 1420), 1u);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 48), 0LL);
      KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
      v16 = KeGetCurrentPrcb();
      v26 = 0;
      while ( 1 )
      {
        LOBYTE(v15) = 1;
        KiSetVpThreadSpinLockCount(v16, v15);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 64), 0LL) )
          break;
        KiSetVpThreadSpinLockCount(v16, 0LL);
        do
          KeYieldProcessorEx(&v26);
        while ( *(_QWORD *)(v7 + 64) );
      }
      v18 = KeGetCurrentPrcb();
      v27 = 0;
      while ( 1 )
      {
        LOBYTE(v17) = 1;
        KiSetVpThreadSpinLockCount(v18, v17);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v5 + 48), 0LL) )
          break;
        KiSetVpThreadSpinLockCount(v18, 0LL);
        do
          KeYieldProcessorEx(&v27);
        while ( *(_QWORD *)(v5 + 48) );
      }
      _InterlockedDecrement16((volatile signed __int16 *)(v7 + 1420));
      if ( v7 == *(_QWORD *)(v5 + 8) )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 48), 0LL);
      KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
      KiReleaseThreadLockSafe(v7);
    }
    v8 = *(_DWORD *)(v7 + 588);
    v9 = 0;
    if ( !(unsigned int)KiCheckThreadAffinity(v7) )
    {
      KiComputeThreadAffinity(v10);
      v14 = *(_BYTE *)(v7 + 388);
      if ( v14 == 2 || v14 == 5 )
      {
        LOBYTE(v13) = 2;
        v9 = KiRescheduleThreadAfterAffinityChange(v7, (int)v7 + 576, v13, v5, 0LL, (__int64)a1);
      }
    }
    KiReleaseThreadLockSafe(v7);
    if ( (xmmword_14044C2D0 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(v7, 1350LL, v8, v11);
    v12 = *(_QWORD *)(v5 + 16);
    if ( v12 && !(unsigned int)KiCheckThreadAffinity(*(_QWORD *)(v5 + 16)) )
    {
      v19 = *(_QWORD *)(v5 + 8);
      if ( (*(_BYTE *)(v19 + 2) & 4) != 0 )
      {
        IsThreadRankNonZero = KiIsThreadRankNonZero(*(_QWORD *)(v5 + 8), (struct _KPRCB *)v5);
        v20 = 1;
        if ( !IsThreadRankNonZero )
          v20 = *(_BYTE *)(v19 + 195);
      }
      else
      {
        v20 = *(_BYTE *)(v19 + 195);
      }
      **(_BYTE **)(v5 + 56) = v20;
      v22 = *(int **)(v5 + 25016);
      if ( v22 )
      {
        v23 = KiVpThreadSystemWorkPriority;
        if ( v19 != *(_QWORD *)(v5 + 24) )
          v23 = v20;
        *v22 = v23;
      }
      KiSelectNextThread(v5, a1);
      _interlockedbittestandreset((volatile signed __int32 *)(v12 + 120), 0xCu);
      *(_BYTE *)(v12 + 388) = 7;
      *(_QWORD *)(v12 + 216) = *a1;
      *a1 = v12 + 216;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 48), 0LL);
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
    if ( v9 )
    {
      v24 = *(unsigned int *)(v5 + 36);
      if ( KeGetPcr()->Prcb.Number != (_DWORD)v24 )
      {
        LOBYTE(a2) = 2;
        KiSendSoftwareInterrupt(v24, a2);
      }
    }
    result = (unsigned int)KeNumberProcessors_0;
  }
  return result;
}
