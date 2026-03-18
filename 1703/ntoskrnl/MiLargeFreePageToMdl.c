/*
 * XREFs of MiLargeFreePageToMdl @ 0x140074CE4
 * Callers:
 *     MiAllocateMostlyContiguous @ 0x1400B8420 (MiAllocateMostlyContiguous.c)
 *     MiClaimPhysicalRun @ 0x14010E174 (MiClaimPhysicalRun.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14000D660 (KeShouldYieldProcessor.c)
 *     MiSetPfnBlink @ 0x140075C3C (MiSetPfnBlink.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiTryUnlinkNodeLargePage @ 0x140128BFC (MiTryUnlinkNodeLargePage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14017D278 (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiLargeFreePageToMdl(__int64 a1, int a2, __int64 *a3)
{
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v9; // rdi
  _QWORD *v10; // rsi
  __int64 v11; // r15
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v13; // rbp
  __int64 v14; // rax
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = MiLargePageSizes[a2];
  v5 = a1 & ~(v4 - 1);
  if ( (int)MiTryUnlinkNodeLargePage(v5) > 1 )
    return 0LL;
  v15 = 0LL;
  v9 = 48 * v5 - 0x58000000000LL;
  v10 = (_QWORD *)(v9 + 48 * v4);
  v11 = v5 + v4;
  if ( (*(_BYTE *)(v9 + 34) & 7) == 1 )
    MiSetOriginalPtePfnFromFreeList(&v15, v6, v7);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v13 = (_QWORD *)(48 * v11 - 0x57FFFFFFFD8LL);
  do
  {
    --v11;
    v13 -= 6;
    MiLockPageAtDpcInline(v10 - 6);
    v14 = v15;
    v10 = v13 - 5;
    *(v13 - 5) = 0LL;
    *(v13 - 3) = v14;
    MiSetPfnBlink(v13 - 5, 0LL, 1LL);
    *v13 &= 0xFFFFFFF000000000uLL;
    *((_BYTE *)v13 - 6) = *((_BYTE *)v13 - 6) & 0xF8 | 5;
    _InterlockedAnd64(v13 - 2, 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v11 & 0xF) == 0 && KeShouldYieldProcessor() )
    {
      __writecr8(CurrentIrql);
      CurrentIrql = 17;
    }
    if ( a3 )
      *a3++ = v11;
    if ( CurrentIrql == 17 )
    {
      if ( v10 == (_QWORD *)v9 )
        return 1LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
    }
  }
  while ( (unsigned __int64)v10 > v9 );
  __writecr8(CurrentIrql);
  return 1LL;
}
