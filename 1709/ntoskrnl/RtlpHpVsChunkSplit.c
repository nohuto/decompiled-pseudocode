/*
 * XREFs of RtlpHpVsChunkSplit @ 0x14025CA10
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x14025CCEC (RtlpHpVsContextAllocate.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     RtlpHpVsChunkFree @ 0x14025C970 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsFreeChunkRemove @ 0x14025D3C4 (RtlpHpVsFreeChunkRemove.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14025D4E0 (RtlpHpVsSubsegmentCommitPages.c)
 */

__int64 __fastcall RtlpHpVsChunkSplit(
        volatile signed __int64 *BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5)
{
  __int64 v7; // rbx
  unsigned int v10; // ebx
  unsigned int v11; // edx
  unsigned int v12; // eax
  unsigned int v13; // r13d
  char v14; // dl
  unsigned int v15; // ebx
  unsigned int v16; // r9d
  int v17; // r10d
  int v18; // eax
  char v19; // cl
  unsigned __int64 v20; // r12
  int v21; // edx
  unsigned __int64 v22; // rdi
  __int64 v23; // r10
  unsigned __int64 v24; // r8
  __int64 v26; // [rsp+68h] [rbp+10h]
  int v27; // [rsp+6Ch] [rbp+14h]

  v7 = a3 ^ RtlpHeapKey ^ *(_QWORD *)a3;
  RtlpHpVsFreeChunkRemove(BugCheckParameter2, a2, a3);
  v10 = WORD1(v7);
  v11 = v10 - a4;
  v12 = 16 * (v10 - a4);
  if ( v12 < 0x20 )
    a4 = v10;
  v13 = 0;
  if ( v12 >= 0x20 )
    v13 = v11;
  v14 = RtlpHeapKey;
  v15 = v13;
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ ((v27 & 0xFF00FFFF | 0x10000) >> 16) ^ BYTE6(RtlpHeapKey);
  v16 = (unsigned int)(a3 - a2) >> 12;
  v17 = (unsigned __int8)(v14 ^ a3 ^ v16);
  *(_DWORD *)(a3 + 8) = v17;
  v18 = 16 * a4 + 32;
  if ( !v13 )
    v18 = 16 * a4;
  v19 = 63 - ((unsigned __int64)(unsigned int)(a3 - a2 - 1 + v18) >> 12);
  v20 = ((-1LL << v16) & (0xFFFFFFFFFFFFFFFFuLL >> v19) ^ *(_QWORD *)(a2 + 16)) & (-1LL << v16) & (0xFFFFFFFFFFFFFFFFuLL >> v19);
  if ( v20 )
  {
    *(_DWORD *)(a3 + 8) = v17 | 0x200;
    if ( (a5 & 1) == 0 )
    {
      if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2);
      KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
    }
    if ( (int)RtlpHpVsSubsegmentCommitPages(
                (_DWORD)BugCheckParameter2,
                a2,
                v20,
                (unsigned int)((0x101010101010101LL
                              * ((((v20 - ((v20 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                + (((v20 - ((v20 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                + ((((v20 - ((v20 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                  + (((v20 - ((v20 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24,
                1) < 0 )
    {
      v15 = a4 + v13;
      a4 = 0;
    }
    if ( (a5 & 1) == 0 )
      ExAcquirePushLockExclusiveEx((ULONG_PTR)BugCheckParameter2, 0LL);
    *(_DWORD *)(a3 + 8) &= ~0x200u;
  }
  v21 = (unsigned __int16)a4;
  *(_WORD *)(a3 + 2) = WORD1(RtlpHeapKey) ^ a4 ^ WORD1(a3);
  if ( v15 )
  {
    v22 = 16LL * a4 + a3;
    if ( !a4 )
      v21 = (unsigned __int16)(WORD2(v22) ^ WORD2(RtlpHeapKey) ^ HIDWORD(*(_QWORD *)v22));
    v23 = RtlpHeapKey;
    HIDWORD(v26) = v21 & 0xFF00FFFF | 0x10000;
    LODWORD(v26) = v15 << 16;
    *(_QWORD *)v22 = v22 ^ v26 ^ RtlpHeapKey;
    v24 = v22 + 16LL * v15;
    *(_DWORD *)(v22 + 8) = (unsigned __int8)(v23 ^ v22 ^ ((unsigned int)(v22 - a2) >> 12));
    if ( v24 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
      *(_WORD *)(v24 + 4) = WORD2(v24) ^ WORD2(v23) ^ v15;
    RtlpHpVsChunkFree((ULONG_PTR)BugCheckParameter2, a2, v22, a5);
  }
  return a4;
}
