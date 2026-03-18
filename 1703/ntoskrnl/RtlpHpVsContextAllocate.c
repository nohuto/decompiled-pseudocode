/*
 * XREFs of RtlpHpVsContextAllocate @ 0x140245810
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x14000F72C (RtlpAllocateHeapInternal.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     RtlpLogHeapFailure @ 0x14017D77C (RtlpLogHeapFailure.c)
 *     memset @ 0x140192D80 (memset.c)
 *     RtlpHpVsChunkSplit @ 0x14024552C (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsFreeChunkInsert @ 0x140245DA8 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsSubsegmentCreate @ 0x1402460E8 (RtlpHpVsSubsegmentCreate.c)
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
  _QWORD *v15; // rsi
  _QWORD *v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  int v22; // eax
  int v23; // ecx
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx

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
    v15 = (_QWORD *)RtlpHpVsSubsegmentCreate(BugCheckParameter2, v5, v6);
    if ( !v15 )
      return 0LL;
    if ( !v9 )
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    if ( (*(_DWORD *)(BugCheckParameter2 + 104) & 0x8000000) == 0 )
    {
      v16 = *(_QWORD **)(BugCheckParameter2 + 32);
      if ( *v16 != BugCheckParameter2 + 24 )
        __fastfail(3u);
      *v15 = BugCheckParameter2 + 24;
      v15[1] = v16;
      *v16 = v15;
      *(_QWORD *)(BugCheckParameter2 + 32) = v15;
    }
    RtlpHpVsFreeChunkInsert(BugCheckParameter2, v15, v15 + 6);
    v10 = (v8 + 1) << 16;
    v6 = a4;
  }
  v18 = v11 - 8;
  v19 = v18;
  v20 = HIDWORD(*(_QWORD *)v18);
  v21 = HIDWORD(v18) ^ v20 ^ HIDWORD(RtlpHeapKey);
  if ( (v21 & 0xFF0000) != 0 )
  {
    v22 = v18 ^ *(_DWORD *)(v18 + 8);
LABEL_35:
    v23 = (unsigned __int8)(RtlpHeapKey ^ v22);
    goto LABEL_37;
  }
  if ( (_WORD)v21 )
  {
    v19 = v18 - 16LL * (unsigned __int16)(WORD2(v18) ^ v20 ^ WORD2(RtlpHeapKey));
    v22 = v19 ^ *(_DWORD *)(v19 + 8);
    goto LABEL_35;
  }
  v23 = 0;
LABEL_37:
  v24 = (v19 - (unsigned int)(v23 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (*(_WORD *)(v24 + 34) ^ 0xABED) != *(_WORD *)(v24 + 32) )
  {
    RtlpLogHeapFailure(17, *(_QWORD *)(BugCheckParameter2 + 56), v24, v18, 0LL);
    goto LABEL_40;
  }
  if ( !(unsigned int)RtlpHpVsChunkSplit((volatile signed __int64 *)BugCheckParameter2, v24, v18, v8 + 1, v6) )
  {
LABEL_40:
    v17 = 0LL;
    if ( !v9 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
    }
    return v17;
  }
  v17 = v18 + 16;
  v25 = 16 * ((WORD1(RtlpHeapKey) ^ WORD1(v18) ^ *(unsigned __int16 *)(v18 + 2)) - 1);
  if ( (unsigned int)v4 >= (unsigned int)v25 )
  {
    *(_DWORD *)(v18 + 8) &= ~0x100u;
  }
  else
  {
    *(_DWORD *)(v18 + 8) |= 0x100u;
    *(_BYTE *)(v25 + v17 - 1) = 0;
    if ( (_DWORD)v25 - (_DWORD)v4 == 1 )
      *(_WORD *)(v25 + v17 - 2) |= 0x8000u;
    else
      *(_WORD *)((unsigned int)v25 + v17 - 2) ^= (*(_WORD *)(v25 + v17 - 2) ^ (v25 - v4)) & 0x1FFF;
  }
  if ( !v9 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
  }
  if ( (a4 & 2) != 0 )
    memset((void *)(v18 + 16), 0, v4);
  return v17;
}
