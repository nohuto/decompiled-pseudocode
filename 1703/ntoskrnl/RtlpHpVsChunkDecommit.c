/*
 * XREFs of RtlpHpVsChunkDecommit @ 0x1402452B8
 * Callers:
 *     RtlpHpVsChunkFree @ 0x140245480 (RtlpHpVsChunkFree.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     RtlpHpVsChunkComputeCost @ 0x1402451E4 (RtlpHpVsChunkComputeCost.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x140245FD0 (RtlpHpVsSubsegmentCommitPages.c)
 */

__int64 __fastcall RtlpHpVsChunkDecommit(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, int a4)
{
  int v7; // ebp
  unsigned int v8; // r14d
  int v9; // r8d
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  char v12; // dl
  unsigned int v14[3]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+3Ch] [rbp-2Ch]
  unsigned __int64 v16; // [rsp+40h] [rbp-28h] BYREF

  v7 = a2;
  v8 = 0;
  RtlpHpVsChunkComputeCost(a3, a2, v14, &v16);
  if ( v14[0] )
  {
    v9 = v16;
    if ( v16 )
    {
      v10 = (0x101010101010101LL
           * ((((v16 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v16 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v16 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v16 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      if ( *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 56) + 16LL) != -857879331 )
      {
        v11 = *(_QWORD *)(BugCheckParameter2 + 40) >> 7;
        if ( v11 <= 8 )
          v11 = 8LL;
        if ( *(_QWORD *)(BugCheckParameter2 + 48) + (unsigned __int64)(unsigned int)v10 > v11 )
        {
          v12 = RtlpHeapKey;
          v15 = v15 & 0xFF00FFFF | 0x10000;
          v8 = 1;
          *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE2(v15) ^ BYTE6(RtlpHeapKey);
          *(_DWORD *)(a3 + 8) = (unsigned __int8)(a3 ^ v12 ^ ((unsigned int)(a3 - v7) >> 12)) | 0x200;
          if ( (a4 & 1) == 0 )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
            KeAbPostRelease(BugCheckParameter2);
            v9 = v16;
          }
          RtlpHpVsSubsegmentCommitPages(BugCheckParameter2, v7, v9, v10, 0, a4);
          if ( (a4 & 1) == 0 )
            ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
          *(_DWORD *)(a3 + 8) &= ~0x200u;
        }
      }
    }
  }
  return v8;
}
