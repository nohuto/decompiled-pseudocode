/*
 * XREFs of EtwpBufferingModeFlush @ 0x1801098DC
 * Callers:
 *     EtwpFlushUmLogger @ 0x180060D00 (EtwpFlushUmLogger.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     EtwpFlushBuffer @ 0x180062DF8 (EtwpFlushBuffer.c)
 *     EtwpWaitForBufferReferenceCount @ 0x180062FB8 (EtwpWaitForBufferReferenceCount.c)
 *     EtwpFinalizeLogFileHeader @ 0x18006305C (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800649D0 (EtwpAddLogHeaderToLogFile.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     EtwpFindAndLockBufferForFlushing @ 0x180109BB0 (EtwpFindAndLockBufferForFlushing.c)
 */

__int64 __fastcall EtwpBufferingModeFlush(__int64 a1)
{
  unsigned int v1; // esi
  NTSTATUS v3; // eax
  ULONG v4; // ebp
  __int64 i; // r8
  __int64 v6; // rcx
  unsigned __int32 v7; // eax
  __int64 v8; // rsi
  __int64 j; // rdi
  int v10; // eax

  v1 = *(_DWORD *)(a1 + 208);
  v3 = EtwpAddLogHeaderToLogFile(a1, 0LL, 0, 0);
  if ( v3 )
  {
    v4 = RtlNtStatusToDosError(v3);
    if ( v4 )
      return v4;
  }
  else
  {
    v4 = 0;
  }
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 88));
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 204); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(a1 + 8 * i + 560);
    if ( v6 )
    {
      *(_QWORD *)(a1 + 8 * i + 560) = 0LL;
      v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), v1);
      if ( v7 <= v1 )
        *(_DWORD *)(v6 + 4) = v7;
      *(_DWORD *)(v6 + 44) = 0;
      *(_QWORD *)(v6 + 32) = 0LL;
      *(_QWORD *)(v6 + 24) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 416));
      **(_QWORD **)(a1 + 256) = v6 + 32;
      *(_QWORD *)(a1 + 256) = v6 + 32;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 228));
    }
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 88));
  v8 = *(_QWORD *)(a1 + 416);
  for ( j = EtwpFindAndLockBufferForFlushing(a1, v8); j; j = EtwpFindAndLockBufferForFlushing(a1, --v8) )
  {
    EtwpWaitForBufferReferenceCount(j);
    v10 = EtwpFlushBuffer(a1, j, 0);
    _InterlockedExchange((volatile __int32 *)(j + 44), 0);
    if ( ((v10 + 0x80000000) & 0x80000000) == 0 && v10 != -2147483614 )
      break;
  }
  EtwpFinalizeLogFileHeader(a1, 0);
  NtClose(*(HANDLE *)(a1 + 144));
  *(_QWORD *)(a1 + 144) = 0LL;
  return v4;
}
