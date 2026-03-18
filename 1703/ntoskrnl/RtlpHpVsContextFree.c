/*
 * XREFs of RtlpHpVsContextFree @ 0x140245AE8
 * Callers:
 *     RtlpFreeHeapInternal @ 0x14000ED38 (RtlpFreeHeapInternal.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     RtlpLogHeapFailure @ 0x14017D77C (RtlpLogHeapFailure.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     RtlpHpVsChunkFree @ 0x140245480 (RtlpHpVsChunkFree.c)
 */

__int64 __fastcall RtlpHpVsContextFree(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        ULONG_PTR a3,
        unsigned int a4,
        _DWORD *a5)
{
  int v5; // rdx^4
  unsigned __int64 v6; // r14
  unsigned __int64 v9; // r12
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // edi
  ULONG_PTR v14; // rsi
  int v15; // eax
  int v16; // ecx
  unsigned __int64 v17; // rsi
  __int64 v18; // rsi

  v5 = HIDWORD(RtlpHeapKey);
  v6 = a3 - 16;
  v9 = (a3 - 16) >> 32;
  v10 = HIDWORD(*(_QWORD *)(a3 - 16));
  v11 = v10 ^ HIDWORD(RtlpHeapKey) ^ ((a3 - 16) >> 32);
  v12 = 0;
  v14 = a3 - 16;
  if ( (v11 & 0xFF0000) != 0 )
  {
    v15 = v6 ^ *(_DWORD *)(v6 + 8);
LABEL_5:
    v16 = (unsigned __int8)(RtlpHeapKey ^ v15);
    goto LABEL_7;
  }
  if ( (_WORD)v11 )
  {
    v14 -= 16LL * (unsigned __int16)(v10 ^ WORD2(RtlpHeapKey) ^ v9);
    v15 = v14 ^ *(_DWORD *)(v14 + 8);
    goto LABEL_5;
  }
  v16 = 0;
LABEL_7:
  v17 = (v14 - (unsigned int)(v16 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (*(_WORD *)(v17 + 34) ^ 0xABED) == *(_WORD *)(v17 + 32) )
  {
    *a5 = 16 * (WORD1(RtlpHeapKey) ^ WORD1(v6) ^ *(unsigned __int16 *)(v6 + 2)) - 16;
    if ( (a4 & 1) == 0 )
    {
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      v5 = HIDWORD(RtlpHeapKey);
    }
    if ( (((unsigned int)v9 ^ v5 ^ HIDWORD(*(_QWORD *)v6)) & 0xFF0000) != 0 )
    {
      v18 = RtlpHpVsChunkFree(BugCheckParameter2, v17, v6, a4);
      if ( (a4 & 1) == 0 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
        KeAbPostRelease(BugCheckParameter2);
      }
      if ( v18 )
        ((void (__fastcall *)(_QWORD, __int64, _QWORD))(BugCheckParameter2 ^ RtlpHeapKey ^ *(_QWORD *)(BugCheckParameter2 + 72)))(
          *(_QWORD *)(BugCheckParameter2 + 56),
          v18,
          a4);
      return 1;
    }
    else
    {
      RtlpLogHeapFailure(8, *(_QWORD *)(BugCheckParameter2 + 56), a3, v6, 0LL);
      if ( (a4 & 1) == 0 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
        KeAbPostRelease(BugCheckParameter2);
      }
    }
  }
  else
  {
    RtlpLogHeapFailure(17, *(_QWORD *)(BugCheckParameter2 + 56), v17, 0LL, 0LL);
  }
  return v12;
}
