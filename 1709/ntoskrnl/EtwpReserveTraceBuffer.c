/*
 * XREFs of EtwpReserveTraceBuffer @ 0x140092980
 * Callers:
 *     EtwpLogKernelEvent @ 0x14000F4E0 (EtwpLogKernelEvent.c)
 *     EtwpTraceMessageVa @ 0x140092350 (EtwpTraceMessageVa.c)
 *     EtwTraceEvent @ 0x14015331C (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14027A94C (EtwTraceRaw.c)
 *     EtwpLogContextSwapEvent @ 0x14027BFB8 (EtwpLogContextSwapEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x14027C4F4 (EtwpLogSystemEventUnsafe.c)
 *     EtwpReserveWithPebsIndex @ 0x14027CC38 (EtwpReserveWithPebsIndex.c)
 *     EtwpReserveWithPmcCounters @ 0x14027CCCC (EtwpReserveWithPmcCounters.c)
 *     EtwpWriteUserEvent @ 0x1404CC5B0 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpSwitchBuffer @ 0x1400E041C (EtwpSwitchBuffer.c)
 *     EtwpUnlockBufferList @ 0x1400E0828 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1400E0868 (EtwpLockBufferList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     EtwpUpdateEventsLostCount @ 0x14027EED0 (EtwpUpdateEventsLostCount.c)
 */

unsigned __int64 __fastcall EtwpReserveTraceBuffer(unsigned int *a1, __int64 a2, __int64 a3, _QWORD *a4, int a5)
{
  unsigned int v7; // r13d
  __int64 v8; // rcx
  int v9; // ebp
  _QWORD *v10; // rsi
  unsigned __int64 *v11; // r15
  unsigned __int64 v12; // rbx
  signed __int64 v13; // rax
  int v14; // eax
  unsigned __int32 v15; // r12d
  unsigned __int32 v16; // eax
  unsigned __int32 v17; // edx
  unsigned __int64 result; // rax
  int v19; // ebx
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v23; // r8
  signed __int64 v24; // r9
  signed __int64 v25; // rcx
  unsigned int i; // [rsp+30h] [rbp-48h]
  unsigned int Number; // [rsp+38h] [rbp-40h]
  char v28; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v29; // [rsp+98h] [rbp+20h]

  v29 = a4;
  if ( (a1[4] & 0x80000000) == 0 && (unsigned int)a2 <= a1[2] )
  {
    v7 = a1[1];
    v8 = *a1;
    v9 = (a2 + 7) & 0xFFFFFFF8;
    for ( i = v8; ; v8 = i )
    {
      Number = KeGetCurrentPrcb()->Number;
      v10 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 282) + 4104LL) + ((unsigned __int64)Number << 6));
      if ( (a1[3] & 0x10000000) != 0 )
        v11 = (unsigned __int64 *)(a1 + 36);
      else
        v11 = (unsigned __int64 *)(*v10 + 8 * v8);
      v28 = 0;
      _m_prefetchw(v11);
      v12 = *v11;
      if ( (*v11 & 0xF) != 0 )
      {
        do
        {
          v13 = _InterlockedCompareExchange64((volatile signed __int64 *)v11, v12 - 1, v12);
          if ( v12 == v13 )
            break;
          v12 = v13;
        }
        while ( (v13 & 0xF) != 0 );
      }
      if ( v12 )
      {
        v14 = v12 & 0xF;
        if ( (v12 & 0xF) != 0 )
        {
          v12 &= 0xFFFFFFFFFFFFFFF0uLL;
          if ( v14 == 1 )
          {
            _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFu);
            _m_prefetchw(v11);
            v20 = *v11;
            while ( (v20 & 0xF) == 0 )
            {
              if ( v12 != (v20 & 0xFFFFFFFFFFFFFFF0uLL) )
                break;
              v21 = v20;
              v20 = _InterlockedCompareExchange64((volatile signed __int64 *)v11, v20 + 15, v20);
              if ( v21 == v20 )
                goto LABEL_11;
            }
            _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFFFFFFF1);
          }
        }
        else
        {
          EtwpLockBufferList(a1, &v28);
          v12 = *v11 & 0xFFFFFFFFFFFFFFF0uLL;
          if ( v12 )
            _InterlockedIncrement((volatile signed __int32 *)(v12 + 12));
          EtwpUnlockBufferList(a1, &v28);
        }
LABEL_11:
        if ( v12 )
        {
          _m_prefetchw((const void *)(v12 + 8));
          v15 = *(_DWORD *)(v12 + 8);
          if ( v15 <= v7 )
          {
            while ( 1 )
            {
              *v29 = (*((__int64 (**)(void))a1 + 5))();
              v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v15 + v9, v15);
              v17 = v16;
              if ( v15 == v16 )
                break;
              v15 = v16;
              if ( v16 > v7 )
                goto LABEL_18;
            }
            if ( v16 + v9 <= v7 )
            {
              ++*(_QWORD *)(v10[1] + 8LL * i);
              result = v12 + v16;
              *(_QWORD *)a3 = v12;
              *(_QWORD *)(a3 + 8) = v11;
              *(_DWORD *)(a3 + 16) = v17;
              return result;
            }
            *(_DWORD *)(v12 + 4) = v16;
          }
        }
      }
LABEL_18:
      v19 = EtwpSwitchBuffer((_DWORD)a1, v12, (_DWORD)v11, Number, a5);
      if ( (a1[3] & 0x4000000) != 0 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v23 = PerformanceCounter.QuadPart
            - _InterlockedExchange64((volatile __int64 *)a1 + 302, PerformanceCounter.QuadPart);
        do
        {
          v24 = *((_QWORD *)a1 + 303);
          if ( v24 )
          {
            a2 = ((v24 + v23 + 2 * v24) >> 63) & 3;
            v25 = (v24 + v23 + 2 * v24) / 4;
          }
          else
          {
            v25 = v23;
          }
        }
        while ( v24 != _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 303, v25, v24) );
      }
      if ( v19 < 0 )
        break;
    }
  }
  EtwpUpdateEventsLostCount(a1, a2);
  return 0LL;
}
