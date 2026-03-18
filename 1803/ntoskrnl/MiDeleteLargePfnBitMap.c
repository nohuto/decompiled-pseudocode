/*
 * XREFs of MiDeleteLargePfnBitMap @ 0x140756B40
 * Callers:
 *     MiDeletePartitionResources @ 0x14026E874 (MiDeletePartitionResources.c)
 *     MiCreateLargePfnBitMaps @ 0x14064A598 (MiCreateLargePfnBitMaps.c)
 * Callees:
 *     MiSetPfnLink @ 0x1400093E8 (MiSetPfnLink.c)
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiLockAndDecrementShareCount @ 0x1400AD83C (MiLockAndDecrementShareCount.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiReturnPfnList @ 0x14017C188 (MiReturnPfnList.c)
 *     MiReturnSplitPageCharges @ 0x140186104 (MiReturnSplitPageCharges.c)
 */

void __fastcall MiDeleteLargePfnBitMap(__int64 a1)
{
  __int64 *v1; // r14
  unsigned __int64 v2; // r15
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // r13
  unsigned __int64 v6; // rcx
  unsigned __int64 PteAddress; // rdi
  __int64 v8; // r9
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 v10; // rcx
  __int64 v11; // r15
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+78h] [rbp+10h]
  __int64 v19; // [rsp+80h] [rbp+18h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h]

  v1 = MiLargePageSizes;
  v2 = qword_1403CB780 + 1;
  v3 = a1 + 5000;
  v4 = 0LL;
  v17 = qword_1403CB780 + 1;
  v5 = 2LL;
  v18 = 2LL;
  do
  {
    v6 = *(_QWORD *)(v3 + 8);
    if ( v6 )
    {
      PteAddress = MiGetPteAddress(v6);
      ValidPte = MiMakeValidPte(PteAddress, qword_1403CC420, 1LL, v8);
      v10 = (((v2 / *v1 + (v2 % *v1 != 0) + 7LL) >> 3) + 4095) >> 12;
      v11 = (unsigned int)v10;
      v20 = (unsigned int)v10;
      if ( (_DWORD)v10 )
      {
        v12 = (unsigned int)v10;
        do
        {
          v19 = MI_READ_PTE_LOCK_FREE(PteAddress);
          if ( v19 != ValidPte )
          {
            v13 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v19);
            MiSetPfnLink((_QWORD *)(48 * ((v13 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL), v4);
            v4 = v14;
            MiLockAndDecrementShareCount(48 * v15 - 0x58000000000LL, 0);
          }
          PteAddress += 8LL;
          --v12;
        }
        while ( v12 );
        v11 = v20;
        v5 = v18;
      }
      MiReleasePtes((__int64)&qword_1403CC5E0, PteAddress - 8 * v11, (unsigned int)v11);
      *(_QWORD *)(v3 + 8) = 0LL;
      v2 = v17;
    }
    v3 += 16LL;
    ++v1;
    v18 = --v5;
  }
  while ( v5 );
  if ( v4 )
  {
    v16 = MiReturnPfnList(v4);
    MiReturnSplitPageCharges((__int64)&MiSystemPartition, v16, 9);
  }
}
