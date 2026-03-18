/*
 * XREFs of KiUpdateGlobalCpuSetConfiguration @ 0x14001A410
 * Callers:
 *     KeCpuSetReportParkedProcessors @ 0x14001A140 (KeCpuSetReportParkedProcessors.c)
 * Callees:
 *     KiRescheduleThreadAfterAffinityChange @ 0x14001AB48 (KiRescheduleThreadAfterAffinityChange.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiCheckThreadAffinity @ 0x14004144C (KiCheckThreadAffinity.c)
 *     KiComputeThreadAffinity @ 0x140110554 (KiComputeThreadAffinity.c)
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 *     KiSelectNextThread @ 0x140113E30 (KiSelectNextThread.c)
 *     EtwTraceIdealProcessor @ 0x140253648 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiUpdateGlobalCpuSetConfiguration(_QWORD *a1)
{
  __int64 result; // rax
  __int64 i; // rbp
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned int v6; // esi
  int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  char v12; // al
  __int64 v13; // rdi
  char v14; // cl
  char IsThreadRankNonZero; // al
  __int64 v16; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  int v18; // [rsp+78h] [rbp+10h] BYREF
  int v19; // [rsp+80h] [rbp+18h] BYREF
  int v20; // [rsp+88h] [rbp+20h] BYREF

  result = (unsigned int)KeNumberProcessors_0;
  for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
  {
    v4 = KiProcessorBlock[i];
    *(_QWORD *)(*(_QWORD *)(v4 + 24) + 568LL) = KiCpuSetSequence;
    while ( 1 )
    {
      v18 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v18);
        while ( *(_QWORD *)(v4 + 48) );
      }
      v5 = *(_QWORD *)(v4 + 8);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v5 + 64), 0LL) )
        break;
      _InterlockedAdd16((volatile signed __int16 *)(v5 + 1420), 1u);
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
      v19 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v19);
        while ( *(_QWORD *)(v5 + 64) );
      }
      v20 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v20);
        while ( *(_QWORD *)(v4 + 48) );
      }
      _InterlockedDecrement16((volatile signed __int16 *)(v5 + 1420));
      if ( v5 == *(_QWORD *)(v4 + 8) )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
      *(_QWORD *)(v5 + 64) = 0LL;
    }
    v6 = *(_DWORD *)(v5 + 588);
    v7 = 0;
    if ( !(unsigned int)KiCheckThreadAffinity(v5) )
    {
      KiComputeThreadAffinity();
      v12 = *(_BYTE *)(v5 + 388);
      if ( v12 == 2 || v12 == 5 )
      {
        LOBYTE(v9) = 2;
        v7 = KiRescheduleThreadAfterAffinityChange(v5, (int)v5 + 576, v9, v4, 0LL, (__int64)a1);
      }
    }
    v10 = *(unsigned int *)(v5 + 588);
    *(_QWORD *)(v5 + 64) = 0LL;
    if ( (xmmword_1403E4010 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(v5, 1350LL, v6, v10);
    v11 = *(_QWORD *)(v4 + 16);
    if ( v11 && !(unsigned int)KiCheckThreadAffinity(*(_QWORD *)(v4 + 16)) )
    {
      v13 = *(_QWORD *)(v4 + 8);
      if ( (*(_BYTE *)(v13 + 2) & 4) != 0 )
      {
        IsThreadRankNonZero = KiIsThreadRankNonZero(*(_QWORD *)(v4 + 8), v4);
        v14 = 1;
        if ( !IsThreadRankNonZero )
          v14 = *(_BYTE *)(v13 + 195);
      }
      else
      {
        v14 = *(_BYTE *)(v13 + 195);
      }
      **(_BYTE **)(v4 + 56) = v14;
      KiSelectNextThread(v4, a1);
      _interlockedbittestandreset((volatile signed __int32 *)(v11 + 120), 0xBu);
      *(_BYTE *)(v11 + 388) = 7;
      *(_QWORD *)(v11 + 216) = *a1;
      *a1 = v11 + 216;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
    if ( v7 )
    {
      v16 = *(unsigned int *)(v4 + 36);
      if ( KeGetPcr()->Prcb.Number != (_DWORD)v16 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        LOBYTE(v8) = 2;
        ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(v16, v8, v9, v10);
      }
    }
    result = (unsigned int)KeNumberProcessors_0;
  }
  return result;
}
