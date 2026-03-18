/*
 * XREFs of RtlpHpVsContextAllocate @ 0x14025CCEC
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x14010DBDC (RtlpAllocateHeapInternal.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     RtlpLogHeapFailure @ 0x14017CFD8 (RtlpLogHeapFailure.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlpHpVsChunkSplit @ 0x14025CA10 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsFreeChunkInsert @ 0x14025D29C (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsSubsegmentCreate @ 0x14025D5E8 (RtlpHpVsSubsegmentCreate.c)
 */

__int64 __fastcall RtlpHpVsContextAllocate(ULONG_PTR BugCheckParameter2, size_t Size, unsigned int a3, unsigned int a4)
{
  size_t v4; // r12
  unsigned int v5; // r13d
  unsigned int v6; // esi
  unsigned int v8; // r15d
  int v9; // ebp
  unsigned int v10; // r9d
  unsigned __int64 v11; // r14
  _QWORD *v12; // r8
  unsigned int v13; // ecx
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  ULONG_PTR v16; // rcx
  ULONG_PTR v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // r9
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  unsigned __int64 v25; // rdx
  __int64 v27; // rcx

  v4 = (unsigned int)Size;
  v5 = a3 + 2;
  if ( (_DWORD)Size == a3 )
    v5 = a3;
  v6 = a4;
  v8 = (v5 + 15) >> 4;
  v9 = a4 & 1;
  if ( (a4 & 1) == 0 )
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  v10 = (v8 + 1) << 16;
  while ( 1 )
  {
    v11 = *(_QWORD *)(BugCheckParameter2 + 8);
    v12 = 0LL;
    while ( v11 )
    {
      v13 = RtlpHeapKey ^ (v11 - 8) ^ *(_DWORD *)(v11 - 8);
      if ( v10 < v13 )
      {
        v14 = *(_QWORD *)v11;
        v12 = (_QWORD *)v11;
      }
      else
      {
        if ( v10 <= v13 )
          goto LABEL_17;
        v14 = *(_QWORD *)(v11 + 8);
      }
      if ( (*(_BYTE *)(BugCheckParameter2 + 16) & 1) != 0 && v14 )
        v11 ^= v14;
      else
        v11 = v14;
    }
    v11 = (unsigned __int64)v12;
LABEL_17:
    if ( v11 )
      break;
    if ( !v9 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
    }
    v15 = RtlpHpVsSubsegmentCreate(BugCheckParameter2, v5, v6);
    if ( !v15 )
      return 0LL;
    if ( !v9 )
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    v16 = (BugCheckParameter2 + 24) ^ *(_QWORD *)(BugCheckParameter2 + 32);
    if ( (v16 ^ *(_QWORD *)v16) != BugCheckParameter2 + 24 )
      __fastfail(3u);
    v17 = v15 ^ (BugCheckParameter2 + 24);
    *(_QWORD *)v15 = v17;
    *(_QWORD *)(v15 + 8) = v15 ^ v16;
    *(_QWORD *)v16 = v15 ^ v16;
    *(_QWORD *)(BugCheckParameter2 + 32) = v17;
    RtlpHpVsFreeChunkInsert(BugCheckParameter2, v15, v15 + 48);
    v10 = (v8 + 1) << 16;
    v6 = a4;
  }
  v19 = v11 - 8;
  v20 = v19;
  v21 = HIDWORD(*(_QWORD *)v19);
  v22 = HIDWORD(v19) ^ v21 ^ HIDWORD(RtlpHeapKey);
  if ( (v22 & 0xFF0000) != 0 )
  {
    v23 = v19 ^ *(_DWORD *)(v19 + 8);
LABEL_33:
    v24 = (unsigned __int8)(RtlpHeapKey ^ v23);
    goto LABEL_35;
  }
  if ( (_WORD)v22 )
  {
    v20 = v19 - 16LL * (unsigned __int16)(WORD2(v19) ^ v21 ^ WORD2(RtlpHeapKey));
    v23 = v20 ^ *(_DWORD *)(v20 + 8);
    goto LABEL_33;
  }
  v24 = 0;
LABEL_35:
  v25 = (v20 - (unsigned int)(v24 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (*(_WORD *)(v25 + 34) ^ 0xABED) != *(_WORD *)(v25 + 32) )
  {
    RtlpLogHeapFailure(17, *(_QWORD *)(BugCheckParameter2 + 56), v25, v19, 0LL);
    goto LABEL_37;
  }
  if ( !(unsigned int)RtlpHpVsChunkSplit((volatile signed __int64 *)BugCheckParameter2, v25, v19, v8 + 1, v6) )
  {
LABEL_37:
    v18 = 0LL;
    if ( !v9 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
    }
    return v18;
  }
  v18 = v19 + 16;
  v27 = 16 * ((WORD1(RtlpHeapKey) ^ WORD1(v19) ^ *(unsigned __int16 *)(v19 + 2)) - 1);
  if ( (unsigned int)v4 >= (unsigned int)v27 )
  {
    *(_DWORD *)(v19 + 8) &= ~0x100u;
  }
  else
  {
    *(_DWORD *)(v19 + 8) |= 0x100u;
    *(_BYTE *)(v27 + v18 - 1) = 0;
    if ( (_DWORD)v27 - (_DWORD)v4 == 1 )
      *(_WORD *)(v27 + v18 - 2) |= 0x8000u;
    else
      *(_WORD *)((unsigned int)v27 + v18 - 2) ^= (*(_WORD *)(v27 + v18 - 2) ^ (v27 - v4)) & 0x1FFF;
  }
  if ( !v9 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
  }
  if ( (a4 & 2) != 0 )
    memset((void *)(v19 + 16), 0, v4);
  return v18;
}
