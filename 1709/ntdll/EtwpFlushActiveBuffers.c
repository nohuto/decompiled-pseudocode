/*
 * XREFs of EtwpFlushActiveBuffers @ 0x180062C30
 * Callers:
 *     EtwpLogger @ 0x180062A90 (EtwpLogger.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     EtwpFlushBuffer @ 0x180062DF8 (EtwpFlushBuffer.c)
 *     EtwpWaitForBufferReferenceCount @ 0x180062FB8 (EtwpWaitForBufferReferenceCount.c)
 *     RtlWakeAllConditionVariable @ 0x180062FF0 (RtlWakeAllConditionVariable.c)
 *     EtwpSendSessionNotification @ 0x18006384C (EtwpSendSessionNotification.c)
 */

__int64 __fastcall EtwpFlushActiveBuffers(__int64 a1, int a2)
{
  unsigned int v2; // r14d
  _RTL_CRITICAL_SECTION *v3; // rbp
  __int64 v4; // rdi
  unsigned __int16 v6; // r12
  unsigned int v8; // esi
  unsigned __int16 v9; // r13
  _QWORD **v10; // rax
  _QWORD *v11; // rdi
  unsigned __int16 v12; // ax
  _QWORD *v13; // r14
  _QWORD *v14; // r13
  __int64 *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned __int32 v19; // eax
  __int64 v20; // rcx
  unsigned __int16 v21; // [rsp+68h] [rbp+10h]

  v2 = *(_DWORD *)(a1 + 208);
  v3 = (_RTL_CRITICAL_SECTION *)(a1 + 88);
  v4 = *(unsigned int *)(a1 + 204);
  HIBYTE(v6) = 0;
  v8 = 0;
  v9 = 0;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 88));
  if ( a2 == 1 && (_DWORD)v4 )
  {
    v16 = (__int64 *)(a1 + 560);
    v17 = v4;
    do
    {
      v18 = *v16;
      if ( *v16 && *(_DWORD *)(v18 + 8) != 72 )
      {
        *v16 = 0LL;
        v19 = _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 8), v2);
        if ( v19 <= v2 )
          *(_DWORD *)(v18 + 4) = v19;
        *(_DWORD *)(v18 + 44) = 3;
        v20 = v18 + 32;
        **(_QWORD **)(a1 + 280) = v20;
        *(_QWORD *)(a1 + 280) = v20;
      }
      ++v16;
      --v17;
    }
    while ( v17 );
  }
  v10 = *(_QWORD ***)(a1 + 272);
  if ( v10 == *(_QWORD ***)(a1 + 280) )
  {
    v11 = 0LL;
  }
  else
  {
    v11 = *v10;
    *v10 = 0LL;
    *(_QWORD *)(a1 + 280) = *(_QWORD *)(a1 + 272);
  }
  RtlLeaveCriticalSection(v3);
  for ( ; v11; *(_DWORD *)(a1 + 40) = v8 )
  {
    LOBYTE(v6) = a2 != 0;
    v12 = v6;
    v13 = v11;
    if ( *v11 )
      v12 = v9;
    v14 = v11;
    v11 = (_QWORD *)*v11;
    v21 = v12;
    EtwpWaitForBufferReferenceCount(v14 - 4);
    v8 = EtwpFlushBuffer(a1, v14 - 4, v21);
    if ( (int)(v8 + 0x80000000) >= 0 && v8 != -2147483614 )
      EtwpSendSessionNotification(a1, 3LL, v8);
    RtlEnterCriticalSection(v3);
    *((_DWORD *)v13 + 3) = 0;
    *v13 = 0LL;
    *(v13 - 1) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 416));
    **(_QWORD **)(a1 + 256) = v14;
    *(_QWORD *)(a1 + 256) = v14;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 228));
    RtlLeaveCriticalSection(v3);
    RtlWakeAllConditionVariable((PRTL_CONDITION_VARIABLE)(a1 + 80));
    v9 = v21;
  }
  return v8;
}
