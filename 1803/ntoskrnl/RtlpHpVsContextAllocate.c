/*
 * XREFs of RtlpHpVsContextAllocate @ 0x1400ABD80
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x1400AB5EC (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeapInternal @ 0x14029477C (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     RtlpHpVsSubsegmentCreate @ 0x1400AB17C (RtlpHpVsSubsegmentCreate.c)
 *     RtlpHpVsChunkSplit @ 0x1400AB668 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsFreeChunkInsert @ 0x1400AC19C (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpAcquireLockExclusive @ 0x1400AC764 (RtlpHpAcquireLockExclusive.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlpLogHeapFailure @ 0x1402932C0 (RtlpLogHeapFailure.c)
 *     RtlpHpVsChunkAlignSplit @ 0x1402977A8 (RtlpHpVsChunkAlignSplit.c)
 */

char *__fastcall RtlpHpVsContextAllocate(volatile LONG *SpinLock, unsigned int a2, int a3, __int64 a4)
{
  int v4; // r13d
  unsigned int v5; // ebp
  unsigned int v7; // r10d
  unsigned int v8; // ebx
  int v9; // r12d
  unsigned __int8 v10; // r15
  __int64 v11; // r8
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // ecx
  __int64 v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  char *v23; // rbp
  __int64 v24; // r14
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned int v27; // eax
  unsigned __int64 v28; // rdx
  int v29; // edx
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  int v35; // eax
  __int16 v36; // cx
  __int16 v37; // cx
  __int16 v38; // ax
  unsigned int v40; // [rsp+90h] [rbp+8h]
  __int64 v42; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v43; // [rsp+A8h] [rbp+20h]

  v43 = a4;
  v4 = a3 + 2;
  v5 = a4;
  if ( a2 == a3 )
    v4 = a3;
  v7 = ((unsigned int)(v4 + 15) >> 4) + 1;
  if ( (SpinLock[28] & 1) == 0 )
    v7 = (unsigned int)(v4 + 15) >> 4;
  v40 = v7 + 1;
  v8 = (v7 + 1) << 16;
  v9 = a4 & 1;
  if ( (a4 & 1) != 0 )
    v10 = -1;
  else
    v10 = RtlpHpAcquireLockExclusive(SpinLock, *((unsigned int *)SpinLock + 2));
  v11 = v8;
  v12 = (unsigned __int64)(SpinLock + 4);
  LOBYTE(v42) = v10;
  while ( 1 )
  {
    v13 = *((_QWORD *)SpinLock + 3);
    v14 = *(_QWORD *)v12;
    if ( (v13 & 1) != 0 && v14 )
      v14 ^= v12;
    v15 = v13 & 1;
    v16 = 0LL;
    while ( v14 )
    {
      v17 = RtlpHpHeapGlobals ^ *(_DWORD *)(v14 - 8) ^ (v14 - 8);
      if ( (unsigned int)v11 < v17 )
      {
        v18 = *(_QWORD *)v14;
        v16 = v14;
      }
      else
      {
        if ( (unsigned int)v11 <= v17 )
          goto LABEL_23;
        v18 = *(_QWORD *)(v14 + 8);
      }
      if ( v15 && v18 )
        v14 ^= v18;
      else
        v14 = v18;
    }
    v14 = v16;
LABEL_23:
    if ( v14 )
      break;
    if ( !v9 )
    {
      if ( *((_DWORD *)SpinLock + 2) )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        __writecr8(v10);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SpinLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)SpinLock, v16, v11, a4);
        KeAbPostRelease((ULONG_PTR)SpinLock);
        KeLeaveCriticalRegion();
      }
    }
    v19 = RtlpHpVsSubsegmentCreate((__int64)SpinLock, v4, v5);
    if ( !v19 )
      return 0LL;
    if ( v9 )
      v10 = -1;
    else
      v10 = RtlpHpAcquireLockExclusive(SpinLock, *((unsigned int *)SpinLock + 2));
    LOBYTE(v42) = v10;
    v20 = (unsigned __int64)(SpinLock + 8) ^ *((_QWORD *)SpinLock + 5);
    if ( (volatile LONG *)(v20 ^ *(_QWORD *)v20) != SpinLock + 8 )
      __fastfail(3u);
    v21 = v19 ^ (unsigned __int64)(SpinLock + 8);
    *(_QWORD *)v19 = v21;
    *(_QWORD *)(v19 + 8) = v19 ^ v20;
    *(_QWORD *)v20 = v19 ^ v20;
    *((_QWORD *)SpinLock + 5) = v21;
    if ( (SpinLock[28] & 1) != 0 && ((v19 + 80) & 0xFFF) != 0 )
    {
      v22 = RtlpHpVsChunkAlignSplit(v21, v19, v19 + 48);
      if ( v22 )
        RtlpHpVsFreeChunkInsert(SpinLock, v19, v22);
    }
    RtlpHpVsFreeChunkInsert(SpinLock, v19, v19 + 48);
    v11 = v8;
    v5 = v43;
  }
  v24 = v14 - 8;
  v25 = v14 - 8;
  v26 = (RtlpHpHeapGlobals ^ *(_QWORD *)v24 ^ (unsigned __int64)v24) >> 32;
  if ( (v26 & 0xFF0000) != 0 )
  {
    v27 = *(_DWORD *)v14 ^ v24;
LABEL_49:
    v29 = (unsigned __int8)(RtlpHpHeapGlobals ^ v27);
    goto LABEL_51;
  }
  if ( (_WORD)v26 )
  {
    v25 -= 16LL * (unsigned __int16)v26;
    if ( ((*(_QWORD *)v25 ^ RtlpHpHeapGlobals ^ v25) & 0xFF000000000000LL) != 0 )
    {
LABEL_48:
      v27 = v25 ^ *(_DWORD *)(v25 + 8);
      goto LABEL_49;
    }
    v28 = (*(_QWORD *)v25 ^ RtlpHpHeapGlobals ^ (unsigned __int64)v25) >> 32;
    if ( (_WORD)v28 )
    {
      v25 -= 16LL * (unsigned __int16)v28;
      goto LABEL_48;
    }
  }
  v29 = 0;
