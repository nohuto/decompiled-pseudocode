/*
 * XREFs of ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140058180
 * Callers:
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140054D9C (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StNpLeafPageOut@?$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z @ 0x14024CCC0 (-StNpLeafPageOut@-$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x14001C160 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 *     ?StDmpDummyPageRecordAllocate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14003CAF0 (-StDmpDummyPageRecordAllocate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140054934 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     RtlCompressBuffer @ 0x140057940 (RtlCompressBuffer.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14005859C (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140059904 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     SmHpChunkAlloc @ 0x140059BEC (SmHpChunkAlloc.c)
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x140059DEC (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 *     SmHpChunkFree @ 0x14005C1EC (SmHpChunkFree.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     RtlComputeCrc32 @ 0x140134030 (RtlComputeCrc32.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ?StDmpCurrentRegionWrite@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14024C7E0 (-StDmpCurrentRegionWrite@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     SmCrAuthEncrypt @ 0x14024FCDC (SmCrAuthEncrypt.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageAdd(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 v6; // r12
  unsigned int v7; // edx
  int v8; // ecx
  __int64 v9; // r14
  char v10; // bl
  int Space; // esi
  __int64 v12; // r15
  ULONG_PTR v13; // r15
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  BOOL v16; // r12d
  unsigned int v17; // r8d
  bool v18; // zf
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  _KLOCK_ENTRY *v22; // rsi
  unsigned __int8 v23; // al
  __int16 v24; // ax
  __int64 v25; // rax
  _OWORD *v26; // rsi
  UCHAR *v27; // r15
  ULONG v28; // edx
  int v29; // r12d
  unsigned int v30; // r13d
  __int64 v31; // rax
  ULONG v32; // ecx
  __int64 v33; // rax
  __int64 v34; // rax
  int v36; // eax
  __int64 v37; // rcx
  _OWORD *v38; // rax
  __int128 v39; // xmm1
  UCHAR *v40; // r12
  unsigned int v41; // ecx
  int v42; // ecx
  __int64 v43; // r9
  __int64 v44; // rcx
  ULONG v45; // eax
  ULONG Length; // [rsp+40h] [rbp-49h] BYREF
  int v47; // [rsp+44h] [rbp-45h] BYREF
  int v48; // [rsp+48h] [rbp-41h] BYREF
  ULONG *v49; // [rsp+50h] [rbp-39h]
  int *v50; // [rsp+58h] [rbp-31h]
  __int64 v51; // [rsp+60h] [rbp-29h]
  ULONG *v52; // [rsp+68h] [rbp-21h] BYREF
  unsigned int *v53; // [rsp+70h] [rbp-19h]
  unsigned __int8 v54[8]; // [rsp+78h] [rbp-11h] BYREF
  __int64 v55; // [rsp+80h] [rbp-9h] BYREF
  int v56; // [rsp+88h] [rbp-1h]

  v50 = (int *)a2;
  v51 = a3;
  v6 = a3;
  v7 = *(_DWORD *)a2 & 7;
  v8 = (unsigned __int8)*(_DWORD *)(a1 + 776);
  v53 = a4;
  v9 = 0LL;
  v10 = 0;
  if ( (v8 != 0 ? 0 : 7) < v7 )
    v7 = v8 != 0 ? 0 : 7;
  Space = ST_STORE<SM_TRAITS>::StDmpSinglePageFindSpace(a1, v7, *a4, (unsigned int)&v52, (__int64)&v48);
  if ( Space < 0 )
    goto LABEL_41;
  v12 = *(_QWORD *)(a1 + 800);
  if ( (*(_BYTE *)(v12 + 5989) & 4) != 0 )
  {
    v13 = v12 + 5992;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    v47 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v13) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --CurrentThread->SpecialApcDisable;
    v16 = ++CurrentThread->AbAllocationRegionCount == 1;
    v17 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v18 = !_BitScanReverse((unsigned int *)&v19, v17);
      LODWORD(v49) = v19;
      if ( v18 )
        break;
      v20 = 1 << v19;
      v21 = v19;
      v22 = &CurrentThread->LockEntries[v21];
      v17 &= ~v20;
      if ( (v22->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v22->LockState.0 & 1) == 0
        && (*(_QWORD *)&v22->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v13 & 0x7FFFFFFFFFFFFFFCLL)
        && v22->LockState.SessionId == (_DWORD)SessionId )
      {
        v22->AcquiredByte &= ~1u;
        if ( v22->LockState.0 )
        {
          if ( v22 )
          {
            v22->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v22->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v21].TreeNode, SessionId);
            v47 = 0;
            v47 = v22->BoostBitmap.AllFields & 0x1FFFF;
            v22->BoostBitmap.AllFields &= 0xFFFE0000;
            v22->ThreadLocalFlags &= ~1u;
            v22->LockState.0 = 0LL;
            v23 = 1 << (((char *)v22 - (char *)CurrentThread - 800) / 96);
            if ( v16 )
              CurrentThread->AbEntrySummary |= v23;
            else
              _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v23);
            goto LABEL_21;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v13, (unsigned int)SessionId, 0LL);
LABEL_21:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(CurrentThread, v13, &v47);
    v24 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v24;
    if ( !v24
      && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    v6 = v51;
  }
  v25 = *(unsigned int *)(a1 + 824);
  v10 = 1;
  v26 = *(_OWORD **)(a2 + 8);
  v49 = v52;
  v27 = (UCHAR *)v52 + v25;
  if ( *(int *)a2 < 0 )
  {
    v28 = *(_DWORD *)(*(_QWORD *)(v6 + 16) + 40LL);
LABEL_27:
    Length = v28;
    goto LABEL_28;
  }
  v36 = *(_DWORD *)(a1 + 776);
  if ( (v36 & 0x400) != 0 )
  {
    v28 = 4096;
    goto LABEL_27;
  }
  if ( (v36 & 0x8000) != 0 )
  {
    v37 = 32LL;
    v38 = (_OWORD *)(*(_QWORD *)(a1 + 1768) + 4096LL);
    do
    {
      *v38 = *v26;
      v38[1] = v26[1];
      v38[2] = v26[2];
      v38[3] = v26[3];
      v38[4] = v26[4];
      v38[5] = v26[5];
      v38[6] = v26[6];
      v38 += 8;
      v39 = v26[7];
      v26 += 8;
      *(v38 - 1) = v39;
      --v37;
    }
    while ( v37 );
    v26 = (_OWORD *)(*(_QWORD *)(a1 + 1768) + 4096LL);
  }
  v28 = 0;
  Length = 0;
LABEL_28:
  v29 = v48;
  v30 = *(_DWORD *)(a1 + 816) - (v48 & *(_DWORD *)(a1 + 808));
  if ( *v50 < 0 )
  {
    memmove(v27, v26, v28);
  }
  else
  {
    if ( v30 >= *(_DWORD *)(a1 + 820) )
      v40 = v27;
    else
      v40 = *(UCHAR **)(a1 + 1768);
    if ( !v28 )
    {
      if ( RtlCompressBuffer(
             *(_WORD *)(a1 + 976),
             (PUCHAR)v26,
             0x1000u,
             v40,
             0x1000u,
             0x1000u,
             &Length,
             *(PVOID *)(a1 + 896)) >= 0 )
      {
        v28 = Length;
      }
      else
      {
        v28 = 4096;
        Length = 4096;
      }
    }
    if ( v40 != v27 )
    {
      v41 = (v28 + *(_DWORD *)(a1 + 824) + 15) >> 4;
      *v53 = v41;
      if ( v41 > v30 )
      {
        Space = -1073741267;
        goto LABEL_41;
      }
    }
    if ( v28 > 0xFF0 )
    {
      if ( (*(_DWORD *)(a1 + 776) & 0x200) != 0 )
      {
        Space = -1073740762;
        goto LABEL_41;
      }
      v28 = 4096;
      v40 = (UCHAR *)v26;
      Length = 4096;
    }
    if ( v40 != v27 )
      memmove(v27, v40, v28);
    v29 = v48;
  }
  if ( *(_QWORD *)(a1 + 760) || (Space = ST_STORE<SM_TRAITS>::StDmpDummyPageRecordAllocate(a1), Space >= 0) )
  {
    v10 = 0;
    SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
    v31 = SmHpChunkAlloc(a1 + 192);
    v9 = v31;
    if ( !v31 )
    {
      Space = -1073741670;
      goto LABEL_41;
    }
    ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, v31);
    *(_QWORD *)v9 = 0LL;
    *(_DWORD *)(v9 + 8) = 0;
    *(_DWORD *)v9 = v29;
    v32 = Length;
    if ( Length < 0x1000 )
    {
      *(_DWORD *)(v9 + 4) ^= ((unsigned __int16)Length ^ (unsigned __int16)*(_DWORD *)(v9 + 4)) & 0xFFF;
      v32 = Length;
    }
    if ( *v50 >= 0 )
    {
      MetroHash64::Hash(v27, v32, v54);
      LODWORD(v33) = *(_DWORD *)v54;
    }
    else
    {
      v33 = *(_QWORD *)(v51 + 96);
    }
    *(_DWORD *)(v9 + 8) = v33;
    v34 = *(_QWORD *)(a1 + 1000);
    if ( *(_DWORD *)(v34 + 24) )
    {
      v42 = *(_DWORD *)(v34 + 8);
      ++*(_QWORD *)(a1 + 1008);
      v43 = ~(v42 - 1) & (v42 + Length - 1);
      *(_DWORD *)(v9 + 12) = *(_DWORD *)(a1 + 1008);
      *(_WORD *)(v9 + 6) = *(_WORD *)(a1 + 1012);
      v44 = *(_QWORD *)(a1 + 1000);
      v56 = 0;
      v55 = Length;
      HIDWORD(v55) = *(_DWORD *)(v9 + 12);
      v56 = *(unsigned __int16 *)(v9 + 6);
      if ( (int)SmCrAuthEncrypt(v44, v27, v27, v43, &v55) < 0 )
      {
        Space = -1073741174;
        goto LABEL_41;
      }
    }
    else if ( (unsigned __int8)*(_DWORD *)(a1 + 776) )
    {
      v45 = RtlComputeCrc32(0, v27, Length);
      *v49 = v45;
    }
    Space = ST_STORE<SM_TRAITS>::StDmpSinglePageInsert((struct NP_CONTEXT::NP_CTX *)a1);
    if ( Space >= 0 )
    {
      v9 = 0LL;
      Space = 0;
    }
  }
LABEL_41:
  if ( (v10 & 1) != 0 )
    SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
  if ( v9 )
    SmHpChunkFree(a1 + 192);
  return (unsigned int)Space;
}
