/*
 * XREFs of MiLargeFreePageToMdl @ 0x140002D74
 * Callers:
 *     MiTradePage @ 0x140121260 (MiTradePage.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140003784 (MiSetPfnBlink.c)
 *     MiTryUnlinkNodeLargePage @ 0x140003CC0 (MiTryUnlinkNodeLargePage.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140265490 (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiLargeFreePageToMdl(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r15
  __int64 v9; // r12
  unsigned __int8 CurrentIrql; // r13
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  _QWORD *v16; // r8
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF
  __int64 v18; // [rsp+80h] [rbp+18h]
  __int64 v19; // [rsp+88h] [rbp+20h]

  v18 = a3;
  v3 = MiLargePageSizes[(unsigned int)a2];
  v4 = a1 & ~(v3 - 1);
  v19 = v4;
  if ( (int)MiTryUnlinkNodeLargePage(v4, a2, 0LL) > 1 )
    return 0LL;
  v6 = ZeroPte;
  v7 = 48 * v4 - 0x58000000000LL;
  v8 = v7 + 48 * v3;
  v17 = ZeroPte;
  v9 = v4 + v3;
  if ( (*(_BYTE *)(v7 + 34) & 7) == 1 )
  {
    MiSetOriginalPtePfnFromFreeList(&v17);
    v6 = v17;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v11 = 48 * v9 - 0x57FFFFFFFF0LL;
  while ( 1 )
  {
    LOBYTE(v9) = v9 - 1;
    v11 -= 48LL;
    MiLockPageAtDpcInline(v8 - 48);
    v12 = *(_QWORD *)v11;
    v8 = v11 - 16;
    *(_QWORD *)(v11 - 16) = 0LL;
    if ( MiGetPteTimeStamp(v12) == 4294967293LL )
      *(_QWORD *)v11 = MiUpdatePageFileHighInPte(v6, 4294967293LL);
    else
      *(_QWORD *)v11 = v6;
    MiSetPfnBlink(v11 - 16, 0LL, 1LL);
    *(_QWORD *)(v11 + 24) &= 0xFFFFFFF000000000uLL;
    *(_BYTE *)(v11 + 18) = *(_BYTE *)(v11 + 18) & 0xF8 | 5;
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 8), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v9 & 0xF) == 0 && KeShouldYieldProcessor() )
    {
      __writecr8(CurrentIrql);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    if ( v8 <= v7 )
      break;
    v6 = v17;
  }
  __writecr8(CurrentIrql);
  v13 = v18;
  v14 = v19;
  if ( v18 )
  {
    v15 = (unsigned __int64)*(unsigned int *)(v18 + 40) >> 12;
    *(_DWORD *)(v18 + 40) += (_DWORD)v3 << 12;
    v16 = (_QWORD *)(v13 + 48 + 8 * v15);
    do
    {
      *v16++ = v14++;
      --v3;
    }
    while ( v3 );
  }
  return 1LL;
}
