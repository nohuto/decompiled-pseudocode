/*
 * XREFs of MiAssignNonPagedPoolPtes @ 0x1400B2F20
 * Callers:
 *     MiAllocatePoolPages @ 0x1400212B0 (MiAllocatePoolPages.c)
 *     ExpAllocateBigPool @ 0x14008C2B0 (ExpAllocateBigPool.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiFreeZeroPageSizeIndex @ 0x1400B6080 (MiFreeZeroPageSizeIndex.c)
 *     MiChangePageAttribute @ 0x1401032F4 (MiChangePageAttribute.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14020F010 (MiLogPerfMemoryRangeEvent.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiAssignNonPagedPoolPtes(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r14
  char v8; // r8^1
  __int64 DemandZeroPte; // rdi
  unsigned int v10; // r13d
  unsigned __int64 ValidPte; // rbx
  __int16 v12; // r8
  unsigned int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // r11
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  __int64 result; // rax
  unsigned int v23; // [rsp+70h] [rbp+18h]

  v5 = a2;
  v6 = a1;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  v10 = 0;
  ValidPte = MiMakeValidPte(v7, 0LL, ~v8 & 2 | 0xA0000004);
  if ( v5 )
  {
    v12 = 1;
    do
    {
      v13 = (4096 - (v7 & 0xFFF)) >> 3;
      if ( v13 > v5 - v10 )
        v13 = v5 - v10;
      v23 = v13 + v10;
      do
      {
        ValidPte ^= (ValidPte ^ (((a4 + 0x58000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
        if ( (*(_BYTE *)(a4 + 35) & 0x10) == 0 )
        {
          *(_QWORD *)(a4 + 40) &= ~0x200000000000000uLL;
          *(_QWORD *)(a4 + 16) = DemandZeroPte;
          *(_WORD *)(a4 + 32) = v12;
        }
        v14 = MI_GET_PAGE_FRAME_FROM_PTE(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v15 = *(_QWORD *)a4;
        *(_QWORD *)(a4 + 40) ^= v16 & (*(_QWORD *)(a4 + 40) ^ v14);
        *(_QWORD *)a4 = 0LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        MiLockPageAtDpcInline(a4);
        if ( (unsigned int)MiFreeZeroPageSizeIndex(a4) != -1 )
          *(_QWORD *)(a4 + 40) &= 0xFFFFFFF000000000uLL;
        if ( (*(_BYTE *)(a4 + 34) & 0xC0) != 0x40 )
          MiChangePageAttribute(a4, 1LL, 1LL);
        v18 = *(_QWORD *)(a4 + 24) & 0xC000000000000001uLL;
        *(_QWORD *)(a4 + 8) = v7;
        *(_QWORD *)(a4 + 24) = v18 | 1;
        LOBYTE(v18) = *(_BYTE *)(a4 + 34) & 0xFE;
        *(_WORD *)(a4 + 32) = 1;
        *(_BYTE *)(a4 + 34) = v18 | 6;
        _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        *(_QWORD *)v7 = ValidPte;
        if ( (unsigned int)MiPteInShadowRange(v7) )
        {
          MiWritePteShadow(v19);
          v12 = 1;
        }
        v7 += 8LL;
        a4 = v15;
        --v13;
      }
      while ( v13 );
      v10 = v23;
      v5 = a2;
    }
    while ( v23 < a2 );
    v6 = a1;
  }
  result = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    return MiLogPerfMemoryRangeEvent(v6, 0LL, 11LL, v5);
  return result;
}
