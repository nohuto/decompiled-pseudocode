/*
 * XREFs of RtlpHpVsChunkDecommit @ 0x14025C7D8
 * Callers:
 *     RtlpHpVsChunkFree @ 0x14025C970 (RtlpHpVsChunkFree.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     RtlpHpVsChunkComputeCost @ 0x14025C704 (RtlpHpVsChunkComputeCost.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14025D4E0 (RtlpHpVsSubsegmentCommitPages.c)
 */

__int64 __fastcall RtlpHpVsChunkDecommit(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, char a4)
{
  int v7; // esi
  unsigned int v8; // ebp
  int v9; // r8d
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r14
  char v12; // dl
  int v13; // r15d
  unsigned int v15[3]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+3Ch] [rbp-2Ch]
  unsigned __int64 v17; // [rsp+40h] [rbp-28h] BYREF

  v7 = a2;
  v8 = 0;
  RtlpHpVsChunkComputeCost(a3, a2, v15, &v17);
  if ( v15[0] )
  {
    v9 = v17;
    if ( v17 )
    {
      v10 = *(_QWORD *)(BugCheckParameter2 + 40) >> 7;
      v11 = (0x101010101010101LL
           * ((((v17 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v17 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v17 - ((v17 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v17 - ((v17 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      if ( v10 <= 8 )
        v10 = 8LL;
      if ( *(_QWORD *)(BugCheckParameter2 + 48) + (unsigned __int64)(unsigned int)v11 > v10 )
      {
        v8 = 1;
        v12 = RtlpHeapKey;
        v16 = v16 & 0xFF00FFFF | 0x10000;
        *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE2(v16) ^ BYTE6(RtlpHeapKey);
        *(_DWORD *)(a3 + 8) = (unsigned __int8)(a3 ^ v12 ^ ((unsigned int)(a3 - v7) >> 12)) | 0x200;
        v13 = a4 & 1;
        if ( !v13 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
          KeAbPostRelease(BugCheckParameter2);
          v9 = v17;
        }
        RtlpHpVsSubsegmentCommitPages(BugCheckParameter2, v7, v9, v11, 0);
        if ( !v13 )
          ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
        *(_DWORD *)(a3 + 8) &= ~0x200u;
      }
    }
  }
  return v8;
}
