/*
 * XREFs of KiUpdateGlobalCpuSetConfiguration @ 0x14011F888
 * Callers:
 *     KeCpuSetReportParkedProcessors @ 0x14011F5C8 (KeCpuSetReportParkedProcessors.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiSelectNextThread @ 0x1400A89A0 (KiSelectNextThread.c)
 *     KiCheckThreadAffinity @ 0x1400A8D9C (KiCheckThreadAffinity.c)
 *     KiComputeThreadAffinity @ 0x1400AAF70 (KiComputeThreadAffinity.c)
 *     KiIsThreadRankNonZero @ 0x1400AB970 (KiIsThreadRankNonZero.c)
 *     KiSendSoftwareInterrupt @ 0x1400ABAA4 (KiSendSoftwareInterrupt.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1400AC020 (KiRescheduleThreadAfterAffinityChange.c)
 *     EtwTraceIdealProcessor @ 0x14027B30C (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiUpdateGlobalCpuSetConfiguration(unsigned __int64 *a1)
{
  __int64 result; // rax
  __int64 i; // rbp
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned int v6; // esi
  int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rsi
  char v12; // al
  unsigned __int64 *v13; // r8
  __int64 v14; // rdi
  char v15; // cl
  bool IsThreadRankNonZero; // al
  _DWORD *v17; // rdx
  __int64 v18; // rcx
  int v19; // [rsp+78h] [rbp+10h] BYREF
  int v20; // [rsp+80h] [rbp+18h] BYREF
  int v21; // [rsp+88h] [rbp+20h] BYREF

  result = (unsigned int)KeNumberProcessors_0;
  for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
  {
    v4 = KiProcessorBlock[i];
    *(_QWORD *)(*(_QWORD *)(v4 + 24) + 568LL) = KiCpuSetSequence;
    while ( 1 )
    {
      v19 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v19);
        while ( *(_QWORD *)(v4 + 48) );
      }
      v5 = *(_QWORD *)(v4 + 8);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v5 + 64), 0LL) )
        break;
      _InterlockedAdd16((volatile signed __int16 *)(v5 + 1420), 1u);
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
      v20 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v20);
        while ( *(_QWORD *)(v5 + 64) );
      }
      v21 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v21);
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
    if ( !KiCheckThreadAffinity(v5) )
    {
      KiComputeThreadAffinity(v9);
      v12 = *(_BYTE *)(v5 + 388);
      if ( v12 == 2 || v12 == 5 )
        v7 = KiRescheduleThreadAfterAffinityChange(v5, v5 + 576, 2, v4, 0LL, a1);
    }
    v10 = *(unsigned int *)(v5 + 588);
    *(_QWORD *)(v5 + 64) = 0LL;
    if ( (xmmword_140401150 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(v5, 1350LL, v6, v10);
    v11 = *(_QWORD *)(v4 + 16);
    if ( v11 && !KiCheckThreadAffinity(*(_QWORD *)(v4 + 16)) )
    {
      v14 = *(_QWORD *)(v4 + 8);
      if ( (*(_BYTE *)(v14 + 2) & 4) != 0 )
      {
        IsThreadRankNonZero = KiIsThreadRankNonZero(*(_QWORD *)(v4 + 8), (struct _KPRCB *)v4);
        v15 = 1;
        if ( !IsThreadRankNonZero )
          v15 = *(_BYTE *)(v14 + 195);
      }
      else
      {
        v15 = *(_BYTE *)(v14 + 195);
      }
      **(_BYTE **)(v4 + 56) = v15;
      v17 = *(_DWORD **)(v4 + 25016);
      if ( v17 )
        *v17 = v15;
      KiSelectNextThread(v4, a1, v13);
      _interlockedbittestandreset((volatile signed __int32 *)(v11 + 120), 0xCu);
      *(_BYTE *)(v11 + 388) = 7;
      *(_QWORD *)(v11 + 216) = *a1;
      *a1 = v11 + 216;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 48), 0LL);
    if ( v7 )
    {
      v18 = *(unsigned int *)(v4 + 36);
      if ( KeGetPcr()->Prcb.Number != (_DWORD)v18 )
      {
        LOBYTE(v8) = 2;
        KiSendSoftwareInterrupt(v18, v8);
      }
    }
    result = (unsigned int)KeNumberProcessors_0;
  }
  return result;
}
