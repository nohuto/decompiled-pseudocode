/*
 * XREFs of RtlpHpAllocateHeapInternal @ 0x180048A5C
 * Callers:
 *     RtlpHpReallocMove @ 0x180048858 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeap @ 0x18006F284 (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x18003827C (RtlpHpSegAlloc.c)
 *     RtlpHpLfhSlotAllocate @ 0x180042C90 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpVsContextAllocate @ 0x18004C21C (RtlpHpVsContextAllocate.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x18004C48C (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpHpLargeAlloc @ 0x18006EC20 (RtlpHpLargeAlloc.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A4830 (RtlGetCurrentProcessorNumber.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlpHpAllocateHeapInternal(__int64 a1, size_t a2, unsigned __int64 a3, unsigned int a4, int *a5)
{
  int v9; // r12d
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // r15
  unsigned __int8 v14; // al
  void *v15; // rax
  __int64 v16; // rbx
  void *v18; // rax
  char CurrentProcessorNumber; // al
  unsigned int v20; // ecx
  unsigned int v21; // eax
  __int64 v22; // rcx

  v9 = 3;
  if ( a3 > 0x3FF0 )
    goto LABEL_14;
  v10 = a1 + 480;
  v11 = (unsigned int)(a3 + 2);
  if ( (_DWORD)a2 == (_DWORD)a3 )
    v11 = (unsigned int)a3;
  v12 = RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v11 + 15) >> 4];
  if ( (*(_QWORD *)(v10 + 8 * v12 + 208) & 1) == 0 || (unsigned int)RtlpHpLfhBucketUpdateStats(v10, v11, 1LL) )
  {
    v13 = *(_QWORD *)(v10 + 8 * v12 + 208);
    if ( (RtlpHpLfhPerfFlags & 0x10) != 0 && *(_BYTE *)(v13 + 2) == 1 )
    {
      v14 = 0;
    }
    else
    {
      CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
      v20 = *(unsigned __int8 *)(v10 + 48);
      v21 = CurrentProcessorNumber & 0x3F;
      if ( v21 >= v20 )
      {
        if ( v21 == v20 || (_BYTE)v20 == 1 )
          v21 = 0;
        else
          v21 = *(unsigned __int8 *)(v21 - v20 - 1 + *(_QWORD *)(v10 + 56));
      }
      v14 = *(_BYTE *)(v21 + *(_QWORD *)(v13 + 88));
    }
    v15 = (void *)RtlpHpLfhSlotAllocate(v10, v13, *(_QWORD *)(*(_QWORD *)(v13 + 96) + 8LL * v14), a2, a4);
    v16 = (__int64)v15;
    if ( v15 && (a4 & 2) != 0 )
      memset(v15, 0, (unsigned int)a2);
  }
  else
  {
    v16 = -1LL;
  }
  if ( v16 == -1 )
  {
LABEL_14:
    if ( a3 > 0x20000 )
    {
      if ( a3 <= *(unsigned int *)(a1 + 128) )
      {
        v22 = a1 + 112;
      }
      else
      {
        if ( a3 > *(unsigned int *)(a1 + 232) )
        {
          v18 = (void *)RtlpHpLargeAlloc(a1, a2, a3, a4);
          goto LABEL_16;
        }
        v22 = a1 + 216;
      }
      v18 = RtlpHpSegAlloc(v22, a2, a3, a4);
    }
    else
    {
      v18 = (void *)RtlpHpVsContextAllocate(a1 + 360, (unsigned int)a2, (unsigned int)a3, a4);
    }
LABEL_16:
    v16 = (__int64)v18;
    goto LABEL_13;
  }
  v9 = 2;
LABEL_13:
  *a5 = v9;
  return v16;
}
