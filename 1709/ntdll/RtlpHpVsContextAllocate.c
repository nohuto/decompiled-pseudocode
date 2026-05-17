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

__int64 __fastcall RtlpHpVsContextAllocate(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  size_t v4; // r12
  unsigned int v5; // r13d
  unsigned int v7; // r15d
  int v8; // ebp
  unsigned int i; // eax
  __int64 v10; // rdi
  int v11; // ebx
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r10
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  unsigned __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rbx
  unsigned __int64 *v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned int v31; // [rsp+88h] [rbp+20h]

  v31 = a4;
  v4 = (unsigned int)a2;
  v5 = (_DWORD)a3 + 2;
  if ( (_DWORD)a2 == (_DWORD)a3 )
    v5 = (unsigned int)a3;
  v7 = (v5 + 15) >> 4;
  v8 = a4 & 1;
  if ( (a4 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1, a2, a3, a4);
  for ( i = (v7 + 1) << 16; ; i = (v7 + 1) << 16 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    v11 = *(_BYTE *)(a1 + 16) & 1;
    v12 = 0LL;
    while ( v10 )
    {
      v13 = RtlpHpVsChunkCompare(i, v10);
      if ( !v13 )
        goto LABEL_16;
      if ( v13 < 0 )
      {
        v14 = *(_QWORD *)v10;
        v12 = v10;
      }
      else
      {
        v14 = *(_QWORD *)(v10 + 8);
      }
      if ( v11 && v14 )
        v10 ^= v14;
      else
        v10 = v14;
      i = (v7 + 1) << 16;
    }
    v10 = v12;
LABEL_16:
    if ( v10 )
      break;
    if ( !v8 )
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
    v26 = RtlpHpVsSubsegmentCreate(a1, v5, v31, a4);
    if ( !v26 )
      return 0LL;
    if ( !v8 )
      RtlAcquireSRWLockExclusive(a1, v25, v27, v28);
    v29 = (a1 + 24) ^ *(_QWORD *)(a1 + 32);
    if ( (v29 ^ *(_QWORD *)v29) != a1 + 24 )
      __fastfail(3u);
    v30 = v26 ^ (a1 + 24);
    *(_QWORD *)v26 = v30;
    *(_QWORD *)(v26 + 8) = v26 ^ v29;
    *(_QWORD *)v29 = v26 ^ v29;
    *(_QWORD *)(a1 + 32) = v30;
    RtlpHpVsFreeChunkInsert(a1, v26, v26 + 48);
  }
  v15 = v10 - 8;
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
    if ( (unsigned int)RtlpHpVsChunkSplit(a1, v21, v15, v7 + 1, v31) )
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
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
      if ( (v31 & 2) != 0 )
        memset((void *)(v15 + 16), 0, v4);
      return v22;
    }
  }
  else
  {
    RtlpLogHeapFailure(17, *(_QWORD *)(a1 + 56), v21, v15, 0LL, 0LL);
  }
  v22 = 0LL;
  if ( !v8 )
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v22;
}
