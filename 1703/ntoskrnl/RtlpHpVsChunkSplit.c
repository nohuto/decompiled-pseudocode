/*
 * XREFs of RtlpHpVsChunkSplit @ 0x14024552C
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x140245810 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     RtlpHpVsChunkFree @ 0x140245480 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsFreeChunkRemove @ 0x140245ED0 (RtlpHpVsFreeChunkRemove.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x140245FD0 (RtlpHpVsSubsegmentCommitPages.c)
 */

__int64 __fastcall RtlpHpVsChunkSplit(
        volatile signed __int64 *BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5)
{
  __int64 v7; // rbx
  __int64 v10; // r9
  unsigned int v11; // ebx
  unsigned int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // r11d
  unsigned int v15; // ebx
  int v16; // r10d
  int v17; // eax
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rdi
  int v21; // edx
  unsigned __int64 v22; // r8
  __int64 v24; // [rsp+78h] [rbp+10h]
  int v25; // [rsp+7Ch] [rbp+14h]
  unsigned int v26; // [rsp+88h] [rbp+20h]

  v7 = a3 ^ RtlpHeapKey ^ *(_QWORD *)a3;
  RtlpHpVsFreeChunkRemove(BugCheckParameter2, a2, a3);
  v10 = RtlpHeapKey;
  v11 = WORD1(v7);
  v12 = v11 - a4;
  v13 = 16 * (v11 - a4);
  if ( v13 < 0x20 )
    a4 = v11;
  v14 = 0;
  if ( v13 >= 0x20 )
    v14 = v12;
  v15 = v14;
  v26 = v14;
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ ((v25 & 0xFF00FFFF | 0x10000) >> 16) ^ BYTE6(RtlpHeapKey);
  v16 = (unsigned __int8)(v10 ^ a3 ^ ((unsigned int)(a3 - a2) >> 12));
  v17 = 16 * a4 + 32;
  *(_DWORD *)(a3 + 8) = v16;
  if ( !v14 )
    v17 = 16 * a4;
  v18 = (-1LL << ((unsigned int)(a3 - a2) >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                             - (unsigned __int8)((unsigned __int64)(unsigned int)(a3 - a2 + v17 - 1) >> 12)));
  v19 = (v18 ^ *(_QWORD *)(a2 + 16)) & v18;
  if ( v19 )
  {
    *(_DWORD *)(a3 + 8) = v16 | 0x200;
    if ( (a5 & 1) == 0 )
    {
      if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2);
      KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
      v14 = v15;
    }
    v15 = v14;
    if ( (int)RtlpHpVsSubsegmentCommitPages(
                (_DWORD)BugCheckParameter2,
                a2,
                v19,
                (unsigned int)((0x101010101010101LL
                              * ((((v19 - ((v19 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                + (((v19 - ((v19 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                + ((((v19 - ((v19 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                  + (((v19 - ((v19 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24,
                1,
                a5) < 0 )
    {
      v15 = a4 + v26;
      a4 = 0;
    }
    if ( (a5 & 1) == 0 )
      ExAcquirePushLockExclusiveEx((ULONG_PTR)BugCheckParameter2, 0LL);
    *(_DWORD *)(a3 + 8) &= ~0x200u;
    v10 = RtlpHeapKey;
  }
  *(_WORD *)(a3 + 2) = WORD1(RtlpHeapKey) ^ a4 ^ WORD1(a3);
  if ( v15 )
  {
    v20 = 16LL * a4 + a3;
    if ( a4 )
      v21 = (unsigned __int16)a4;
    else
      v21 = (unsigned __int16)(WORD2(v20) ^ WORD2(v10) ^ HIDWORD(*(_QWORD *)v20));
    LODWORD(v24) = v15 << 16;
    HIDWORD(v24) = v21 & 0xFF00FFFF | 0x10000;
    v22 = v20 + 16LL * v15;
    *(_QWORD *)v20 = v20 ^ v24 ^ v10;
    *(_DWORD *)(v20 + 8) = (unsigned __int8)(v10 ^ v20 ^ ((unsigned int)(v20 - a2) >> 12));
    if ( v22 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
      *(_WORD *)(v22 + 4) = WORD2(v22) ^ WORD2(v10) ^ v15;
    RtlpHpVsChunkFree((ULONG_PTR)BugCheckParameter2, a2, v20, a5);
  }
  return a4;
}
