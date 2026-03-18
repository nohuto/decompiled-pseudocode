/*
 * XREFs of MiInitializeGapFrames @ 0x1408BAAB8
 * Callers:
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 *     MiFillPfnGaps @ 0x1408BAA64 (MiFillPfnGaps.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 */

__int64 __fastcall MiInitializeGapFrames(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  ULONG_PTR v6; // r15
  unsigned int v7; // ebx
  __int64 *v8; // r14
  __int64 Page; // rax
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // r10
  __int64 v19; // r8
  __int64 v20; // rdi

  if ( a1 )
  {
    if ( a1 != -1 )
      return 0LL;
    v5 = qword_1403CC408;
  }
  else
  {
    v5 = qword_1403CC420;
  }
  if ( !(unsigned int)MiChargeResident(&MiSystemPartition, 3uLL, 0LL, a4) )
    return 0LL;
  if ( !(unsigned int)MiChargeCommit((__int64)&MiSystemPartition, 3uLL, 1u) )
    return 0LL;
  v6 = MiReservePtes((__int64)&qword_1403CC5E0, 3u);
  if ( !v6 )
    return 0LL;
  v7 = 0;
  v8 = a2;
  do
  {
    if ( v7 )
    {
      Page = MiGetPage((__int64)&MiSystemPartition, v7, 0x208u);
      v5 = Page;
      if ( Page == -1 )
        return 0LL;
      v11 = 48 * Page - 0x58000000000LL;
      *(_QWORD *)(v11 + 40) &= ~0x200000000000000uLL;
      v12 = *(_QWORD *)(v11 + 24) & 0xC000000000000001uLL;
      *(_WORD *)(v11 + 32) = 1;
      *(_QWORD *)(v11 + 24) = v12 | 1;
      v13 = v6 + 8LL * v7;
      *(_QWORD *)(v13 - 8) = MiMakeValidPte(v13, v5, 2684354564LL, v10);
      if ( MiPteInShadowRange(v13 - 8) )
        MiWritePteShadow(v15, v14, v16);
      v19 = 536870913LL;
      v20 = (__int64)(v18 << 25) >> 16;
      if ( v7 != 1 )
      {
        v19 = 2818572292LL;
        v18 = 0LL;
      }
      memset64((void *)v20, MiMakeValidPte(v18, a2[v7 - 1], v19, v17), 0x200uLL);
    }
    *v8 = v5;
    ++v7;
    ++v8;
  }
  while ( v7 < 4 );
  MiReleasePtes((__int64)&qword_1403CC5E0, v6, 3uLL);
  return 1LL;
}
