/*
 * XREFs of MiMakeLargePageTable @ 0x14025BAE8
 * Callers:
 *     MiCreateSystemPageTable @ 0x140070FD0 (MiCreateSystemPageTable.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiGetLeafVa @ 0x14003DF80 (MiGetLeafVa.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiInitializePfnForOtherProcess @ 0x140071528 (MiInitializePfnForOtherProcess.c)
 *     MiTransformValidPteInPlace @ 0x1400C022C (MiTransformValidPteInPlace.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiGetContainingPageTable @ 0x1401A64B8 (MiGetContainingPageTable.c)
 *     MiDemotePfnListChain @ 0x1402689E8 (MiDemotePfnListChain.c)
 */

__int64 __fastcall MiMakeLargePageTable(__int64 a1, volatile signed __int64 *a2, int a3)
{
  __int64 v3; // rsi
  unsigned __int64 v5; // r13
  __int64 v6; // r9
  unsigned __int64 LeafVa; // r10
  unsigned int v8; // edx
  unsigned __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r12
  _QWORD *v12; // r14
  __int64 v13; // rbp
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // r9
  __int64 v17; // rbx
  signed __int64 v18; // r10
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r10
  __int64 result; // rax
  unsigned __int64 ContainingPageTable; // [rsp+60h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 168);
  v5 = a3;
  if ( (*(_DWORD *)(v3 + 52) & 0x80u) == 0 )
    return 0LL;
  if ( (unsigned int)(a3 - 1) > 1 )
    return 0LL;
  LeafVa = MiGetLeafVa((unsigned __int64)a2);
  if ( LeafVa < *(_QWORD *)(v6 + 32) )
    return 0LL;
  v8 = 1;
  if ( v5 > 1 )
  {
    v9 = v5 - 1;
    do
    {
      --v8;
      --v9;
    }
    while ( v9 );
  }
  v10 = v8;
  v11 = MiLargePageSizes[v8];
  if ( LeafVa + (v11 << 12) - 1 > *(_QWORD *)(v6 + 40) )
    return 0LL;
  v12 = *(_QWORD **)(v3 + 8LL * v8);
  if ( !v12 )
  {
    if ( !v8 )
      return 0LL;
    MiDemotePfnListChain(v3);
    v12 = *(_QWORD **)(v3 + 8 * v10);
    if ( !v12 )
      return 0LL;
  }
  *(_QWORD *)(v3 + 8 * v10) = *v12;
  v13 = (__int64)(v12 + 0xB000000000LL) / 48;
  ContainingPageTable = MiGetContainingPageTable((unsigned __int64)a2);
  v15 = v14 + 48 * ContainingPageTable;
  MiLockPageAtDpcInline(v15);
  *(_QWORD *)(v15 + 24) ^= (*(_QWORD *)(v15 + 24) ^ (*(_QWORD *)(v15 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v11 )
  {
    v17 = v11;
    do
    {
      *v12 = 0LL;
      MiInitializePfnForOtherProcess(v13++, (__int64)a2, ContainingPageTable, 3600);
      v12 += 6;
      --v17;
    }
    while ( v17 );
  }
  MiMakeValidPte((unsigned __int64)a2, v13 - v11, 2214592516LL, v16);
  if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)a2) & 1) != 0 )
  {
    MiTransformValidPteInPlace(a2, (__int64)a2, v18, v5);
  }
  else
  {
    *a2 = v18;
    if ( MiPteInShadowRange((unsigned __int64)a2) )
      MiWritePteShadow(v19, v21, v20);
  }
  result = 1LL;
  *(_QWORD *)(v3 + 40) += MiLargePageSizes[v10];
  return result;
}
