/*
 * XREFs of MiPfnRangeIsZero @ 0x14017A9CC
 * Callers:
 *     MiFreeUnusedPfnPages @ 0x14017A360 (MiFreeUnusedPfnPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     MiFreeLargeZeroPages @ 0x140049444 (MiFreeLargeZeroPages.c)
 *     MiTransformValidPteInPlace @ 0x1400C022C (MiTransformValidPteInPlace.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1400C03C4 (MiInsertRecursiveTbFlushEntries.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiReleaseNonPagedResources @ 0x14013A6A0 (MiReleaseNonPagedResources.c)
 *     MiReplicatePteChange @ 0x14016B45C (MiReplicatePteChange.c)
 *     MiClearSystemAccessBits @ 0x14017AFF0 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14017B0D8 (MiDemoteValidLargePageOneLevel.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

void __fastcall MiPfnRangeIsZero(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r14
  __int64 v5; // r14
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  unsigned int v8; // eax
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // r12
  __int64 v12; // r9
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r13
  __int64 v15; // rcx
  unsigned __int64 v16; // r15
  signed __int64 v17; // rax
  int v18; // r9d
  __int64 v19; // rsi
  __int64 v20; // r14
  __int64 v21; // r9
  unsigned __int64 v22; // r14
  _BOOL8 v23; // rcx
  unsigned __int64 v24; // rdi
  _BOOL8 v25; // r15
  char v26; // al
  __int64 v27; // rax
  int v28; // r14d
  _QWORD *v29; // rsi
  __int64 v30; // rax
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  unsigned int v37; // [rsp+20h] [rbp-E0h]
  unsigned int v38; // [rsp+24h] [rbp-DCh]
  unsigned __int64 v39; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v40; // [rsp+30h] [rbp-D0h]
  __int64 v41; // [rsp+38h] [rbp-C8h]
  _QWORD *v42; // [rsp+40h] [rbp-C0h]
  __int64 v43; // [rsp+48h] [rbp-B8h]
  _BOOL8 v44; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v45; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v46; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v47; // [rsp+68h] [rbp-98h]
  unsigned __int64 v48; // [rsp+70h] [rbp-90h]
  __int64 v49; // [rsp+78h] [rbp-88h]
  __int64 v50; // [rsp+80h] [rbp-80h]
  unsigned __int64 v51; // [rsp+88h] [rbp-78h]
  _QWORD *v52[4]; // [rsp+90h] [rbp-70h] BYREF
  int v53; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v54; // [rsp+B4h] [rbp-4Ch]
  __int64 v55; // [rsp+B8h] [rbp-48h]
  __int64 v56; // [rsp+C0h] [rbp-40h]
  __int64 v57; // [rsp+C8h] [rbp-38h]
  _QWORD v58[4]; // [rsp+170h] [rbp+70h] BYREF

  v48 = a2;
  v47 = a1;
  v3 = a1;
  memset(v58, 0, sizeof(v58));
  memset(v52, 0, 24);
  if ( v3 >= a2 )
    return;
  v4 = MmPfnDatabase + (MxPfnAllocation << 12);
  if ( (v4 & 0x1FFFFF) != 0 )
  {
    v5 = ((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v50 = v5;
  }
  else
  {
    v5 = 0LL;
    v50 = 0LL;
  }
  v39 = 0LL;
  v6 = 0LL;
  v46 = 0LL;
  v7 = 0LL;
  do
  {
    v8 = MI_IS_PHYSICAL_ADDRESS(v3);
    v11 = v8;
    v12 = v8;
    v38 = v8;
    v37 = v8;
    if ( !v8 )
    {
      v13 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v14 = 4096LL;
      v40 = v13;
      v43 = 4096LL;
      v10 = v48 - v3;
LABEL_15:
      if ( (*(_BYTE *)v13 & 0x20) != 0 )
      {
        if ( (v14 << 9) - (v3 & ((v14 << 9) - 1)) <= v10 )
          v10 = (v14 << 9) - (v3 & ((v14 << 9) - 1));
        MiClearSystemAccessBits(v13, v10 / v14, v8, v12);
      }
      if ( (unsigned int)v11 < 4 )
      {
        v16 = v39;
        v41 = v11;
        do
        {
          v51 = v7;
          v17 = MI_READ_PTE_LOCK_FREE(v13);
          v45 = v17;
          if ( (_DWORD)v11 != v18 && (v17 & 0x20) != 0 )
          {
            _InterlockedCompareExchange64((volatile signed __int64 *)v13, v17 & 0xFFFFFFFFFFFFFFDFuLL, v17);
            KeFlushSingleTb((__int64)(v13 << 25) >> 16, 0, 1u);
          }
          v19 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v45) >> 12) & 0xFFFFFFFFFLL)
              - 0x58000000000LL;
          v42 = (_QWORD *)v19;
          v49 = 48 * (*(_QWORD *)(v19 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v20 = v49;
          MiLockPageAtDpcInline(v49);
          *(_QWORD *)(v20 + 24) ^= (*(_QWORD *)(v20 + 24) ^ (*(_QWORD *)(v20 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v14 == 4096 || (_DWORD)v11 != v37 )
          {
            v30 = 1LL;
            v28 = 2;
          }
          else
          {
            v22 = v14 >> 12;
            v23 = (_DWORD)v11 != 2;
            v44 = v23;
            if ( v14 >> 12 )
            {
              v24 = 0LL;
              v25 = v23;
              do
              {
                MiLockPageAtDpcInline(v19);
                *(_WORD *)(v19 + 32) = 0;
                *(_QWORD *)(v19 + 24) &= 0xC000000000000000uLL;
                v26 = *(_BYTE *)(v19 + 34) & 0xEF;
                *(_BYTE *)(v19 + 34) = v26;
                if ( v24 )
                  *(_BYTE *)(v19 + 34) = v26 & 0xF8;
                *(_QWORD *)(v19 + 40) ^= (MiLargePageContainingFrames[v25] ^ *(_QWORD *)(v19 + 40)) & 0xFFFFFFFFFLL;
                _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v19 += 48LL;
                ++v24;
              }
              while ( v24 < v22 );
              v13 = v40;
              v6 = v46;
              LODWORD(v11) = v38;
              v14 = v43;
              v23 = v44;
            }
            v16 = v39;
            v27 = -48LL * v22;
            v28 = v44;
            v29 = (_QWORD *)(v27 + v19);
            v30 = MiLargePageSizes[v23];
            v42 = v29;
          }
          v16 += v30;
          v39 = v16;
          if ( qword_1403CC468 == (PVOID)qword_1403CC470 )
            ValidPte = 0LL;
          else
            ValidPte = MiMakeValidPte(
                         v13,
                         *(__int64 *)((char *)&qword_1403CC468 + v41 * 8),
                         (_DWORD)v11 != 0 ? -1476395004 : 536870913,
                         v21);
          v45 = ValidPte;
          v58[v41] = ValidPte;
          MiTransformValidPteInPlace((volatile signed __int64 *)v13, v13, ValidPte, v11);
          if ( (_DWORD)v11 == 3 )
          {
            v32 = v13;
            if ( v6 )
              v32 = v6;
            v6 = v32;
            v46 = v32;
          }
          v7 = v13;
          if ( (_DWORD)v11 != 3 )
            v7 = v51;
          *v42 = v52[v28];
          v52[v28] = v42;
          if ( !(_DWORD)v11 )
            v42[2] = ZeroPte;
          if ( (*(_QWORD *)(v49 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
            break;
          ++v41;
          v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          LODWORD(v11) = v11 + 1;
          v40 = v13;
          v38 = v11;
          v39 = v16;
        }
        while ( (unsigned int)v11 < 4 );
        v5 = v50;
        v3 = v47;
      }
      if ( v14 == 4096 && (_DWORD)v11 )
      {
        do
        {
          v14 <<= 9;
          LODWORD(v11) = v11 - 1;
        }
        while ( (_DWORD)v11 );
      }
      v33 = v14 - 1;
      goto LABEL_54;
    }
    v13 = ((v3 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v40 = v13;
    if ( v13 == v5 )
      break;
    v14 = 0x200000LL;
    v43 = 0x200000LL;
    if ( v8 > 1uLL )
    {
      v15 = v8 - 1LL;
      do
      {
        v14 <<= 9;
        v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v15;
      }
      while ( v15 );
      v6 = v46;
      v12 = v8;
      v43 = v14;
      v40 = v13;
    }
    v49 = v14 - 1;
    if ( ((v14 - 1) & v3) == 0 )
    {
      v10 = v48 - v3;
      if ( v48 - v3 >= v14 )
        goto LABEL_15;
    }
    if ( (unsigned int)MiDemoteValidLargePageOneLevel(v3, v9, v10, v12) )
      continue;
    v33 = v49;
LABEL_54:
    v3 = ~v33 & (v14 + v3);
    v47 = v3;
  }
  while ( v3 < v48 );
  if ( v6 )
  {
    v34 = 3LL;
    do
    {
      v6 = (__int64)(v6 << 25) >> 16;
      v7 = (__int64)(v7 << 25) >> 16;
      --v34;
    }
    while ( v34 );
    MiReplicatePteChange(v6, v7);
    v54 = 0;
    v55 = 20LL;
    v53 = 0;
    v56 = 0LL;
    v57 = 0LL;
    while ( v6 <= v7 )
    {
      MiInsertRecursiveTbFlushEntries((__int64)&v53, 3, v6);
      v6 += 8LL;
    }
    MiFlushTbList((__int64)&v53, v35, v36);
  }
  _InterlockedExchangeAdd64(&qword_1403CC680, -(__int64)v39);
  MiFreeLargeZeroPages((int)&MiSystemPartition, v52);
  MiReleaseNonPagedResources((__int64)&MiSystemPartition, v39);
}
