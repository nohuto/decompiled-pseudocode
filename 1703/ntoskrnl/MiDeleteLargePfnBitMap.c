/*
 * XREFs of MiDeleteLargePfnBitMap @ 0x1406BFB38
 * Callers:
 *     MiDeletePartitionResources @ 0x14021D818 (MiDeletePartitionResources.c)
 *     MiCreateLargePfnBitMaps @ 0x1405BA7C0 (MiCreateLargePfnBitMaps.c)
 * Callees:
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiLockAndDecrementShareCount @ 0x140102090 (MiLockAndDecrementShareCount.c)
 *     MiReturnPfnList @ 0x14015B5D8 (MiReturnPfnList.c)
 *     MiReturnSplitPageCharges @ 0x1401677FC (MiReturnSplitPageCharges.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiDeleteLargePfnBitMap(__int64 a1)
{
  __int64 *v1; // r14
  unsigned __int64 v2; // r15
  unsigned __int64 *v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // r13
  unsigned __int64 PteAddress; // rdi
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 v8; // rcx
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 *v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h]
  __int64 v16; // [rsp+78h] [rbp+20h]

  v1 = MiLargePageSizes;
  v2 = qword_14036C290 + 1;
  v3 = (unsigned __int64 *)(a1 + 4816);
  v4 = 0LL;
  v16 = qword_14036C290 + 1;
  v5 = 2LL;
  do
  {
    if ( *v3 )
    {
      PteAddress = MiGetPteAddress(*v3);
      ValidPte = MiMakeValidPte(PteAddress, qword_14036CEE0, 1);
      v8 = (((v2 / *v1 + (v2 % *v1 != 0) + 7LL) >> 3) + 4095) >> 12;
      v9 = (unsigned int)v8;
      v15 = (unsigned int)v8;
      if ( (_DWORD)v8 )
      {
        v10 = (unsigned int)v8;
        do
        {
          v14 = MI_READ_PTE_LOCK_FREE(PteAddress);
          if ( v14 != ValidPte )
          {
            v11 = (__int64 *)(48 * MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v14) - 0x58000000000LL);
            v12 = v11[5];
            *v11 = v4;
            v4 = (__int64)v11;
            MiLockAndDecrementShareCount(48 * (v12 & 0xFFFFFFFFFLL) - 0x58000000000LL, 0);
          }
          PteAddress += 8LL;
          --v10;
        }
        while ( v10 );
        v9 = v15;
        v2 = v16;
      }
      MiReleasePtes((__int64)&qword_14036D0A0, (_QWORD *)(PteAddress - 8 * v9), v9);
    }
    v3 += 2;
    ++v1;
    --v5;
  }
  while ( v5 );
  if ( v4 )
  {
    v13 = MiReturnPfnList(v4);
    MiReturnSplitPageCharges((__int64)&MiSystemPartition, v13, 9u);
  }
}
