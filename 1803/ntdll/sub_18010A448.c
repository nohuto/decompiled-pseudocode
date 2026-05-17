/*
 * XREFs of sub_18010A448 @ 0x18010A448
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180109790 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     ZwReadVirtualMemory @ 0x18009B2A0 (ZwReadVirtualMemory.c)
 *     ZwCreateSection @ 0x18009B400 (ZwCreateSection.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_18010A448(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  int v5; // ebx
  __int64 result; // rax
  int v8; // edi
  int Section; // esi
  _OWORD *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int128 v13; // xmm1
  _QWORD *Heap; // [rsp+50h] [rbp-30h]
  __int64 v15; // [rsp+68h] [rbp-18h]

  v5 = 0;
  if ( !is_mul_ok(0x1000uLL, 1uLL) )
    return 3221225621LL;
  v8 = a3 & 0x20000000;
  if ( (a3 & 0x20000000) != 0 )
  {
    Heap = 0LL;
    result = ZwAllocateVirtualMemory();
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 64LL);
    if ( !Heap )
      return 3221225626LL;
  }
  Section = ZwCreateSection();
  if ( Section < 0 )
    goto LABEL_8;
  Section = ZwMapViewOfSection();
  if ( Section >= 0 )
  {
    v10 = 0LL;
    memset(Heap, 0, 0x40uLL);
    v11 = 2147352576LL;
    if ( *a4 == 2147352576LL )
    {
      v12 = 14LL;
      do
      {
        *v10 = *(_OWORD *)v11;
        v10[1] = *(_OWORD *)(v11 + 16);
        v10[2] = *(_OWORD *)(v11 + 32);
        v10[3] = *(_OWORD *)(v11 + 48);
        v10[4] = *(_OWORD *)(v11 + 64);
        v10[5] = *(_OWORD *)(v11 + 80);
        v10[6] = *(_OWORD *)(v11 + 96);
        v10 += 8;
        v13 = *(_OWORD *)(v11 + 112);
        v11 += 128LL;
        *(v10 - 1) = v13;
        --v12;
      }
      while ( v12 );
      *(_QWORD *)v10 = *(_QWORD *)v11;
    }
    else if ( (int)ZwReadVirtualMemory() < 0 )
    {
LABEL_21:
      ZwUnmapViewOfSection();
      *(_DWORD *)(a1 + 888) = v5;
      *(_DWORD *)(a1 + 4) |= v8 != 0 ? 4 : 2;
      *(_QWORD *)(a1 + 896) = v15;
      *(_QWORD *)(a1 + 904) = Heap;
      *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
      return 0LL;
    }
    if ( (int)ZwQueryVirtualMemory() >= 0 )
    {
      v5 = 1;
      *Heap = *a4;
      Heap[7] = MEMORY[0x7FFE0014];
    }
    goto LABEL_21;
  }
  ZwClose();
LABEL_8:
  if ( v8 )
    ZwFreeVirtualMemory();
  else
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  return (unsigned int)Section;
}
