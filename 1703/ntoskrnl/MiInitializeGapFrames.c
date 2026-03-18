/*
 * XREFs of MiInitializeGapFrames @ 0x1408165A8
 * Callers:
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 *     MiFillPfnGaps @ 0x14081654C (MiFillPfnGaps.c)
 * Callees:
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiGetPage @ 0x1400BBC00 (MiGetPage.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiFinalizePageAttribute @ 0x140105D40 (MiFinalizePageAttribute.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 */

__int64 __fastcall MiInitializeGapFrames(__int64 a1, __int64 *a2)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // r8
  _QWORD *v5; // r14
  __int64 v6; // rbx
  __int64 *v7; // r15
  __int64 Page; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  int v14; // r8d

  if ( a1 )
  {
    if ( a1 != -1 )
      return 0LL;
    v3 = qword_14036CEC8;
  }
  else
  {
    v3 = qword_14036CEE0;
  }
  if ( !(unsigned int)MiChargeResident(&MiSystemPartition, 3uLL, 0LL) )
    return 0LL;
  if ( !(unsigned int)MiChargeCommit((unsigned __int64)&MiSystemPartition, 3uLL, 1uLL) )
    return 0LL;
  v5 = (_QWORD *)MiReservePtes((__int64)&qword_14036D0A0, 3uLL, v4);
  if ( !v5 )
    return 0LL;
  v6 = 0LL;
  v7 = a2;
  do
  {
    if ( (_DWORD)v6 )
    {
      Page = MiGetPage((__int64)&MiSystemPartition, v6, 8u);
      v3 = Page;
      if ( Page == -1 )
        return 0LL;
      v9 = 48 * Page - 0x58000000000LL;
      *(_QWORD *)v9 = 0LL;
      *(_QWORD *)(v9 + 40) &= ~0x200000000000000uLL;
      *(_WORD *)(v9 + 32) = 1;
      MiFinalizePageAttribute(v9, 1u, 0);
      *(_QWORD *)(v9 + 24) = *(_QWORD *)(v9 + 24) & 0xC000000000000000uLL | 1;
      v10 = (unsigned __int64)&v5[v6 - 1];
      *(_QWORD *)v10 = MiMakeValidPte((unsigned __int64)&v5[v6], v3, -1610612732);
      if ( MiPteInShadowRange(v10) )
        MiWritePteShadow();
      v11 = (__int64)(v10 << 25) >> 16;
      if ( (_DWORD)v6 == 1 )
      {
        v12 = *a2;
        v13 = (unsigned __int64)&v5[v6 - 1];
        v14 = 536870913;
      }
      else
      {
        v14 = -1476395004;
        v12 = a2[(unsigned int)(v6 - 1)];
        v13 = 0LL;
      }
      memset64((void *)v11, MiMakeValidPte(v13, v12, v14), 0x200uLL);
    }
    *v7 = v3;
    v6 = (unsigned int)(v6 + 1);
    ++v7;
  }
  while ( (unsigned int)v6 < 4 );
  MiReleasePtes((__int64)&qword_14036D0A0, v5, 3u);
  return 1LL;
}
