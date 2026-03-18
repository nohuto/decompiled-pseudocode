/*
 * XREFs of MiDemoteValidLargePageOneLevel @ 0x14017B0D8
 * Callers:
 *     MiPfnRangeIsZero @ 0x14017A9CC (MiPfnRangeIsZero.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiInitializeColorBase @ 0x1400494D0 (MiInitializeColorBase.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiInitializePfnForOtherProcess @ 0x140071528 (MiInitializePfnForOtherProcess.c)
 *     MiGetPageTablePages @ 0x1400716C0 (MiGetPageTablePages.c)
 *     MiTransformValidPteInPlace @ 0x1400C022C (MiTransformValidPteInPlace.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiUpdateLargePageBitMap @ 0x140137090 (MiUpdateLargePageBitMap.c)
 *     MiInsertLargeTbFlushEntry @ 0x1401373A0 (MiInsertLargeTbFlushEntry.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MiDemoteValidLargePageOneLevel(unsigned __int64 a1)
{
  unsigned int v2; // r13d
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r14
  __int16 v5; // di
  unsigned __int64 v6; // rax
  __int64 v7; // r12
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v15; // r9
  unsigned __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r10
  unsigned __int64 v20; // r11
  __int64 v21; // r9
  unsigned int v22; // eax
  __int64 v23; // r8
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v33; // rcx
  __int64 v34; // [rsp+38h] [rbp-D0h] BYREF
  signed __int64 ValidPte; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD *v36; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B8h]
  __int64 v38; // [rsp+58h] [rbp-B0h]
  __int64 v39; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v40; // [rsp+68h] [rbp-A0h]
  _QWORD *v41; // [rsp+70h] [rbp-98h]
  _QWORD v42[36]; // [rsp+78h] [rbp-90h] BYREF
  int v43; // [rsp+198h] [rbp+90h] BYREF
  __int16 v44; // [rsp+19Ch] [rbp+94h]
  __int64 v45; // [rsp+1A0h] [rbp+98h]
  __int64 v46; // [rsp+1A8h] [rbp+A0h]
  __int64 v47; // [rsp+1B0h] [rbp+A8h]

  memset(v42, 0, 0x118uLL);
  v45 = 20LL;
  v43 = 0;
  v44 = 0;
  v46 = 0LL;
  v47 = 0LL;
  LODWORD(v37) = MI_IS_PHYSICAL_ADDRESS(a1);
  v2 = v37;
  v3 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v4 = 0x200000LL;
  if ( (_DWORD)v37 != 1 )
  {
    v33 = (unsigned int)(v37 - 1);
    do
    {
      v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v4 <<= 9;
      --v33;
    }
    while ( v33 );
  }
  v39 = MI_READ_PTE_LOCK_FREE(v3);
  v5 = v39;
  v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v39);
  LODWORD(v42[6]) = 4;
  v7 = (v6 >> 12) & 0xFFFFFFFFFLL;
  v42[3] = &MiSystemPartition;
  MiInitializeColorBase(a1);
  if ( (int)MiGetPageTablePages((__int64)v42, 1uLL, &v36) < 0 )
    return 0LL;
  v8 = v36;
  v41 = v36;
  *v36 = 0LL;
  v9 = (__int64)((unsigned __int128)((__int64)(v8 + 0xB000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v38 = (v9 >> 63) + v9;
  ValidPte = MI_READ_PTE_LOCK_FREE(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte);
  v12 = 2147483652LL;
  v40 = (v10 >> 12) & 0xFFFFFFFFFLL;
  if ( (v5 & 0x100) != 0 && v2 == 1 )
    v12 = 2684354564LL;
  v13 = (__int64)((v3 << 25) - (v11 << 25)) >> 16;
  ValidPte = MiMakeValidPte(v13, v7, v12, v11);
  v14 = ValidPte;
  v16 = MiMapPageInHyperSpaceWorker(v38, (unsigned __int8 *)&v34, 0x80000000, v15);
  do
  {
    *(_QWORD *)v16 = v14;
    if ( MiPteInShadowRange(v16) )
      MiWritePteShadow(v17, v14, v18);
    v16 = v19 + 8;
    v14 ^= (v14 ^ ((v14 & 0xFFFFFFFFFFFFF000uLL) + 4096)) & 0xFFFFFFFFF000LL;
    ValidPte = v14;
  }
  while ( (v16 & 0xFFF) != 0 );
  MiUnmapPageInHyperSpaceWorker(v20, v34, 0x80000000);
  v22 = -2080374780;
  if ( v2 == 1 )
    v22 = -2147483644;
  v23 = v22;
  LODWORD(v23) = v22 | 0x20000000;
  if ( (v5 & 0x100) == 0 )
    v23 = v22;
  LODWORD(v23) = v23 | 0x8000000;
  v24 = MiMakeValidPte(v3, v7, v23, v21);
  v25 = v38;
  ValidPte = v24;
  MiInitializePfnForOtherProcess(v38, v3, v40, 2560);
  v26 = (__int64)v41;
  MiLockPageAtDpcInline((__int64)v41);
  *(_QWORD *)(v26 + 24) ^= (*(_QWORD *)(v26 + 24) ^ (*(_QWORD *)(v26 + 24) + 512LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v27 = v25 & 0xFFFFFFFFFLL;
  ValidPte = (v27 << 12) | ValidPte & 0xFFFF000000000FFFuLL;
  MiTransformValidPteInPlace((volatile signed __int64 *)v3, v3, ValidPte, v2);
  if ( v2 == 3 )
    MiInsertLargeTbFlushEntry((__int64)&v43, 3u, v3);
  v28 = 48 * v7 - 0x58000000000LL;
  v29 = 512LL;
  v36 = (_QWORD *)v28;
  do
  {
    MiLockPageAtDpcInline(v28);
    *(_QWORD *)(v28 + 8) = v13;
    *(_QWORD *)(v28 + 40) = v27 | *(_QWORD *)(v28 + 40) & 0xFFFFFFF000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v13 += 8LL;
    v28 = (__int64)(v36 + 6);
    v36 += 6;
    --v29;
  }
  while ( v29 );
  if ( (_DWORD)v37 == 1 )
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v7, v4 >> 12, 0, 1);
  MiFlushTbList((__int64)&v43, v30, v31);
  return 1LL;
}
