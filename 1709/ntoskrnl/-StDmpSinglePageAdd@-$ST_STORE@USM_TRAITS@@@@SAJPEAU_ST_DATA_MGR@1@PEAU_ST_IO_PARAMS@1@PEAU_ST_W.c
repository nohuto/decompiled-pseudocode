/*
 * XREFs of ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14026F410
 * Callers:
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14026D96C (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StNpLeafPageOut@?$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z @ 0x140270BE0 (-StNpLeafPageOut@-$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140006F34 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     RtlCompressBuffer @ 0x1401017E0 (RtlCompressBuffer.c)
 *     RtlComputeCrc32 @ 0x140113980 (RtlComputeCrc32.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x14025D7A4 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14026DD58 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     ?StDmpDummyPageRecordAllocate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14026F38C (-StDmpDummyPageRecordAllocate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x14026F9F8 (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14026FB00 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     SmHpChunkAlloc @ 0x1402720E4 (SmHpChunkAlloc.c)
 *     SmHpChunkFree @ 0x140272174 (SmHpChunkFree.c)
 *     SmCrAuthEncrypt @ 0x140276344 (SmCrAuthEncrypt.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageAdd(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 v5; // r13
  __int64 v7; // r14
  int v8; // ebx
  int v9; // r8d
  unsigned int v10; // edx
  int Space; // esi
  __int64 v12; // r15
  unsigned __int64 v13; // r15
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v16; // r13
  unsigned int v17; // r8d
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rdx
  unsigned __int8 v22; // al
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rsi
  UCHAR *v26; // r15
  ULONG v27; // edx
  int v28; // eax
  __int64 v29; // rcx
  _OWORD *v30; // rax
  __int128 v31; // xmm1
  int v32; // r12d
  unsigned int v33; // r13d
  UCHAR *v34; // r12
  unsigned int v35; // ecx
  __int64 v36; // rax
  ULONG v37; // eax
  int *v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // ecx
  ULONG v42; // r9d
  int v43; // eax
  __int64 v44; // rcx
  ULONG v45; // eax
  ULONG Length; // [rsp+40h] [rbp-49h] BYREF
  int v48; // [rsp+44h] [rbp-45h] BYREF
  ULONG_PTR v49; // [rsp+48h] [rbp-41h] BYREF
  ULONG *v50; // [rsp+50h] [rbp-39h]
  int *v51; // [rsp+58h] [rbp-31h]
  __int64 v52; // [rsp+60h] [rbp-29h]
  ULONG *v53; // [rsp+68h] [rbp-21h] BYREF
  unsigned int *v54; // [rsp+70h] [rbp-19h]
  unsigned __int8 v55[8]; // [rsp+78h] [rbp-11h] BYREF
  __int64 v56; // [rsp+80h] [rbp-9h] BYREF
  int v57; // [rsp+88h] [rbp-1h]

  v52 = a3;
  v5 = a3;
  v51 = (int *)a2;
  v7 = 0LL;
  v8 = 0;
  v9 = (unsigned __int8)*(_DWORD *)(a1 + 776);
  v10 = *(_DWORD *)a2 & 7;
  v54 = a4;
  if ( (v9 == 0 ? 7 : 0) < v10 )
    v10 = v9 == 0 ? 7 : 0;
  Space = ST_STORE<SM_TRAITS>::StDmpSinglePageFindSpace(a1, v10, *a4, (unsigned int)&v53, (__int64)&v49);
  if ( Space >= 0 )
  {
    v12 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v12 + 6021) & 4) != 0 )
    {
      v13 = v12 + 6024;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v13);
      v48 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v13) == 1 )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v16 = ++CurrentThread->AbAllocationRegionCount;
      v17 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v18 = !_BitScanReverse((unsigned int *)&v19, v17);
        LODWORD(v50) = v19;
        if ( v18 )
          break;
        v20 = (__int64)&CurrentThread->LockEntries[v19];
        v17 &= ~(1 << v19);
        if ( (*(_BYTE *)(v20 + 26) & 1) != 0
          && (*(_DWORD *)(v20 + 32) & 1) == 0
          && (*(_QWORD *)(v20 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v13 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v20 + 40) == SessionId )
        {
          *(_BYTE *)(v20 + 26) &= ~1u;
          if ( *(_QWORD *)(v20 + 32) )
          {
            if ( v20 )
            {
              *(_BYTE *)(v20 + 32) |= 2u;
              if ( *(__int64 *)(v20 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v20);
              v48 = 0;
              v48 = *(_DWORD *)(v20 + 88) & 0x1FFFF;
              *(_DWORD *)(v20 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v20 + 25) &= ~1u;
              *(_QWORD *)(v20 + 32) = 0LL;
              v21 = (unsigned __int128)((v20 - (__int64)CurrentThread - 800) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
              v22 = 1 << ((v21 < 0) + (v21 >> 4));
              if ( v16 == 1 )
                CurrentThread->AbEntrySummary |= v22;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v22);
              goto LABEL_23;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v13, SessionId, 0LL);
LABEL_23:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v13, (unsigned int *)&v48);
      v18 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v18
        && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v23);
      }
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      v5 = v52;
    }
    v8 = 1;
    v24 = *(unsigned int *)(a1 + 824);
    v25 = *(_QWORD *)(a2 + 8);
    v50 = v53;
    v26 = (UCHAR *)v53 + v24;
    if ( *(int *)a2 >= 0 )
    {
      v28 = *(_DWORD *)(a1 + 776);
      if ( (v28 & 0x400) != 0 )
      {
        v27 = 4096;
      }
      else
      {
        if ( (v28 & 0x8000) != 0 )
        {
          v29 = 32LL;
          v30 = (_OWORD *)(*(_QWORD *)(a1 + 1784) + 4096LL);
          do
          {
            *v30 = *(_OWORD *)v25;
            v30[1] = *(_OWORD *)(v25 + 16);
            v30[2] = *(_OWORD *)(v25 + 32);
            v30[3] = *(_OWORD *)(v25 + 48);
            v30[4] = *(_OWORD *)(v25 + 64);
            v30[5] = *(_OWORD *)(v25 + 80);
            v30[6] = *(_OWORD *)(v25 + 96);
            v30 += 8;
            v31 = *(_OWORD *)(v25 + 112);
            v25 += 128LL;
            *(v30 - 1) = v31;
            --v29;
          }
          while ( v29 );
          v25 = *(_QWORD *)(a1 + 1784) + 4096LL;
        }
        v27 = 0;
      }
    }
    else
    {
      v27 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 40LL);
    }
    v32 = v49;
    v33 = *(_DWORD *)(a1 + 816) - (v49 & *(_DWORD *)(a1 + 808));
    Length = v27;
    if ( *v51 >= 0 )
    {
      if ( v33 >= *(_DWORD *)(a1 + 820) )
        v34 = v26;
      else
        v34 = *(UCHAR **)(a1 + 1784);
      if ( !v27 )
      {
        if ( RtlCompressBuffer(
               *(_WORD *)(a1 + 992),
               (PUCHAR)v25,
               0x1000u,
               v34,
               0x1000u,
               0x1000u,
               &Length,
               *(PVOID *)(a1 + 896)) >= 0 )
        {
          v27 = Length;
        }
        else
        {
          v27 = 4096;
          Length = 4096;
        }
      }
      if ( v34 != v26 )
      {
        v35 = (v27 + *(_DWORD *)(a1 + 824) + 15) >> 4;
        *v54 = v35;
        if ( v35 > v33 )
        {
          Space = -1073741267;
          goto LABEL_74;
        }
      }
      if ( v27 > 0xFF0 )
      {
        if ( (*(_DWORD *)(a1 + 776) & 0x200) != 0 )
        {
          Space = -1073740762;
          goto LABEL_74;
        }
        v27 = 4096;
        v34 = (UCHAR *)v25;
        Length = 4096;
      }
      if ( v34 != v26 )
        memmove(v26, v34, v27);
      v32 = v49;
    }
    else
    {
      memmove(v26, (const void *)v25, v27);
    }
    if ( *(_QWORD *)(a1 + 760) || (Space = ST_STORE<SM_TRAITS>::StDmpDummyPageRecordAllocate(a1), Space >= 0) )
    {
      v8 = 0;
      SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
      v36 = SmHpChunkAlloc(a1 + 192);
      v7 = v36;
      if ( !v36 )
      {
        Space = -1073741670;
        goto LABEL_74;
      }
      ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, v36);
      *(_QWORD *)v7 = 0LL;
      *(_DWORD *)(v7 + 8) = 0;
      *(_DWORD *)v7 = v32;
      v37 = Length;
      if ( Length < 0x1000 )
      {
        *(_DWORD *)(v7 + 4) ^= (*(_DWORD *)(v7 + 4) ^ Length) & 0xFFF;
        v37 = Length;
      }
      v38 = v51;
      if ( *v51 >= 0 )
      {
        MetroHash64::Hash(v26, v37, v55);
        LODWORD(v39) = *(_DWORD *)v55;
      }
      else
      {
        v39 = *(_QWORD *)(v52 + 96);
      }
      *(_DWORD *)(v7 + 8) = v39;
      v40 = *(_QWORD *)(a1 + 1016);
      if ( *(_DWORD *)(v40 + 24) )
      {
        v41 = *(_DWORD *)(v40 + 8);
        v42 = v41 + Length - 1;
        ++*(_QWORD *)(a1 + 1024);
        v43 = ~(v41 - 1);
        *(_DWORD *)(v7 + 12) = *(_DWORD *)(a1 + 1024);
        *(_WORD *)(v7 + 6) = *(_WORD *)(a1 + 1028);
        v57 = 0;
        v56 = Length;
        HIDWORD(v56) = *(_DWORD *)(v7 + 12);
        v44 = *(_QWORD *)(a1 + 1016);
        v57 = *(unsigned __int16 *)(v7 + 6);
        if ( (int)SmCrAuthEncrypt(v44, v26, v26, v43 & v42, &v56) < 0 )
        {
          Space = -1073741174;
          goto LABEL_74;
        }
      }
      else if ( (unsigned __int8)*(_DWORD *)(a1 + 776) )
      {
        v45 = RtlComputeCrc32(0, v26, Length);
        *v50 = v45;
      }
      Space = ST_STORE<SM_TRAITS>::StDmpSinglePageInsert(a1, v38, v7);
      if ( Space >= 0 )
      {
        v7 = 0LL;
        Space = 0;
      }
    }
  }
LABEL_74:
  if ( v8 )
    SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
  if ( v7 )
    SmHpChunkFree(a1 + 192);
  return (unsigned int)Space;
}
