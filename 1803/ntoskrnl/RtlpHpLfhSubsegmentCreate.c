/*
 * XREFs of RtlpHpLfhSubsegmentCreate @ 0x14029B8A4
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x14029A9A8 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     RtlpHpAcquireLockShared @ 0x1402975A4 (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhBucketComputeNewSubsegmentBlockCount @ 0x1402997CC (RtlpHpLfhBucketComputeNewSubsegmentBlockCount.c)
 *     RtlpHpLfhBucketSubsegmentStatsUpdate @ 0x140299B50 (RtlpHpLfhBucketSubsegmentStatsUpdate.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x14029CC10 (RtlpHpLfhSubsegmentInitialize.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSubsegmentCreate(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rbp
  char v6; // si
  int v8; // ebx
  int v9; // r13d
  int v10; // eax
  unsigned int v11; // r8d
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  int v14; // edx
  unsigned int v15; // r9d
  unsigned int v16; // edx
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // r14d
  unsigned int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // eax
  int v23; // r12d
  _SLIST_HEADER *v24; // rcx
  PSLIST_ENTRY v25; // rsi
  unsigned int v26; // edx
  unsigned int v27; // ebx
  unsigned int v28; // ecx
  KIRQL v30; // [rsp+90h] [rbp+8h]
  int v31; // [rsp+98h] [rbp+10h]

  v4 = *(unsigned __int8 *)(a2 + 1);
  v5 = 0LL;
  v6 = a3;
  v8 = (unsigned __int16)RtlpBucketBlockSizes[v4];
  v31 = v8;
  v9 = (RtlpHpLfhPerfFlags & 1) != 0 && RtlpHpLfhBucketSubsegmentStatsUpdate((volatile signed __int64 *)(a1 + 104), v4);
  v10 = RtlpHpLfhBucketComputeNewSubsegmentBlockCount(a2, v9);
  v11 = v8 * v10;
  v12 = 18;
  v13 = 7;
  v14 = (8 * (((unsigned __int64)(unsigned int)(2 * v10) + 63) >> 6) + 63) & 0xFFFFFFF0;
  v15 = v14 + 2 * ((v11 + v14 + 4095) >> 12);
  v16 = *(_DWORD *)(a1 + 84);
  v17 = v15 + v11;
  if ( v15 + v11 >= v16 )
    v17 = *(_DWORD *)(a1 + 84);
  _BitScanReverse((unsigned int *)&v17, v17 - 1);
  v18 = v17 + 1;
  if ( v18 > 7 )
    v13 = v18;
  if ( v13 < 0x12 )
    v12 = v13;
  if ( v12 <= 0xC )
    v12 = 12;
  v19 = 1 << v12;
  if ( (RtlpHpLfhPerfFlags & 8) != 0 && v15 <= v11 >> 6 )
  {
    v20 = 7;
    v12 = 18;
    if ( v11 >= v16 )
      v11 = *(_DWORD *)(a1 + 84);
    _BitScanReverse(&v21, v11 - 1);
    v22 = v21 + 1;
    if ( v22 > 7 )
      v20 = v22;
    if ( v20 < 0x12 )
      v12 = v20;
    if ( v12 <= 0xC )
      v12 = 12;
    if ( v19 > 1 << v12 )
      v19 = 1 << v12;
  }
  v23 = v6 & 1;
  if ( (v6 & 1) != 0 )
    v30 = -1;
  else
    v30 = RtlpHpAcquireLockShared((volatile LONG *)(a1 + 96), *(unsigned __int8 *)(a1 + 64));
  v24 = (_SLIST_HEADER *)(a1 + 16 * (v12 - 12 + 7LL));
  if ( LOWORD(v24->Alignment) )
    v25 = RtlpInterlockedPopEntrySList(v24);
  else
    v25 = 0LL;
  if ( v25 )
  {
    v26 = 1 << *((_BYTE *)&v25[2].Next + 12);
  }
  else
  {
    v25 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 8)))(
                          *(_QWORD *)a1,
                          v19,
                          0LL,
                          a3);
    if ( !v25 )
      goto LABEL_58;
    v26 = 0;
  }
  if ( (RtlpHpLfhPerfFlags & 2) != 0 && v9 )
  {
    v27 = v19;
  }
  else if ( (RtlpHpAppCompatFlags & 4) != 0 )
  {
    v27 = v19;
  }
  else
  {
    v27 = 2 * v31;
    if ( ((v27 - 1) & v27) != 0 )
    {
      _BitScanReverse(&v28, v27);
      v27 = 1 << (v28 + 1);
    }
    if ( v27 <= 0x1000 )
      v27 = 4096;
    if ( v27 >= v19 )
      v27 = v19;
  }
  if ( v26 && *((_BYTE *)&v25[2].Next + 13) > 1u )
    v5 = -(__int64)((unsigned __int64)v26 >> 12);
  if ( v26 >= v27
    || ((int (__fastcall *)(_QWORD, PSLIST_ENTRY, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
         *(_QWORD *)a1,
         v25,
         v27) >= 0 )
  {
    if ( v27 != v19 )
      v5 += (unsigned __int64)v27 >> 12;
    if ( v5 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 24LL), v5);
    RtlpHpLfhSubsegmentInitialize(v25, a1);
    _InterlockedIncrement64((volatile signed __int64 *)(a2 + 64));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 56), WORD1(v25[2].Next));
    v5 = (unsigned __int64)v25;
    v25 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v25 )
    ((void (__fastcall *)(_QWORD, PSLIST_ENTRY, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 16)))(
      *(_QWORD *)a1,
      v25,
      v19,
      a3);
LABEL_58:
  if ( !v23 )
  {
    if ( *(_BYTE *)(a1 + 64) )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 96));
      __writecr8(v30);
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 96), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 96));
      KeAbPostRelease(a1 + 96);
      KeLeaveCriticalRegion();
    }
  }
  return v5;
}
