/*
 * XREFs of EtwpCovSampSampleBufferReserve @ 0x1402B59B8
 * Callers:
 *     EtwpCovSampCaptureBufferQueue @ 0x1402B49B4 (EtwpCovSampCaptureBufferQueue.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     EtwpCovSampLookasidePop @ 0x1402B561C (EtwpCovSampLookasidePop.c)
 *     EtwpCovSampSampleBufferDecRef @ 0x1402B597C (EtwpCovSampSampleBufferDecRef.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x1402B5B78 (EtwpCovSampTryAcquireBufferLock.c)
 */

__int64 __fastcall EtwpCovSampSampleBufferReserve(__int64 a1, __int16 a2, __int64 *a3)
{
  unsigned int v4; // eax
  __int64 v5; // r10
  unsigned int v6; // ecx
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v10; // rsi
  unsigned __int16 v11; // r12
  __int64 v12; // rbx
  __int64 v13; // r15
  int v14; // eax
  _SLIST_ENTRY *v15; // rax
  unsigned __int8 v17; // [rsp+68h] [rbp+10h]

  v4 = ((unsigned int)*(_QWORD *)(a1 + 8) >> 13) & 0x3FFFF;
  v5 = *(_QWORD *)(a1 + 8) >> 4;
  _BitScanReverse(&v6, v4);
  v7 = 0LL;
  v8 = 0LL;
  v10 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v6 - 2) + 8LL * (v4 ^ (1 << v6)) + 8)
      + 8 * (v5 & 0x1FF);
  v11 = 7 - ((a2 + 7) & 7) + a2 + 8;
  while ( (unsigned int)EtwpCovSampTryAcquireBufferLock((PKSPIN_LOCK)v10) )
  {
    v12 = *(_QWORD *)(v10 + 8);
    if ( v12 )
      goto LABEL_7;
    if ( v8 )
    {
      if ( !*(_DWORD *)(v10 + 120) )
      {
        KxReleaseSpinLock((PKSPIN_LOCK)v10);
        __writecr8(v17);
        break;
      }
      *(_QWORD *)(v10 + 8) = v8;
      v12 = v8;
      v8 = 0LL;
LABEL_7:
      v13 = *(int *)(v12 + 60);
      v14 = v13 + v11;
      if ( v14 <= *(_DWORD *)(v12 + 64) )
      {
        *(_DWORD *)(v12 + 60) = v14;
        ++*(_DWORD *)(v12 + 56);
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 48)) <= 1 )
          __fastfail(0xEu);
        KxReleaseSpinLock((PKSPIN_LOCK)v10);
        __writecr8(v17);
        *a3 = v12;
        v7 = v13 + v12 + 72;
        *(_DWORD *)v7 = v13;
        *(_WORD *)(v7 + 4) = v11;
        break;
      }
      *(_QWORD *)(v10 + 8) = 0LL;
      KxReleaseSpinLock((PKSPIN_LOCK)v10);
      __writecr8(v17);
      EtwpCovSampSampleBufferDecRef(a1, v12);
    }
    else
    {
      KxReleaseSpinLock((PKSPIN_LOCK)v10);
      __writecr8(v17);
      v15 = EtwpCovSampLookasidePop(a1, a1 + 512);
      v8 = (__int64)v15;
      if ( !v15 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 316));
        return v7;
      }
      *((_DWORD *)&v15[3].Next + 3) = 0;
      *((_DWORD *)&v15[3].Next + 2) = 0;
      v15[3].Next = (_SLIST_ENTRY *)1;
    }
  }
  if ( v8 )
    EtwpCovSampSampleBufferDecRef(a1, v8);
  return v7;
}
