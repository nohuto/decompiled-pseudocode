/*
 * XREFs of EtwpCovSampCaptureFlushSampleBuffers @ 0x1402B4E04
 * Callers:
 *     EtwpCovSampCaptureContextStop @ 0x1402B4C98 (EtwpCovSampCaptureContextStop.c)
 *     EtwpCovSampCaptureFlush @ 0x1407B3B50 (EtwpCovSampCaptureFlush.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1400D38F0 (KeQueryMaximumProcessorCountEx.c)
 *     EtwpCovSampSampleBufferDecRef @ 0x1402B597C (EtwpCovSampSampleBufferDecRef.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x1402B5B78 (EtwpCovSampTryAcquireBufferLock.c)
 */

ULONG __fastcall EtwpCovSampCaptureFlushSampleBuffers(__int64 a1)
{
  ULONG result; // eax
  __int64 v3; // rbx
  __int64 v4; // rbp
  KSPIN_LOCK v5; // rsi
  unsigned int v6; // eax
  unsigned int v7; // ecx
  KSPIN_LOCK *v8; // rdi
  KSPIN_LOCK v9; // rax
  unsigned __int8 v10; // [rsp+40h] [rbp+8h]

  result = KeQueryMaximumProcessorCountEx(0xFFFFu);
  if ( result )
  {
    v3 = 0LL;
    v4 = result;
    do
    {
      v5 = 0LL;
      v6 = (*(_DWORD *)(a1 + 8) >> 13) & 0x3FFFF;
      _BitScanReverse(&v7, v6);
      v8 = (KSPIN_LOCK *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + ExSaPageArrays) + 8LL * (v7 - 2))
                                    + 8LL * (v6 ^ (1 << v7))
                                    + 8)
                        + 8LL * ((*(_DWORD *)(a1 + 8) >> 4) & 0x1FF));
      result = EtwpCovSampTryAcquireBufferLock(v8);
      if ( result )
      {
        v9 = v8[1];
        if ( v9 )
        {
          v8[1] = 0LL;
          v5 = v9;
        }
        KxReleaseSpinLock(v8);
        result = v10;
        __writecr8(v10);
        if ( v5 )
          result = EtwpCovSampSampleBufferDecRef(a1, v5);
      }
      v3 += 8LL;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
