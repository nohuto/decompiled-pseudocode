/*
 * XREFs of RtlpHpVsContextFree @ 0x14025CFD0
 * Callers:
 *     RtlpFreeHeapInternal @ 0x14010D208 (RtlpFreeHeapInternal.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     RtlpLogHeapFailure @ 0x14017CFD8 (RtlpLogHeapFailure.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     RtlpHpVsChunkFree @ 0x14025C970 (RtlpHpVsChunkFree.c)
 */

__int64 __fastcall RtlpHpVsContextFree(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        ULONG_PTR a3,
        unsigned int a4,
        _DWORD *a5)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v8; // r15
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // edi
  ULONG_PTR v13; // rsi
  int v14; // eax
  int v15; // ecx
  unsigned __int64 v16; // rsi
  __int64 v17; // rsi

  v5 = a3 - 16;
  v8 = (a3 - 16) >> 32;
  v9 = HIDWORD(*(_QWORD *)(a3 - 16));
  v10 = v9 ^ v8 ^ HIDWORD(RtlpHeapKey);
  v11 = 0;
  v13 = a3 - 16;
  if ( (v10 & 0xFF0000) != 0 )
  {
    v14 = v5 ^ *(_DWORD *)(v5 + 8);
LABEL_5:
    v15 = (unsigned __int8)(RtlpHeapKey ^ v14);
    goto LABEL_7;
  }
  if ( (_WORD)v10 )
  {
    v13 -= 16LL * (unsigned __int16)(v9 ^ v8 ^ WORD2(RtlpHeapKey));
    v14 = v13 ^ *(_DWORD *)(v13 + 8);
    goto LABEL_5;
  }
  v15 = 0;
LABEL_7:
  v16 = (v13 - (unsigned int)(v15 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (*(_WORD *)(v16 + 34) ^ 0xABED) == *(_WORD *)(v16 + 32) )
  {
    *a5 = 16 * (WORD1(RtlpHeapKey) ^ WORD1(v5) ^ *(unsigned __int16 *)(v5 + 2)) - 16;
    if ( (a4 & 1) == 0 )
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    if ( (((unsigned int)v8 ^ HIDWORD(RtlpHeapKey) ^ HIDWORD(*(_QWORD *)v5)) & 0xFF0000) != 0 )
    {
      v17 = RtlpHpVsChunkFree(BugCheckParameter2, v16, v5, a4);
      if ( (a4 & 1) == 0 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
        KeAbPostRelease(BugCheckParameter2);
      }
      if ( v17 )
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))(BugCheckParameter2 ^ RtlpHeapKey ^ *(_QWORD *)(BugCheckParameter2 + 72)))(
          *(_QWORD *)(BugCheckParameter2 + 56),
          v17,
          16 * ((unsigned int)*(unsigned __int16 *)(v17 + 32) + 3),
          a4);
      return 1;
    }
    else
    {
      RtlpLogHeapFailure(8, *(_QWORD *)(BugCheckParameter2 + 56), a3, v5, 0LL);
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
    RtlpLogHeapFailure(17, *(_QWORD *)(BugCheckParameter2 + 56), v16, 0LL, 0LL);
  }
  return v11;
}
