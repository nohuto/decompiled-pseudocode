/*
 * XREFs of MiPfnRangeIsZero @ 0x140144C40
 * Callers:
 *     MiFreeUnusedPfnPages @ 0x140144320 (MiFreeUnusedPfnPages.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiFreeLargeZeroPages @ 0x1400C5300 (MiFreeLargeZeroPages.c)
 *     MiReleaseNonPagedResources @ 0x1400CF13C (MiReleaseNonPagedResources.c)
 *     MiInsertLargeTbFlushEntry @ 0x140110068 (MiInsertLargeTbFlushEntry.c)
 *     MiDemoteLargePageOneLevel @ 0x140145244 (MiDemoteLargePageOneLevel.c)
 *     MiReplicatePteChange @ 0x140152B20 (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140214414 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

void __fastcall MiPfnRangeIsZero(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rdi
  __int64 v5; // rdi
  unsigned __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // r13
  unsigned int v9; // eax
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r15
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 PteShadow; // rax
  __int64 v17; // r12
  __int64 v18; // r14
  BOOL v19; // ecx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r13
  __int64 v22; // rax
  unsigned __int64 ValidPte; // rax
  __int64 v24; // r11
  _QWORD *v25; // rax
  bool v26; // zf
  __int64 v27; // r15
  unsigned int v28; // [rsp+28h] [rbp-E0h]
  unsigned int v29; // [rsp+2Ch] [rbp-DCh]
  int v30; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v31; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v32; // [rsp+40h] [rbp-C8h]
  __int64 v33; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v34; // [rsp+50h] [rbp-B8h]
  __int64 v35; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v36; // [rsp+60h] [rbp-A8h]
  __int64 v37; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v38; // [rsp+70h] [rbp-98h]
  __int64 v39; // [rsp+78h] [rbp-90h]
  __int64 v40; // [rsp+80h] [rbp-88h]
  _QWORD v42[3]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD *v43[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v44; // [rsp+C8h] [rbp-40h] BYREF
  __int16 v45; // [rsp+CCh] [rbp-3Ch]
  __int64 v46; // [rsp+D0h] [rbp-38h]
  __int64 v47; // [rsp+D8h] [rbp-30h]
  __int64 v48; // [rsp+E0h] [rbp-28h]
  _QWORD v49[4]; // [rsp+188h] [rbp+80h] BYREF

  v36 = a1;
  v3 = a1;
  memset(v49, 0, sizeof(v49));
  v46 = 20LL;
  v44 = 0;
  memset(v43, 0, 24);
  v45 = 0;
  v47 = 0LL;
  v48 = 0LL;
  if ( v3 >= a2 )
    return;
  v4 = MmPfnDatabase + (MxPfnAllocation << 12);
  if ( (v4 & 0x1FFFFF) != 0 )
  {
    v5 = ((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v40 = v5;
  }
  else
  {
    v5 = 0LL;
    v40 = 0LL;
  }
  v6 = 0LL;
  v31 = 0LL;
  v7 = 0LL;
  v39 = 0LL;
  v8 = 0LL;
  v34 = 0LL;
  do
  {
    v9 = MI_IS_PHYSICAL_ADDRESS(v3);
    v11 = v9;
    v29 = v9;
    if ( !v9 )
    {
      v13 = 4096LL;
      v33 = 4096LL;
      LODWORD(v11) = 0;
      v29 = 0;
      v12 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v32 = v12;
LABEL_18:
      v10 = (unsigned int)v11;
      v28 = v11;
      if ( (unsigned int)v11 < 4 )
      {
        v15 = v29;
        v35 = 8LL * (unsigned int)v11;
        do
        {
          PteShadow = *(_QWORD *)v12;
          if ( v12 >= 0xFFFFF6FB7DBED000uLL && v12 <= 0xFFFFF6FB7DBED7F8uLL )
            PteShadow = MiReadPteShadow(v12, *(_QWORD *)v12);
          v42[0] = PteShadow;
          v17 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(v42) - 0x58000000000LL;
          v18 = 48 * (*(_QWORD *)(v17 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          MiLockPageAtDpcInline(v18);
          *(_QWORD *)(v18 + 24) ^= (*(_QWORD *)(v18 + 24) ^ (*(_QWORD *)(v18 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v13 == 4096 || v28 != v15 )
          {
            v30 = 2;
            MiInsertTbFlushEntry(&v44, (__int64)(v12 << 25) >> 16, 1LL, 0);
            v22 = 1LL;
          }
          else
          {
            v19 = v28 != 2;
            v20 = v13 >> 12;
            v30 = v19;
            v38 = v13 >> 12;
            if ( v13 >> 12 )
            {
              v21 = 0LL;
              v42[2] = v28 != 2;
              do
              {
                MiLockPageAtDpcInline(v17);
                *(_WORD *)(v17 + 32) = 0;
                *(_QWORD *)(v17 + 24) &= 0xC000000000000000uLL;
                *(_BYTE *)(v17 + 34) &= ~0x10u;
                if ( v21 )
                  *(_BYTE *)(v17 + 34) &= 0xF8u;
                *(_QWORD *)(v17 + 40) ^= (MiLargePageContainingFrames[v28 != 2] ^ *(_QWORD *)(v17 + 40)) & 0xFFFFFFFFFLL;
                _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v17 += 48LL;
                ++v21;
              }
              while ( v21 < v38 );
              v12 = v32;
              v7 = v39;
              v13 = v33;
              v8 = v34;
              v15 = v29;
              v20 = v38;
              v19 = v28 != 2;
            }
            v17 += -48LL * v20;
            v37 = MiLargePageSizes[v19];
            MiInsertLargeTbFlushEntry(&v44, v28, v12);
            v22 = v37;
          }
          v31 += v22;
          if ( qword_1403891E8 == (PVOID)qword_1403891F0 )
            ValidPte = 0LL;
          else
            ValidPte = MiMakeValidPte(
                         v12,
                         *(__int64 *)((char *)&qword_1403891E8 + v35),
                         v28 != 0 ? -1476395004 : 536870913);
          *(_QWORD *)((char *)v49 + v35) = ValidPte;
          MI_INTERLOCKED_EXCHANGE_PTE(v12);
          v10 = v28;
          if ( v28 == 3 )
          {
            v34 = v12;
            v8 = v12;
            if ( !v7 )
              v7 = v12;
            v39 = v7;
          }
          v25 = v43[v30];
          v43[v30] = (_QWORD *)v17;
          *(_QWORD *)v17 = v25;
          if ( !v28 )
            *(_QWORD *)(v17 + 16) = 0LL;
          if ( (*(_QWORD *)(v18 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
            break;
          v12 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v10 = v28 + 1;
          v32 = v12;
          v28 = v10;
          v35 = v24 + 8;
        }
        while ( (unsigned int)v10 < 4 );
        v5 = v40;
        v3 = v36;
      }
      if ( v13 == 4096 && (_DWORD)v10 )
      {
        do
        {
          v13 <<= 9;
          v26 = (_DWORD)v10 == 1;
          v10 = (unsigned int)(v10 - 1);
        }
        while ( !v26 );
      }
      v3 = ~(v13 - 1) & (v13 + v3);
      goto LABEL_49;
    }
    v12 = ((v3 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v32 = v12;
    if ( v12 == v5 )
      break;
    v13 = 0x200000LL;
    v33 = 0x200000LL;
    if ( v9 > 1uLL )
    {
      v14 = v9 - 1LL;
      do
      {
        v13 <<= 9;
        v12 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v14;
      }
      while ( v14 );
      v8 = v34;
      v11 = v9;
      v33 = v13;
      v32 = v12;
    }
    if ( ((v13 - 1) & v3) == 0 && a2 - v3 >= v13 )
      goto LABEL_18;
    if ( (unsigned int)MiDemoteLargePageOneLevel(v3, &v44, v11) )
    {
      MiFlushTbList((__int64)&v44, (_KPROCESS *)v10);
      goto LABEL_50;
    }
    v3 = ~(v13 - 1) & (v13 + v3);
LABEL_49:
    v36 = v3;
LABEL_50:
    v6 = v31;
  }
  while ( v3 < a2 );
  if ( v7 )
  {
    v27 = 3LL;
    do
    {
      v7 = v7 << 25 >> 16;
      v8 = v8 << 25 >> 16;
      --v27;
    }
    while ( v27 );
    MiReplicatePteChange(v7, v8);
  }
  MiFlushTbList((__int64)&v44, (_KPROCESS *)v10);
  qword_140389408 -= v6;
  MiFreeLargeZeroPages((__int64)&MiSystemPartition, v43);
  MiReleaseNonPagedResources((__int64)&MiSystemPartition, v6);
}
