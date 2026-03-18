/*
 * XREFs of EtwpCompressPendingBuffers @ 0x1402B34F8
 * Callers:
 *     EtwpBufferingModeCompressionFlush @ 0x1402B3110 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x1402B3670 (EtwpCompressionProc.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     EtwpCompressBuffer @ 0x1402B3178 (EtwpCompressBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x1402B3724 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x1402B3F5C (EtwpRotateCompressionTargetIfNeeded.c)
 *     EtwpCompleteBuffer @ 0x14058EF70 (EtwpCompleteBuffer.c)
 */

char __fastcall EtwpCompressPendingBuffers(__int64 a1)
{
  volatile signed __int64 *v1; // rbp
  LARGE_INTEGER PerformanceCounter; // rbx
  _DWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rsi
  LARGE_INTEGER v9; // rax
  __int64 v10; // rcx
  LONGLONG v11; // rax

  v1 = (volatile signed __int64 *)(a1 + 1160);
  ExAcquirePushLockExclusiveEx(a1 + 1160, 0LL);
  EtwpRotateCompressionTargetIfNeeded(a1);
  while ( 1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v4 = (_DWORD *)EtwpDequeueBufferPendingCompression(a1);
    v8 = v4;
    if ( !v4 )
      break;
    if ( (int)v4[3] > 0 || v4[1] > 0x48u && v4[2] > 0x48u )
    {
      if ( (int)EtwpCompressBuffer(a1, (__int64)v4) < 0 )
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 268));
      EtwpCompleteBuffer(a1, v8, 0LL);
      v9 = KeQueryPerformanceCounter(0LL);
      v10 = *(_QWORD *)(a1 + 1288);
      v11 = v9.QuadPart - PerformanceCounter.QuadPart;
      if ( v10 )
        *(_QWORD *)(a1 + 1288) = (v11 + 4 * v10) / 5;
      else
        *(_QWORD *)(a1 + 1288) = v11;
    }
    else
    {
      EtwpCompleteBuffer(a1, v4, 0LL);
    }
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1, v5, v6, v7);
  return KeAbPostRelease((ULONG_PTR)v1);
}
