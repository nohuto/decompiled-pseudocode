/*
 * XREFs of EtwpReserveTraceBuffer @ 0x140086960
 * Callers:
 *     EtwpLogSystemEventUnsafe @ 0x14006B670 (EtwpLogSystemEventUnsafe.c)
 *     EtwpEventWriteFull @ 0x140085400 (EtwpEventWriteFull.c)
 *     EtwTraceContextSwap @ 0x140086BB0 (EtwTraceContextSwap.c)
 *     EtwpTraceMessageVa @ 0x140087260 (EtwpTraceMessageVa.c)
 *     EtwpLogKernelEvent @ 0x1400F22E0 (EtwpLogKernelEvent.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     EtwTraceEvent @ 0x140150C60 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x140252FC0 (EtwTraceRaw.c)
 *     EtwpReserveWithPebsIndex @ 0x140254854 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x1402548E8 (EtwpReserveWithPmcCounters.c)
 *     EtwpWriteUserEvent @ 0x1404F0990 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpReferenceCurrentBuffer @ 0x140086AE0 (EtwpReferenceCurrentBuffer.c)
 *     EtwpSwitchBuffer @ 0x1400878C8 (EtwpSwitchBuffer.c)
 *     EtwpUpdateEventsLostCount @ 0x140131B10 (EtwpUpdateEventsLostCount.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EtwpReserveTraceBuffer(int *a1, unsigned int a2, __int64 a3, _QWORD *a4, int a5)
{
  unsigned int v7; // r13d
  unsigned int v8; // ecx
  unsigned int v9; // ebp
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned __int32 v14; // r15d
  unsigned __int32 v15; // eax
  unsigned __int32 v16; // ecx
  __int64 result; // rax
  int v18; // edi
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v20; // r9
  signed __int64 v21; // r8
  signed __int64 v22; // rcx
  unsigned int Number; // [rsp+30h] [rbp-48h]
  unsigned int i; // [rsp+80h] [rbp+8h]

  if ( a1[4] >= 0 && a2 <= a1[2] )
  {
    v7 = a1[1];
    v8 = *a1;
    v9 = (a2 + 7) & 0xFFFFFFF8;
    for ( i = v8; ; v8 = i )
    {
      Number = KeGetCurrentPrcb()->Number;
      v10 = *(_QWORD *)(*((_QWORD *)a1 + 118) + 5104LL) + ((unsigned __int64)Number << 10);
      if ( (a1[3] & 0x10000000) != 0 )
        v11 = (unsigned __int64)(a1 + 32);
      else
        v11 = v10 + 8LL * v8;
      v12 = EtwpReferenceCurrentBuffer(a1, v11);
      v13 = v12;
      if ( v12 )
      {
        _m_prefetchw((const void *)(v12 + 8));
        v14 = *(_DWORD *)(v12 + 8);
        if ( v14 <= v7 )
        {
          while ( 1 )
          {
            *a4 = (*((__int64 (**)(void))a1 + 5))();
            v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v14 + v9, v14);
            v16 = v15;
            if ( v14 == v15 )
              break;
            v14 = v15;
            if ( v15 > v7 )
              goto LABEL_13;
          }
          if ( v15 + v9 <= v7 )
          {
            ++*(_QWORD *)(v10 + 8LL * i + 512);
            result = v13 + v15;
            *(_QWORD *)a3 = v13;
            *(_QWORD *)(a3 + 8) = v11;
            *(_DWORD *)(a3 + 16) = v16;
            return result;
          }
          *(_DWORD *)(v13 + 4) = v15;
        }
      }
LABEL_13:
      v18 = EtwpSwitchBuffer((_DWORD)a1, v13, v11, Number, a5);
      if ( (a1[3] & 0x4000000) != 0 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v20 = PerformanceCounter.QuadPart
            - _InterlockedExchange64((volatile __int64 *)a1 + 138, PerformanceCounter.QuadPart);
        do
        {
          v21 = *((_QWORD *)a1 + 139);
          if ( v21 )
            v22 = (v21 + v20 + 2 * v21) / 4;
          else
            v22 = v20;
        }
        while ( v21 != _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 139, v22, v21) );
      }
      if ( v18 < 0 )
        break;
    }
  }
  EtwpUpdateEventsLostCount(a1);
  return 0LL;
}
