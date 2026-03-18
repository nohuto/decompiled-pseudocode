/*
 * XREFs of EtwpTrackDecodeGuidForSession @ 0x1407B25C8
 * Callers:
 *     EtwpUpdateRegEntryEnableMask @ 0x14058C580 (EtwpUpdateRegEntryEnableMask.c)
 *     AddDecodeGuidToSessions @ 0x1407B2F50 (AddDecodeGuidToSessions.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

bool __fastcall EtwpTrackDecodeGuidForSession(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  volatile signed __int64 *v3; // rsi
  __int64 v4; // r14
  bool v6; // bl
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *i; // rdx
  __int64 v10; // rcx
  unsigned int v11; // eax
  char *PoolWithTag; // rcx
  __int128 v13; // xmm1
  __int64 v14; // rdx
  __int64 v16; // rcx

  v2 = *(_QWORD *)(a2 + 104);
  v3 = (volatile signed __int64 *)(a1 + 704);
  v4 = *(_QWORD *)(a2 + 32);
  v6 = 0;
  ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
  for ( i = *(_QWORD **)(a1 + 128); ; i = (_QWORD *)*i )
  {
    if ( !i )
    {
      v11 = *(_DWORD *)(a1 + 340) + 2048;
      if ( v11 <= *(_DWORD *)(a1 + 4) && v11 <= 0x10000 )
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x62777445u);
        if ( PoolWithTag )
        {
          *(_QWORD *)PoolWithTag = *(_QWORD *)(a1 + 128);
          *(_OWORD *)(PoolWithTag + 8) = *(_OWORD *)(v2 + 34);
          v13 = *(_OWORD *)(v4 + 24);
          PoolWithTag[40] = 0;
          *(_OWORD *)(PoolWithTag + 24) = v13;
          ++*(_DWORD *)(a1 + 136);
          *(_DWORD *)(a1 + 340) += 32;
          *(_QWORD *)(a1 + 128) = PoolWithTag;
          _InterlockedOr((volatile signed __int32 *)(a1 + 836), 0x8C0u);
          v6 = 1;
        }
      }
      goto LABEL_11;
    }
    v10 = *(_QWORD *)(v2 + 34) - i[1];
    if ( !v10 )
      v10 = *(_QWORD *)(v2 + 42) - i[2];
    if ( !v10 )
      break;
  }
  v16 = *(_QWORD *)(v4 + 24) - i[3];
  if ( !v16 )
    v16 = *(_QWORD *)(v4 + 32) - i[4];
  v6 = v16 == 0;
LABEL_11:
  v14 = _InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL);
  LOBYTE(v14) = v14 & 6;
  if ( (_BYTE)v14 == 2 )
    ExfTryToWakePushLock(v3, v14, v7, v8);
  KeAbPostRelease((ULONG_PTR)v3);
  return v6;
}
