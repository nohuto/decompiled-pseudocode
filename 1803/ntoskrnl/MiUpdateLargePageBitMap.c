/*
 * XREFs of MiUpdateLargePageBitMap @ 0x140137090
 * Callers:
 *     MiCommitPoolMemory @ 0x1400250E0 (MiCommitPoolMemory.c)
 *     MiFreeLargeZeroPages @ 0x140049444 (MiFreeLargeZeroPages.c)
 *     MiFindContiguousPages @ 0x140123CF0 (MiFindContiguousPages.c)
 *     MiFreeLargePageMemory @ 0x1401363B0 (MiFreeLargePageMemory.c)
 *     MiFreeSmallPageFromMdl @ 0x140136B00 (MiFreeSmallPageFromMdl.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14017B0D8 (MiDemoteValidLargePageOneLevel.c)
 *     MiInitializeDynamicPfns @ 0x140252AC0 (MiInitializeDynamicPfns.c)
 *     MiFindLargeNodePage @ 0x140254588 (MiFindLargeNodePage.c)
 *     MiDemotePfnListChain @ 0x1402689E8 (MiDemotePfnListChain.c)
 *     MiActOnPartitionNodePages @ 0x14026DA80 (MiActOnPartitionNodePages.c)
 *     MiAddPhysicalMemory @ 0x14074A438 (MiAddPhysicalMemory.c)
 *     MiGetFastLargePage @ 0x140755A14 (MiGetFastLargePage.c)
 *     MiMarkLargePageRanges @ 0x140898B08 (MiMarkLargePageRanges.c)
 *     MiCreateEnclaveRegions @ 0x14089D418 (MiCreateEnclaveRegions.c)
 *     MiMarkLargePagePte @ 0x1408BA5D0 (MiMarkLargePagePte.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140009400 (RtlClearBitsEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     RtlSetBitsEx @ 0x1400DA370 (RtlSetBitsEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall MiUpdateLargePageBitMap(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4, int a5)
{
  int v7; // r12d
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rsi
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  unsigned __int8 v18; // al
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rbp
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // r11
  __int64 v27; // rcx
  __int64 *v28; // r8
  __int64 v29; // r10
  __int64 *v30; // rdx
  bool i; // zf
  unsigned __int8 v32; // al
  unsigned __int64 v33; // r10
  unsigned __int64 v34; // rbp
  __int64 v35; // rdx
  __int64 *v36; // r8
  __int64 v37; // r11
  __int64 *v38; // rdx
  bool j; // zf
  __int64 v40; // rcx
  __int64 *v41; // r8
  __int64 v42; // r9
  __int64 *v43; // r10
  bool v44; // zf
  __int64 v45; // rcx
  __int64 *v46; // r8
  __int64 v47; // r10
  __int64 *v48; // r9
  unsigned __int8 v49; // al
  unsigned __int64 v50; // [rsp+20h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF

  v7 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = a1;
  LODWORD(v10) = 2;
  while ( 1 )
  {
    v10 = (unsigned int)(v10 - 1);
    v11 = 16LL * (unsigned int)v10 + v9 + 5000;
    v12 = *(_QWORD *)v11;
    if ( !*(_QWORD *)v11 )
      break;
    v50 = MiLargePageSizes[v10];
    v13 = a2 / v50;
    v14 = (~(v50 - 1) & (v50 + a2 + a3 - 1)) / v50;
    v15 = v14;
    v16 = v14 - a2 / v50;
    if ( a5 == 1 )
      goto LABEL_12;
    v17 = v14 - 1;
    if ( a4 == 1 )
    {
      if ( v17 >= v12 )
        goto LABEL_46;
      if ( v16 <= 1 )
      {
        if ( v16 == 1 )
        {
          v18 = _bittest64(*(const signed __int64 **)(v11 + 8), v13);
          goto LABEL_9;
        }
        goto LABEL_46;
      }
      v40 = *(_QWORD *)(v11 + 8);
      v41 = (__int64 *)(v40 + 8 * (v13 >> 6));
      v42 = *v41;
      v43 = (__int64 *)(v40 + 8 * (v17 >> 6));
      if ( v41 == v43 )
      {
        v44 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v16) << v13) & v42) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v16) << v13;
      }
      else
      {
        if ( ((-1LL << v13) & v42) != -1LL << v13 )
          goto LABEL_46;
        while ( ++v41 != v43 )
        {
          if ( *v41 != -1 )
            goto LABEL_46;
        }
        v44 = ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v17) & *v41) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v17;
      }
    }
    else
    {
      if ( v17 >= v12 )
        goto LABEL_46;
      if ( v16 <= 1 )
      {
        if ( v16 == 1 )
        {
          v18 = !_bittest64(*(const signed __int64 **)(v11 + 8), v13);
          goto LABEL_9;
        }
LABEL_46:
        v18 = 0;
        goto LABEL_9;
      }
      v45 = *(_QWORD *)(v11 + 8);
      v46 = (__int64 *)(v45 + 8 * (v13 >> 6));
      v47 = *v46;
      v48 = (__int64 *)(v45 + 8 * (v17 >> 6));
      if ( v46 == v48 )
      {
        v44 = (v47 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v16) << v13)) == 0;
      }
      else
      {
        if ( (v47 & (-1LL << v13)) != 0 )
          goto LABEL_46;
        while ( ++v46 != v48 )
        {
          if ( *v46 )
            goto LABEL_46;
        }
        v44 = (*v46 & (0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v17)) == 0;
      }
    }
    v18 = v44;
LABEL_9:
    if ( v18 == 1 )
      break;
LABEL_12:
    if ( !v7 )
    {
      v7 = 1;
      KeAcquireInStackQueuedSpinLock(&qword_1403CB800, &LockHandle);
    }
    if ( a4 == 1 )
      RtlSetBitsEx(v11, v13, v16);
    else
      RtlClearBitsEx(v11, v13, v16);
    if ( !(_DWORD)v10 )
      break;
    v19 = MiLargePageSizes[(unsigned int)(v10 - 1)] / v50;
    v20 = v19;
    v21 = ~(v19 - 1);
    v22 = v21 & (v19 + v15 - 1);
    v23 = v21 & v13;
    v24 = v22 - v23;
    if ( a4 != 1 )
      goto LABEL_33;
    v25 = v19 + v23;
    v26 = v19 + v23 - 1;
    if ( v26 >= *(_QWORD *)v11 )
      goto LABEL_29;
    if ( v19 <= 1 )
    {
      if ( v19 != 1 )
        goto LABEL_29;
      v32 = _bittest64(*(const signed __int64 **)(v11 + 8), v23);
LABEL_28:
      if ( !v32 )
        goto LABEL_29;
    }
    else
    {
      v27 = *(_QWORD *)(v11 + 8);
      v28 = (__int64 *)(v27 + 8 * (v23 >> 6));
      v29 = *v28;
      v30 = (__int64 *)(v27 + 8 * (v26 >> 6));
      if ( v28 != v30 )
      {
        for ( i = ((-1LL << v23) & v29) == -1LL << v23; i; i = *v28 == -1 )
        {
          if ( ++v28 == v30 )
          {
            if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v26) & *v28) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v26 )
              goto LABEL_34;
            v32 = 0;
            goto LABEL_28;
          }
        }
LABEL_29:
        v24 -= v20;
        if ( !v24 )
          break;
        v23 = v25;
        goto LABEL_34;
      }
      if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v19) << v23) & v29) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v19) << v23 )
        goto LABEL_29;
    }
LABEL_34:
    v33 = v22 - v20;
    v34 = v22 - 1;
    if ( v34 < *(_QWORD *)v11 )
    {
      if ( v20 <= 1 )
      {
        if ( v20 == 1 )
        {
          v49 = _bittest64(*(const signed __int64 **)(v11 + 8), v33);
LABEL_71:
          if ( v49 )
            goto LABEL_33;
        }
      }
      else
      {
        v35 = *(_QWORD *)(v11 + 8);
        v36 = (__int64 *)(v35 + 8 * (v33 >> 6));
        v37 = *v36;
        v38 = (__int64 *)(v35 + 8 * (v34 >> 6));
        if ( v36 == v38 )
        {
          if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v20) << v33) & v37) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v20) << v33 )
            goto LABEL_33;
        }
        else
        {
          for ( j = ((-1LL << v33) & v37) == -1LL << v33; j; j = *v36 == -1 )
          {
            if ( ++v36 == v38 )
            {
              if ( (*v36 & (0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v34)) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v34 )
                goto LABEL_33;
              v49 = 0;
              goto LABEL_71;
            }
          }
        }
      }
    }
    v24 -= v20;
    if ( !v24 )
      break;
LABEL_33:
    a5 = a4;
    a2 = v50 * v23;
    a3 = v50 * v24;
    v9 = a1;
  }
  if ( v7 == 1 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
}
