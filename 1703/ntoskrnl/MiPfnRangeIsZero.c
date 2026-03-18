/*
 * XREFs of MiPfnRangeIsZero @ 0x14015B174
 * Callers:
 *     MiFreeUnusedPfnPages @ 0x14015A8A0 (MiFreeUnusedPfnPages.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiReleaseNonPagedResources @ 0x14015B598 (MiReleaseNonPagedResources.c)
 *     MiReturnPfnList @ 0x14015B5D8 (MiReturnPfnList.c)
 *     MiDemoteLargePage @ 0x14015B698 (MiDemoteLargePage.c)
 *     MiReplicatePteChange @ 0x140164BE0 (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x14020D3B4 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiPfnRangeIsZero(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r13
  unsigned __int64 v5; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  _KPROCESS *v8; // rdx
  __int64 v9; // r11
  unsigned int v10; // ebx
  unsigned __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // r15
  __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // r10
  __int64 v18; // r11
  _QWORD *v19; // r13
  int v20; // r8d
  __int64 v21; // rbx
  __int64 v22; // r8
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  unsigned int v26; // [rsp+28h] [rbp-E0h]
  unsigned __int64 ValidPte; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+38h] [rbp-D0h]
  __int64 v29; // [rsp+40h] [rbp-C8h]
  _QWORD *v30; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v31; // [rsp+50h] [rbp-B8h]
  int v32; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v33; // [rsp+5Ch] [rbp-ACh]
  __int64 v34; // [rsp+60h] [rbp-A8h]
  __int64 v35; // [rsp+68h] [rbp-A0h]
  __int64 v36; // [rsp+70h] [rbp-98h]
  _QWORD v37[4]; // [rsp+118h] [rbp+10h] BYREF

  memset(v37, 0, sizeof(v37));
  v4 = 0LL;
  v34 = 20LL;
  v32 = 0;
  v33 = 0;
  v35 = 0LL;
  v36 = 0LL;
  if ( a1 < a2 )
  {
    v5 = MmPfnDatabase + (MxPfnAllocation << 12);
    if ( (v5 & 0x1FFFFF) != 0 )
      v6 = ((v5 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    else
      v6 = 0LL;
    v7 = a1;
    while ( 1 )
    {
      if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v7) )
      {
        if ( v9 + ((v7 >> 18) & 0x3FFFFFF8) == v6 )
        {
          a2 = v7 & 0xFFFFFFFFFFE00000uLL;
LABEL_13:
          if ( a1 >= a2 )
            return;
          MiFlushTbList((__int64)&v32, v8);
          v10 = 0;
          v30 = 0LL;
          v26 = 0;
          v11 = a2 - 1;
          v29 = 0LL;
          v12 = 0LL;
          v28 = 0LL;
          v13 = 0LL;
          v14 = 0x7FFFFFFFF8LL;
          while ( 1 )
          {
            a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v15 = a1;
            v31 = a1;
            v11 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            if ( a1 <= v11 )
              break;
LABEL_29:
            if ( v10 == 3 && v12 )
            {
              v24 = 3LL;
              do
              {
                v12 = v12 << 25 >> 16;
                v13 = v13 << 25 >> 16;
                --v24;
              }
              while ( v24 );
              MiReplicatePteChange(v12, v13);
            }
            MiFlushTbList((__int64)&v32, (_KPROCESS *)v14);
            if ( *(_QWORD *)((char *)v37 + v4) || qword_14036CF28 == (PVOID)qword_14036CF30 )
            {
              ++v10;
              v4 += 8LL;
              v26 = v10;
              v28 = v4;
              v14 = 0x7FFFFFFFF8LL;
              if ( v10 < 4 )
                continue;
            }
            v25 = v29;
            qword_14036D148 -= v29;
            MiReturnPfnList(v30, v14);
            MiReleaseNonPagedResources(&MiSystemPartition, v25);
            return;
          }
          v16 = v28;
          while ( 2 )
          {
            ValidPte = MI_READ_PTE_LOCK_FREE(v15);
            v19 = (_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&ValidPte) >> 12) & 0xFFFFFFFFFLL)
                           - 0x58000000000LL);
            if ( !v10 )
            {
              v20 = 536870913;
              goto LABEL_21;
            }
            if ( (v18 & v19[3]) == 1 )
            {
              v20 = -1476395004;
LABEL_21:
              ValidPte = MiMakeValidPte(v15, *(_QWORD *)(v16 + v17 + 4648), v20);
              v21 = 48 * (v19[5] & 0xFFFFFFFFFLL) - 0x58000000000LL;
              MiLockPageAtDpcInline(v21);
              *(_QWORD *)(v21 + 24) ^= (*(_QWORD *)(v21 + 24) ^ (*(_QWORD *)(v21 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
              _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v23 = ValidPte;
              if ( qword_14036CF28 == (PVOID)qword_14036CF30 )
                v23 = 0LL;
              *(_QWORD *)((char *)v37 + v16) = v23;
              MI_INTERLOCKED_EXCHANGE_PTE(v15, v23, v22);
              v10 = v26;
              if ( v26 == 3 )
              {
                v13 = v15;
                if ( !v12 )
                  v12 = v15;
              }
              ++v29;
              *v19 = v30;
              v30 = v19;
              MiInsertTbFlushEntry((__int64)&v32, (__int64)(v15 << 25) >> 16, 1LL, 0);
            }
            v15 += 8LL;
            if ( v15 > v11 )
            {
              a1 = v31;
              v4 = v28;
              goto LABEL_29;
            }
            continue;
          }
        }
        if ( !(unsigned int)MiDemoteLargePage(v7, &v32) )
        {
          MiFlushTbList((__int64)&v32, v8);
          return;
        }
      }
      v7 = (v7 + 0x200000) & 0xFFFFFFFFFFE00000uLL;
      if ( v7 >= a2 )
        goto LABEL_13;
    }
  }
}
