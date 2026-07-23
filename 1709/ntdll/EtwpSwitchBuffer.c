/*
 * XREFs of EtwpSwitchBuffer @ 0x1800863E4
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x18001A834 (EtwpReserveTraceBuffer.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     EtwpAllocateFreeBuffers @ 0x18006486C (EtwpAllocateFreeBuffers.c)
 *     RtlSleepConditionVariableCS @ 0x1800795C0 (RtlSleepConditionVariableCS.c)
 *     EtwpDequeueFreeBuffer @ 0x18008650C (EtwpDequeueFreeBuffer.c)
 *     ZwSetEvent @ 0x1800A0280 (ZwSetEvent.c)
 */

char __fastcall EtwpSwitchBuffer(__int64 a1, __int64 a2, unsigned int a3)
{
  _RTL_CRITICAL_SECTION *v3; // r13
  __int64 v4; // rbx
  char v6; // r12
  char v8; // bp
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rbx
  int v13; // [rsp+60h] [rbp+18h]

  v3 = (_RTL_CRITICAL_SECTION *)(a1 + 88);
  v4 = a3;
  v13 = *(_DWORD *)(a1 + 324) & 0x400;
  v6 = 0;
  v8 = 1;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 88));
  v9 = *(_QWORD *)(a1 + 8 * v4 + 560);
  v10 = (unsigned int)v4;
  while ( !v9 || a2 == v9 )
  {
    v11 = EtwpDequeueFreeBuffer(a1);
    if ( v11 )
      goto LABEL_4;
    if ( (*(_DWORD *)(a1 + 324) & 0x400) == 0 )
    {
      do
      {
        if ( (unsigned int)EtwpAllocateFreeBuffers(a1, 1u) != 1 )
          break;
        v11 = EtwpDequeueFreeBuffer(a1);
      }
      while ( !v11 );
      if ( v11 )
      {
LABEL_4:
        *(_WORD *)(v11 + 40) = *(_WORD *)(*(_QWORD *)(a1 + 536) + 4 * v10 + 2);
        *(_WORD *)(v11 + 42) = *(_WORD *)(*(_QWORD *)(a1 + 536) + 4 * v10);
        *(_QWORD *)(a1 + 8 * v10 + 560) = v11;
        if ( a2 && a2 == v9 )
        {
          if ( v13 )
          {
            *(_DWORD *)(a2 + 44) = 0;
            *(_QWORD *)(a2 + 32) = 0LL;
            *(_QWORD *)(a2 + 24) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 416));
            **(_QWORD **)(a1 + 256) = a2 + 32;
            *(_QWORD *)(a1 + 256) = a2 + 32;
            _InterlockedAdd((volatile signed __int32 *)(a1 + 228), 1u);
          }
          else
          {
            *(_DWORD *)(a2 + 44) = 3;
            v6 = 1;
            **(_QWORD **)(a1 + 280) = a2 + 32;
            *(_QWORD *)(a1 + 280) = a2 + 32;
          }
        }
        break;
      }
    }
    if ( (*(_DWORD *)(a1 + 324) & 0x20000000) == 0 || !*(_DWORD *)(a1 + 328) )
    {
      v8 = 0;
      break;
    }
    RtlSleepConditionVariableCS((PRTL_CONDITION_VARIABLE)(a1 + 80), v3, 0LL);
    v9 = *(_QWORD *)(a1 + 8 * v10 + 560);
  }
  RtlLeaveCriticalSection(v3);
  if ( a2 )
    _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
  if ( v6
    && (!*(_DWORD *)(a1 + 368)
     || (unsigned int)(*(_DWORD *)(a1 + 224) - *(_DWORD *)(a1 + 204) - *(_DWORD *)(a1 + 228)) >= *(_DWORD *)(a1 + 368)) )
  {
    ZwSetEvent(*(HANDLE *)(a1 + 128), 0LL);
  }
  return v8;
}
