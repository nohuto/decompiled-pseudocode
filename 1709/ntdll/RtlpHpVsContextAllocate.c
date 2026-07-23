/*
 * XREFs of RtlpHpVsContextAllocate @ 0x18004C21C
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x180048A5C (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsChunkSplit @ 0x18003D9A0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkCompare @ 0x18003E830 (RtlpHpVsChunkCompare.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180071FAC (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsSubsegmentCreate @ 0x18007894C (RtlpHpVsSubsegmentCreate.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlpHpVsContextAllocate(PRTL_SRWLOCK SRWLock, size_t Size, unsigned int a3, __int64 a4)
{
  size_t v4; // r12
  unsigned int v5; // r13d
  unsigned int v7; // r15d
  int v8; // ebp
  unsigned int i; // eax
  unsigned __int64 Value; // rdi
  int v11; // ebx
  unsigned __int64 v12; // r14
  int v13; // eax
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r10
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  unsigned __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v25; // rbx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned int v28; // [rsp+88h] [rbp+20h]

  v28 = a4;
  v4 = (unsigned int)Size;
  v5 = a3 + 2;
  if ( (_DWORD)Size == a3 )
    v5 = a3;
  v7 = (v5 + 15) >> 4;
  v8 = a4 & 1;
  if ( (a4 & 1) == 0 )
    RtlAcquireSRWLockExclusive(SRWLock);
  for ( i = (v7 + 1) << 16; ; i = (v7 + 1) << 16 )
  {
    Value = SRWLock[1].Value;
    v11 = *(_BYTE *)&SRWLock[2].0 & 1;
    v12 = 0LL;
    while ( Value )
    {
      v13 = RtlpHpVsChunkCompare(i, Value);
      if ( !v13 )
        goto LABEL_16;
      if ( v13 < 0 )
      {
        v14 = *(_QWORD *)Value;
        v12 = Value;
      }
      else
      {
        v14 = *(_QWORD *)(Value + 8);
      }
      if ( v11 && v14 )
        Value ^= v14;
      else
        Value = v14;
      i = (v7 + 1) << 16;
    }
    Value = v12;
LABEL_16:
    if ( Value )
      break;
    if ( !v8 )
      RtlReleaseSRWLockExclusive(SRWLock);
    v25 = RtlpHpVsSubsegmentCreate(SRWLock, v5, v28, a4);
    if ( !v25 )
      return 0LL;
    if ( !v8 )
      RtlAcquireSRWLockExclusive(SRWLock);
    v26 = (unsigned __int64)&SRWLock[3] ^ SRWLock[4].Value;
    if ( (PRTL_SRWLOCK)(v26 ^ *(_QWORD *)v26) != &SRWLock[3] )
      __fastfail(3u);
    v27 = v25 ^ (unsigned __int64)&SRWLock[3];
    *(_QWORD *)v25 = v27;
    *(_QWORD *)(v25 + 8) = v25 ^ v26;
    *(_QWORD *)v26 = v25 ^ v26;
    SRWLock[4].Value = v27;
    RtlpHpVsFreeChunkInsert(SRWLock, v25, v25 + 48);
  }
  v15 = Value - 8;
  v16 = v15;
  v17 = HIDWORD(*(_QWORD *)v15);
  v18 = v17 ^ HIDWORD(v15) ^ HIDWORD(RtlpHeapKey);
  if ( (v18 & 0xFF0000) != 0 )
  {
    v19 = v15 ^ *(_DWORD *)(v15 + 8);
    goto LABEL_20;
  }
  if ( (_WORD)v18 )
  {
    v16 = v15 - 16LL * (unsigned __int16)(v17 ^ WORD2(v15) ^ WORD2(RtlpHeapKey));
    v19 = v16 ^ *(_DWORD *)(v16 + 8);
LABEL_20:
    v20 = (unsigned __int8)(RtlpHeapKey ^ v19);
    goto LABEL_21;
  }
  v20 = 0;
LABEL_21:
  v21 = (v16 - (unsigned int)(v20 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (*(_WORD *)(v21 + 34) ^ 0xABED) == *(_WORD *)(v21 + 32) )
  {
    if ( (unsigned int)RtlpHpVsChunkSplit((__int64)SRWLock, v21, v15, v7 + 1, v28) )
    {
      v22 = v15 + 16;
      v23 = 16 * ((WORD1(RtlpHeapKey) ^ WORD1(v15) ^ *(unsigned __int16 *)(v15 + 2)) - 1);
      if ( (unsigned int)v4 >= (unsigned int)v23 )
      {
        *(_DWORD *)(v15 + 8) &= ~0x100u;
      }
      else
      {
        *(_DWORD *)(v15 + 8) |= 0x100u;
        *(_BYTE *)(v23 + v22 - 1) = 0;
        if ( (_DWORD)v23 - (_DWORD)v4 == 1 )
        {
          *(_WORD *)((unsigned int)v23 + v22 - 2) |= 0x8000u;
        }
        else
        {
          *(_WORD *)((unsigned int)v23 + v22 - 2) &= 0xE000u;
          *(_WORD *)((unsigned int)v23 + v22 - 2) |= (v23 - v4) & 0x1FFF;
        }
      }
      if ( !v8 )
        RtlReleaseSRWLockExclusive(SRWLock);
      if ( (v28 & 2) != 0 )
        memset((void *)(v15 + 16), 0, v4);
      return v22;
    }
  }
  else
  {
    RtlpLogHeapFailure(17, SRWLock[7].Value, v21, v15, 0LL, 0LL);
  }
  v22 = 0LL;
  if ( !v8 )
    RtlReleaseSRWLockExclusive(SRWLock);
  return v22;
}
