/*
 * XREFs of MiAssignNonPagedPoolPtes @ 0x1400C38C0
 * Callers:
 *     ExpAllocateBigPool @ 0x1400C0CC0 (ExpAllocateBigPool.c)
 *     MiAllocatePoolPages @ 0x1400C3740 (MiAllocatePoolPages.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiChangePageAttribute @ 0x1400ED32C (MiChangePageAttribute.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiLogPerfMemoryRangeEvent @ 0x140216D54 (MiLogPerfMemoryRangeEvent.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiAssignNonPagedPoolPtes(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rbp
  unsigned __int64 v7; // r14
  char v8; // r8^1
  __int64 DemandZeroPte; // rdi
  unsigned int v10; // r13d
  unsigned __int64 ValidPte; // rbx
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // r10
  __int64 *v16; // r15
  unsigned __int8 CurrentIrql; // r12
  __int64 *v18; // rax
  unsigned int v19; // ecx
  unsigned __int64 v20; // rax
  __int64 result; // rax
  int v24; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v25; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v5 = a1;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  v10 = 0;
  ValidPte = MiMakeValidPte(v7, 0LL, ~v8 & 2 | 0xA0000004);
  if ( v4 )
  {
    do
    {
      v12 = (4096 - (v7 & 0xFFF)) >> 3;
      if ( v12 > v4 - v10 )
        v12 = v4 - v10;
      v25 = v12 + v10;
      do
      {
        ValidPte ^= (ValidPte ^ (((__int64)(a4 + 0xB000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
        if ( (*((_BYTE *)a4 + 35) & 0x10) == 0 )
        {
          a4[5] &= ~0x200000000000000uLL;
          a4[2] = DemandZeroPte;
          *((_WORD *)a4 + 16) = 1;
        }
        v13 = MI_GET_PAGE_FRAME_FROM_PTE(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v16 = (__int64 *)*a4;
        a4[5] ^= v14 & (a4[5] ^ v13);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v24 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)a4 + 6, 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v24);
            while ( a4[3] < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)a4 + 6, 0x3FuLL) );
          v14 = 0xFFFFFFFFFLL;
          v15 = 0xFFFFFFF000000000uLL;
        }
        *a4 = 0LL;
        a4[5] &= ~0x200000000000000uLL;
        v18 = MiLargePageContainingFrames;
        v19 = 0;
        while ( (v14 & a4[5]) != *v18 )
        {
          ++v19;
          ++v18;
          if ( v19 >= 3 )
            goto LABEL_16;
        }
        a4[5] &= v15;
LABEL_16:
        if ( (*((_BYTE *)a4 + 34) & 0xC0) != 0x40 )
          MiChangePageAttribute(a4, 1LL, 1LL);
        v20 = a4[3] & 0xC000000000000001uLL;
        *((_WORD *)a4 + 16) = 1;
        a4[1] = v7;
        a4[3] = v20 | 1;
        *((_BYTE *)a4 + 34) = *((_BYTE *)a4 + 34) & 0xF8 | 6;
        _InterlockedAnd64(a4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        *(_QWORD *)v7 = ValidPte;
        if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v7, ValidPte);
        v7 += 8LL;
        a4 = v16;
        --v12;
      }
      while ( v12 );
      v10 = v25;
      v4 = a2;
    }
    while ( v25 < a2 );
    v5 = a1;
  }
  result = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    return MiLogPerfMemoryRangeEvent(v5, 0LL, 11LL, v4);
  return result;
}
