/*
 * XREFs of MiCreateZeroThreadContext @ 0x14015892C
 * Callers:
 *     MiZeroPageThread @ 0x1401579F0 (MiZeroPageThread.c)
 *     MiZeroNodePages @ 0x1401585A0 (MiZeroNodePages.c)
 * Callees:
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiGetLargePageWorkMapping @ 0x140158B08 (MiGetLargePageWorkMapping.c)
 *     MiDeleteZeroThreadContext @ 0x14015C1E0 (MiDeleteZeroThreadContext.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakePageFilePte @ 0x14017CF3C (MiMakePageFilePte.c)
 *     MiSetFreshPfnFromFreeList @ 0x14017D268 (MiSetFreshPfnFromFreeList.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

unsigned __int64 *__fastcall MiCreateZeroThreadContext(ULONG_PTR *a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 *PoolWithTag; // rax
  unsigned __int64 *v7; // rdi
  unsigned __int64 v9; // r8
  ULONG_PTR v10; // rax
  __int64 PageFilePte; // rax
  __int64 *v12; // r10
  __int64 v13; // rcx
  __int64 v14; // r10
  __int64 v15; // rcx
  __int64 v16; // r11
  unsigned int v17; // esi
  unsigned __int64 *v18; // r14
  unsigned __int64 LargePageWorkMapping; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 Page; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // r8

  PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x20206D4Du);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, 0xA0uLL);
  v7[18] = a2;
  if ( !a3 )
  {
    v10 = MiReservePtes((__int64)&qword_14036D0A0, 0x100uLL, v9);
    if ( !v10 )
    {
LABEL_5:
      ExFreePoolWithTag(v7, 0);
      return 0LL;
    }
    v7[17] = v10;
    PageFilePte = MiMakePageFilePte(256LL);
    *v12 = PageFilePte;
    if ( (unsigned int)MiPteInShadowRange(v12) )
      MiWritePteShadow(v13);
    do
    {
      *(_QWORD *)(v14 + 8) = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v14 + 8) )
        MiWritePteShadow(v15);
    }
    while ( v16 != 1 );
LABEL_11:
    v17 = 0;
    v18 = v7 + 15;
    do
    {
      if ( a3 != 1 || v17 == 1 )
      {
        LargePageWorkMapping = MiGetLargePageWorkMapping(v17);
        if ( !LargePageWorkMapping )
          break;
        v20 = ((LargePageWorkMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v21 = 2 - v17;
        do
        {
          v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v21;
        }
        while ( v21 );
        *v18 = v20;
      }
      ++v17;
      ++v18;
    }
    while ( v17 <= 1 );
    if ( v17 <= 1 )
      goto LABEL_21;
    return v7;
  }
  if ( a1 != &MiSystemPartition )
    goto LABEL_11;
  v7[10] = -1LL;
  v7[11] = 0LL;
  Page = MiGetPage((__int64)a1, *(_DWORD *)(a2 + 40), 0xCAu);
  if ( Page == -1 )
  {
LABEL_21:
    MiDeleteZeroThreadContext(v7);
    goto LABEL_5;
  }
  v23 = 48 * Page - 0x58000000000LL;
  *(_QWORD *)(v23 + 16) = 0LL;
  MiSetFreshPfnFromFreeList(v23);
  v7[12] = v24;
  *((_BYTE *)v7 + 104) = 1;
  return v7;
}
