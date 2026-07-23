/*
 * XREFs of ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14009224C
 * Callers:
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1400915EC (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StNpLeafPageOut@?$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z @ 0x1402A61E0 (-StNpLeafPageOut@-$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140091184 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     RtlCompressBuffer @ 0x1400919B0 (RtlCompressBuffer.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14009263C (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140093C04 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     SmHpChunkAlloc @ 0x140093D74 (SmHpChunkAlloc.c)
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x140093F78 (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 *     SmHpChunkFree @ 0x140095B48 (SmHpChunkFree.c)
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x1400AE6F0 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 *     ?StDmpDummyPageRecordAllocate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1400D27C0 (-StDmpDummyPageRecordAllocate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     RtlComputeCrc32 @ 0x140147C40 (RtlComputeCrc32.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     SmCrAuthEncrypt @ 0x1402A93D0 (SmCrAuthEncrypt.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageAdd(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  int v4; // eax
  __int64 v7; // r14
  unsigned int v8; // edx
  int v9; // ebx
  __int64 v10; // r12
  __int64 v11; // rdx
  int Space; // esi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r15
  ULONG_PTR v16; // r15
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v19; // r12
  unsigned int v20; // r8d
  bool v21; // zf
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  _KLOCK_ENTRY *v25; // rsi
  unsigned __int8 v26; // al
  UCHAR *v27; // r15
  int v28; // ecx
  __int64 v29; // rsi
  ULONG v30; // edx
  int v31; // r13d
  unsigned int v32; // r8d
  __int64 v33; // rax
  unsigned __int64 v34; // r9
  ULONG v35; // eax
  int *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  int v40; // eax
  __int64 v41; // rcx
  _OWORD *v42; // rax
  __int128 v43; // xmm1
  UCHAR *v44; // r13
  unsigned int v45; // ecx
  int v46; // ecx
  ULONG v47; // r9d
  __int64 v48; // r9
  __int64 v49; // rcx
  ULONG v50; // eax
  ULONG Length; // [rsp+40h] [rbp-39h] BYREF
  int v52; // [rsp+44h] [rbp-35h] BYREF
  int v53; // [rsp+48h] [rbp-31h] BYREF
  unsigned int v54; // [rsp+4Ch] [rbp-2Dh]
  ULONG *v55; // [rsp+50h] [rbp-29h] BYREF
  __int64 v56; // [rsp+58h] [rbp-21h]
  unsigned int *v57; // [rsp+60h] [rbp-19h]
  int *v58; // [rsp+68h] [rbp-11h]
  unsigned __int8 v59[8]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v60; // [rsp+78h] [rbp-1h] BYREF
  int v61; // [rsp+80h] [rbp+7h]

  v4 = *(_DWORD *)(a1 + 776);
  v58 = (int *)a2;
  v7 = 0LL;
  v8 = *(_DWORD *)a2 & 7;
  v56 = a3;
  v9 = 0;
  v57 = a4;
  v10 = a3;
  if ( ((unsigned __int8)v4 == 0 ? 7 : 0) < v8 )
    v8 = (unsigned __int8)v4 == 0 ? 7 : 0;
  Space = ST_STORE<SM_TRAITS>::StDmpSinglePageFindSpace(a1, v8, *a4, (unsigned int)&v55, (__int64)&v53);
  if ( Space >= 0 )
  {
    v15 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v15 + 6021) & 4) != 0 )
    {
      v16 = v15 + 6024;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v16, v11, v13, v14);
      v52 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v16) == 1 )
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      --CurrentThread->SpecialApcDisable;
      v19 = ++CurrentThread->AbAllocationRegionCount;
      v20 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v21 = !_BitScanReverse((unsigned int *)&v22, v20);
        v54 = v22;
        if ( v21 )
          break;
        v23 = 1 << v22;
        v24 = v22;
        v25 = &CurrentThread->LockEntries[v24];
        v20 &= ~v23;
        if ( (v25->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v25->LockState.0 & 1) == 0
          && (*(_QWORD *)&v25->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v16 & 0x7FFFFFFFFFFFFFFCLL)
          && v25->LockState.SessionId == SessionId )
        {
          v25->AcquiredByte &= ~1u;
          if ( v25->LockState.0 )
          {
            if ( v25 )
            {
              v25->CrossThreadReleasableAndBusyByte |= 2u;
              if ( (__int64)v25->LockState.LockState < 0 )
                KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v24].TreeNode);
              v52 = 0;
              v52 = v25->BoostBitmap.AllFields & 0x1FFFF;
              v25->BoostBitmap.AllFields &= 0xFFFE0000;
              v25->ThreadLocalFlags &= ~1u;
              v25->LockState.0 = 0LL;
              v26 = 1 << (((char *)v25 - (char *)CurrentThread - 800) / 96);
              if ( v19 == 1 )
                CurrentThread->AbEntrySummary |= v26;
              else
                _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v26);
              goto LABEL_21;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v16, SessionId, 0LL);
LABEL_21:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(CurrentThread, v16, &v52);
      v21 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v21
        && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      v10 = v56;
    }
    v9 = 1;
    v27 = (UCHAR *)v55 + *(unsigned int *)(a1 + 824);
    v28 = *(_DWORD *)a2;
    v29 = *(_QWORD *)(a2 + 8);
    if ( *(int *)a2 >= 0 )
    {
      v40 = *(_DWORD *)(a1 + 776);
      if ( (v40 & 0x400) != 0 )
      {
        v30 = 4096;
      }
      else
      {
        if ( (v40 & 0x8000) != 0 )
        {
          v41 = 32LL;
          v42 = (_OWORD *)(*(_QWORD *)(a1 + 1784) + 4096LL);
          do
          {
            *v42 = *(_OWORD *)v29;
            v42[1] = *(_OWORD *)(v29 + 16);
            v42[2] = *(_OWORD *)(v29 + 32);
            v42[3] = *(_OWORD *)(v29 + 48);
            v42[4] = *(_OWORD *)(v29 + 64);
            v42[5] = *(_OWORD *)(v29 + 80);
            v42[6] = *(_OWORD *)(v29 + 96);
            v42 += 8;
            v43 = *(_OWORD *)(v29 + 112);
            v29 += 128LL;
            *(v42 - 1) = v43;
            --v41;
          }
          while ( v41 );
          v29 = *(_QWORD *)(a1 + 1784) + 4096LL;
        }
        v28 = *(_DWORD *)a2;
        v30 = 0;
      }
    }
    else
    {
      v30 = *(_DWORD *)(*(_QWORD *)(v10 + 16) + 40LL);
    }
    v31 = v53;
    v32 = *(_DWORD *)(a1 + 816) - (v53 & *(_DWORD *)(a1 + 808));
    Length = v30;
    v54 = v32;
    if ( v28 >= 0 )
    {
      if ( v32 >= *(_DWORD *)(a1 + 820) )
        v44 = v27;
      else
        v44 = *(UCHAR **)(a1 + 1784);
      if ( !v30 )
      {
        if ( RtlCompressBuffer(
               *(_WORD *)(a1 + 992),
               (PUCHAR)v29,
               0x1000u,
               v44,
               0x1000u,
               0x1000u,
               &Length,
               *(PVOID *)(a1 + 896)) >= 0 )
        {
          v30 = Length;
        }
        else
        {
          v30 = 4096;
          Length = 4096;
        }
        v32 = v54;
      }
      if ( v44 != v27 )
      {
        v45 = (v30 + *(_DWORD *)(a1 + 824) + 15) >> 4;
        *v57 = v45;
        if ( v45 > v32 )
        {
          Space = -1073741267;
          goto LABEL_40;
        }
      }
      if ( v30 > 0xFF0 )
      {
        if ( (*(_DWORD *)(a1 + 776) & 0x200) != 0 )
        {
          Space = -1073740762;
          goto LABEL_40;
        }
        v30 = 4096;
        v44 = (UCHAR *)v29;
        Length = 4096;
      }
      if ( v44 != v27 )
        memmove(v27, v44, v30);
      v31 = v53;
    }
    else
    {
      memmove(v27, (const void *)v29, v30);
    }
    if ( *(_QWORD *)(a1 + 760) || (Space = ST_STORE<SM_TRAITS>::StDmpDummyPageRecordAllocate(a1), Space >= 0) )
    {
      v9 = 0;
      SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
      v33 = SmHpChunkAlloc(a1 + 192);
      v7 = v33;
      if ( !v33 )
      {
        Space = -1073741670;
        goto LABEL_40;
      }
      ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, v33);
      *(_QWORD *)v7 = 0LL;
      *(_DWORD *)(v7 + 8) = 0;
      *(_DWORD *)v7 = v31;
      v35 = Length;
      if ( Length < 0x1000 )
      {
        *(_DWORD *)(v7 + 4) ^= (*(_DWORD *)(v7 + 4) ^ Length) & 0xFFF;
        v35 = Length;
      }
      v36 = v58;
      if ( *v58 >= 0 )
      {
        MetroHash64::Hash(v27, v35, v59, v34);
        LODWORD(v37) = *(_DWORD *)v59;
      }
      else
      {
        v37 = *(_QWORD *)(v56 + 96);
      }
      *(_DWORD *)(v7 + 8) = v37;
      v38 = *(_QWORD *)(a1 + 1016);
      if ( *(_DWORD *)(v38 + 24) )
      {
        v46 = *(_DWORD *)(v38 + 8);
        v47 = v46 + Length - 1;
        ++*(_QWORD *)(a1 + 1024);
        v48 = ~(v46 - 1) & v47;
        *(_DWORD *)(v7 + 12) = *(_QWORD *)(a1 + 1024);
        *(_WORD *)(v7 + 6) = *(_WORD *)(a1 + 1028);
        v49 = *(_QWORD *)(a1 + 1016);
        v61 = 0;
        v60 = Length;
        HIDWORD(v60) = *(_DWORD *)(v7 + 12);
        v61 = *(unsigned __int16 *)(v7 + 6);
        if ( (int)SmCrAuthEncrypt(v49, v27, v27, v48, &v60) < 0 )
        {
          Space = -1073741174;
          goto LABEL_40;
        }
      }
      else if ( *(_BYTE *)(a1 + 776) )
      {
        v50 = RtlComputeCrc32(0, v27, Length);
        *v55 = v50;
      }
      Space = ST_STORE<SM_TRAITS>::StDmpSinglePageInsert(a1, v36, v7);
      if ( Space >= 0 )
      {
        v7 = 0LL;
        Space = 0;
      }
    }
  }
LABEL_40:
  if ( v9 )
    SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
  if ( v7 )
    SmHpChunkFree(a1 + 192, v7);
  return (unsigned int)Space;
}
