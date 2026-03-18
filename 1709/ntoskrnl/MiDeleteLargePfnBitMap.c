/*
 * XREFs of MiDeleteLargePfnBitMap @ 0x1406ED6C0
 * Callers:
 *     MiDeletePartitionResources @ 0x140236E78 (MiDeletePartitionResources.c)
 *     MiCreateLargePfnBitMaps @ 0x1405B4DC8 (MiCreateLargePfnBitMaps.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiSetPfnLink @ 0x1400379C4 (MiSetPfnLink.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiLockAndDecrementShareCount @ 0x1400EACDC (MiLockAndDecrementShareCount.c)
 *     MiReturnSplitPageCharges @ 0x14013907C (MiReturnSplitPageCharges.c)
 *     MiReturnPfnList @ 0x1401390C4 (MiReturnPfnList.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

void __fastcall MiDeleteLargePfnBitMap(__int64 a1)
{
  __int64 *v1; // r14
  unsigned __int64 v2; // r15
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // r12
  unsigned __int64 v6; // rcx
  __int64 *PteAddress; // rdi
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 PteShadow; // rax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF
  __int64 v19; // [rsp+70h] [rbp+18h]

  v1 = MiLargePageSizes;
  v2 = qword_1403885E0 + 1;
  v3 = a1 + 4936;
  v4 = 0LL;
  v19 = qword_1403885E0 + 1;
  v5 = 2LL;
  do
  {
    v6 = *(_QWORD *)(v3 + 8);
    if ( v6 )
    {
      PteAddress = (__int64 *)MiGetPteAddress(v6);
      ValidPte = MiMakeValidPte((unsigned __int64)PteAddress, qword_1403891A0, 1);
      v10 = (((v2 / *v1 + (v2 % *v1 != 0) + 7LL) >> 3) + 4095) >> 12;
      v11 = (unsigned int)v10;
      if ( (_DWORD)v10 )
      {
        v12 = (unsigned int)v10;
        do
        {
          PteShadow = *PteAddress;
          if ( (unsigned __int64)PteAddress >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)PteAddress <= 0xFFFFF6FB7DBED7F8uLL )
          {
            PteShadow = MiReadPteShadow();
          }
          v18 = PteShadow;
          if ( PteShadow != ValidPte )
          {
            v14 = (_QWORD *)MI_GET_PFN_FROM_PTE((unsigned __int64 *)&v18);
            MiSetPfnLink(v14, v4);
            v4 = v15;
            MiLockAndDecrementShareCount(48 * v16 - 0x58000000000LL, 0);
          }
          ++PteAddress;
          --v12;
        }
        while ( v12 );
        v2 = v19;
      }
      MiReleasePtes((__int64)&qword_140389360, (unsigned __int64)&PteAddress[-v11], v11, v9);
      *(_QWORD *)(v3 + 8) = 0LL;
    }
    v3 += 16LL;
    ++v1;
    --v5;
  }
  while ( v5 );
  if ( v4 )
  {
    v17 = MiReturnPfnList(v4);
    MiReturnSplitPageCharges((__int64)&MiSystemPartition, v17, 9);
  }
}