LABEL_51:
  v30 = (v25 - (unsigned int)(v29 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (*(_WORD *)(v30 + 34) ^ 0xABED) != *(_WORD *)(v30 + 32) )
  {
    RtlpLogHeapFailure(18, (unsigned int)SpinLock ^ *((_QWORD *)SpinLock + 8), v30, v14 - 8, 0LL);
    goto LABEL_72;
  }
  if ( !(unsigned int)RtlpHpVsChunkSplit((unsigned __int64)SpinLock, v30, v14 - 8, v40, v5, (unsigned __int8 *)&v42) )
  {
    v10 = v42;
LABEL_72:
    v23 = 0LL;
    if ( !v9 )
    {
      if ( *((_DWORD *)SpinLock + 2) )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        __writecr8(v10);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SpinLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)SpinLock, v31, v32, v33);
        KeAbPostRelease((ULONG_PTR)SpinLock);
        KeLeaveCriticalRegion();
      }
    }
    return v23;
  }
  v23 = (char *)(v24 + 16);
  v34 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v24) ^ *(unsigned __int16 *)(v24 + 2)) - 16;
  if ( (SpinLock[28] & 1) != 0 && ((v24 + 32) & 0xFFF) == 0 )
  {
    v23 = (char *)(v24 + 32);
    v34 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v24) ^ *(unsigned __int16 *)(v24 + 2)) - 32;
  }
  v35 = *(_DWORD *)v14;
  if ( a2 >= (unsigned int)v34 )
  {
    *(_DWORD *)v14 = v35 & 0xFFFFFEFF;
  }
  else
  {
    v32 = (unsigned int)v34;
    v31 = (unsigned int)v34 - a2;
    *(_DWORD *)v14 = v35 | 0x100;
    v23[v34 - 1] = 0;
    v36 = *(_WORD *)&v23[v34 - 2];
    if ( (_DWORD)v31 == 1 )
    {
      v37 = v36 | 0x8000;
    }
    else
    {
      v38 = v31 ^ v36;
      v31 = 0x1FFFLL;
      v37 = v38 & 0x1FFF ^ v36;
    }
    *(_WORD *)&v23[v32 - 2] = v37;
  }
  if ( !v9 )
  {
    if ( *((_DWORD *)SpinLock + 2) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      __writecr8((unsigned __int8)v42);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SpinLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)SpinLock, v31, v32, v33);
      KeAbPostRelease((ULONG_PTR)SpinLock);
      KeLeaveCriticalRegion();
    }
  }
  if ( (v43 & 2) != 0 )
    memset(v23, 0, a2);
  return v23;
}
