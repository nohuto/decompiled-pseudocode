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

__int64 __fastcall RtlpHpAllocateHeapInternal(
        _RTL_SRWLOCK *BaseAddress,
        size_t Size,
        unsigned __int64 a3,
        unsigned int a4,
        int *a5)
{
  int v9; // r12d
  _RTL_SRWLOCK *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r15
  unsigned __int64 Value; // r15
  unsigned __int8 v14; // al
  void *v15; // rax
  __int64 v16; // rbx
  void *v18; // rax
  char CurrentProcessorNumber; // al
  unsigned int Value_low; // ecx
  unsigned int v21; // eax
  _RTL_SRWLOCK *v22; // rcx

  v9 = 3;
  if ( a3 > 0x3FF0 )
    goto LABEL_14;
  v10 = BaseAddress + 60;
  v11 = (unsigned int)(a3 + 2);
  if ( (_DWORD)Size == (_DWORD)a3 )
    v11 = (unsigned int)a3;
  v12 = RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v11 + 15) >> 4];
  if ( (v10[v12 + 26].Value & 1) == 0 || (unsigned int)RtlpHpLfhBucketUpdateStats(v10, v11, 1LL) )
  {
    Value = v10[v12 + 26].Value;
    if ( (RtlpHpLfhPerfFlags & 0x10) != 0 && *(_BYTE *)(Value + 2) == 1 )
    {
      v14 = 0;
    }
    else
    {
      CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
      Value_low = LOBYTE(v10[6].Value);
      v21 = CurrentProcessorNumber & 0x3F;
      if ( v21 >= Value_low )
      {
        if ( v21 == Value_low || (_BYTE)Value_low == 1 )
          v21 = 0;
        else
          v21 = *(unsigned __int8 *)(v21 - Value_low - 1 + v10[7].Value);
      }
      v14 = *(_BYTE *)(v21 + *(_QWORD *)(Value + 88));
    }
    v15 = (void *)RtlpHpLfhSlotAllocate(
                    (unsigned __int64)v10,
                    (_RTL_SRWLOCK *)Value,
                    *(_QWORD *)(*(_QWORD *)(Value + 96) + 8LL * v14),
                    Size,
                    a4);
    v16 = (__int64)v15;
    if ( v15 && (a4 & 2) != 0 )
      memset(v15, 0, (unsigned int)Size);
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
      if ( a3 <= LODWORD(BaseAddress[16].Value) )
      {
        v22 = BaseAddress + 14;
      }
      else
      {
        if ( a3 > LODWORD(BaseAddress[29].Value) )
        {
          v18 = (void *)RtlpHpLargeAlloc(BaseAddress);
          goto LABEL_16;
        }
        v22 = BaseAddress + 27;
      }
      v18 = RtlpHpSegAlloc((__int64)v22, Size, a3, a4);
    }
    else
    {
      v18 = (void *)RtlpHpVsContextAllocate(BaseAddress + 45, (unsigned int)Size);
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
