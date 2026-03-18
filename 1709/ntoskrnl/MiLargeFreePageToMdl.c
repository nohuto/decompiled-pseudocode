/*
 * XREFs of MiLargeFreePageToMdl @ 0x14012630C
 * Callers:
 *     MiTradePage @ 0x140078860 (MiTradePage.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiSetPfnBlink @ 0x1400C7514 (MiSetPfnBlink.c)
 *     KeShouldYieldProcessor @ 0x1401091E0 (KeShouldYieldProcessor.c)
 *     MiTryUnlinkNodeLargePage @ 0x140126570 (MiTryUnlinkNodeLargePage.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022A99C (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiLargeFreePageToMdl(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rdi
  unsigned __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
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
  v6 = 48 * v4 - 0x58000000000LL;
  v7 = v4 + v3;
  v8 = 0LL;
  v9 = v6 + 48 * v3;
  v17 = 0LL;
  if ( (*(_BYTE *)(v6 + 34) & 7) == 1 )
  {
    MiSetOriginalPtePfnFromFreeList(&v17);
    v8 = v17;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v11 = 48 * v7 - 0x57FFFFFFFF0LL;
  while ( 1 )
  {
    LOBYTE(v7) = v7 - 1;
    v11 -= 48LL;
    MiLockPageAtDpcInline(v9 - 48);
    v12 = *(_QWORD *)v11;
    v9 = v11 - 16;
    *(_QWORD *)(v11 - 16) = 0LL;
    if ( MiGetPteTimeStamp(v12) == 4294967293LL )
      *(_QWORD *)v11 = MiUpdatePageFileHighInPte(v8, 4294967293LL);
    else
      *(_QWORD *)v11 = v8;
    MiSetPfnBlink(v11 - 16, 0LL, 1);
    *(_QWORD *)(v11 + 24) &= 0xFFFFFFF000000000uLL;
    *(_BYTE *)(v11 + 18) = *(_BYTE *)(v11 + 18) & 0xF8 | 5;
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 8), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v7 & 0xF) == 0 && KeShouldYieldProcessor() )
    {
      __writecr8(CurrentIrql);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    if ( v9 <= v6 )
      break;
    v8 = v17;
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
