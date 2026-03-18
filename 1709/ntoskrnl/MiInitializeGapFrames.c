/*
 * XREFs of MiInitializeGapFrames @ 0x140849A88
 * Callers:
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 *     MiFillPfnGaps @ 0x140849A2C (MiFillPfnGaps.c)
 * Callees:
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

__int64 __fastcall MiInitializeGapFrames(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // r9
  __int64 v5; // r8
  unsigned __int64 v6; // r9
  ULONG_PTR v7; // r14
  __int64 v8; // rbx
  __int64 *v9; // r15
  __int64 Page; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  int v17; // r8d

  if ( a1 )
  {
    if ( a1 != -1 )
      return 0LL;
    v3 = qword_140389188;
  }
  else
  {
    v3 = qword_1403891A0;
  }
  if ( !(unsigned int)MiChargeResident(&MiSystemPartition, 3uLL) )
    return 0LL;
  if ( !(unsigned int)MiChargeCommit((__int64)&MiSystemPartition, 3uLL, 1LL, v4) )
    return 0LL;
  v7 = MiReservePtes((__int64)&qword_140389360, 3uLL, v5);
  if ( !v7 )
    return 0LL;
  v8 = 0LL;
  v9 = a2;
  do
  {
    if ( (_DWORD)v8 )
    {
      Page = MiGetPage((__int64)&MiSystemPartition, v8, 0x88u);
      v3 = Page;
      if ( Page == -1 )
        return 0LL;
      v11 = 48 * Page - 0x58000000000LL;
      *(_QWORD *)(v11 + 40) &= ~0x200000000000000uLL;
      v12 = *(_QWORD *)(v11 + 24) & 0xC000000000000001uLL;
      *(_WORD *)(v11 + 32) = 1;
      *(_QWORD *)(v11 + 24) = v12 | 1;
      v13 = v7 + 8 * v8 - 8;
      *(_QWORD *)v13 = MiMakeValidPte(v7 + 8 * v8, v3, -1610612732);
      if ( v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow();
      v14 = (__int64)(v13 << 25) >> 16;
      if ( (_DWORD)v8 == 1 )
      {
        v15 = *a2;
        v16 = v7 - 8 + 8 * v8;
        v17 = 536870913;
      }
      else
      {
        v17 = -1476395004;
        v15 = a2[(unsigned int)(v8 - 1)];
        v16 = 0LL;
      }
      memset64((void *)v14, MiMakeValidPte(v16, v15, v17), 0x200uLL);
    }
    *v9 = v3;
    v8 = (unsigned int)(v8 + 1);
    ++v9;
  }
  while ( (unsigned int)v8 < 4 );
  MiReleasePtes((__int64)&qword_140389360, v7, 3u, v6);
  return 1LL;
}
