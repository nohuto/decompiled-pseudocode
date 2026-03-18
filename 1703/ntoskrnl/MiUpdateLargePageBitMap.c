/*
 * XREFs of MiUpdateLargePageBitMap @ 0x14012761C
 * Callers:
 *     MiFindContiguousPages @ 0x1400B65D0 (MiFindContiguousPages.c)
 *     MiFreeLargePageMemory @ 0x140126770 (MiFreeLargePageMemory.c)
 *     MiExpandNonPagedPool @ 0x140126E74 (MiExpandNonPagedPool.c)
 *     MiDemoteLargePage @ 0x14015B698 (MiDemoteLargePage.c)
 *     MiInitializeDynamicPfns @ 0x14020D5A0 (MiInitializeDynamicPfns.c)
 *     MiFindLargeNodePage @ 0x14020EDB8 (MiFindLargeNodePage.c)
 *     MiActOnPartitionNodePages @ 0x14021CCD8 (MiActOnPartitionNodePages.c)
 *     MiRebuildLargePage @ 0x140224674 (MiRebuildLargePage.c)
 *     MiAddPhysicalMemory @ 0x1406B34F8 (MiAddPhysicalMemory.c)
 *     MiFreeLargeZeroPages @ 0x1406BEC28 (MiFreeLargeZeroPages.c)
 *     MiGetFastLargePage @ 0x1406BECF0 (MiGetFastLargePage.c)
 *     MiCreateEnclaveRegions @ 0x14080480C (MiCreateEnclaveRegions.c)
 *     MiMarkLargePageRanges @ 0x1408141A8 (MiMarkLargePageRanges.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlSetBitsEx @ 0x1400AECC0 (RtlSetBitsEx.c)
 *     RtlClearBitsEx @ 0x1400CDB30 (RtlClearBitsEx.c)
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
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rbp
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 *v26; // r8
  __int64 *v27; // r10
  __int64 v28; // rax
  bool j; // zf
  unsigned __int8 v30; // al
  unsigned __int64 v31; // r10
  unsigned __int8 v32; // al
  unsigned __int64 v33; // r10
  unsigned __int64 v34; // rbp
  __int64 v35; // rdx
  __int64 *v36; // r8
  __int64 *v37; // rdi
  __int64 v38; // rax
  bool k; // zf
  __int64 v40; // rcx
  __int64 *v41; // r8
  __int64 *v42; // r9
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  bool v45; // zf
  __int64 v46; // rcx
  _QWORD *v47; // r8
  _QWORD *v48; // rdx
  unsigned __int64 v49; // rdx
  bool v50; // zf
  int i; // eax
  unsigned __int8 v52; // al
  unsigned __int64 v53; // [rsp+20h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = 0;
  v9 = a1;
  LODWORD(v10) = 2;
  while ( 1 )
  {
    v10 = (unsigned int)(v10 - 1);
    v11 = 16LL * (unsigned int)v10 + v9 + 4808;
    v12 = *(_QWORD *)v11;
    if ( !*(_QWORD *)v11 )
      break;
    v53 = MiLargePageSizes[v10];
    v13 = a2 / v53;
    v14 = (~(v53 - 1) & (a3 + v53 + a2 - 1)) / v53;
    v15 = v14;
    v16 = v14 - a2 / v53;
    if ( a5 == 1 )
      goto LABEL_4;
    v31 = v14 - 1;
    if ( a4 == 1 )
    {
      if ( v31 >= v12 )
        goto LABEL_52;
      if ( v16 <= 1 )
      {
        if ( v16 == 1 )
        {
          v32 = _bittest64(*(const signed __int64 **)(v11 + 8), v13);
          goto LABEL_29;
        }
        goto LABEL_52;
      }
      v40 = *(_QWORD *)(v11 + 8);
      v41 = (__int64 *)(v40 + 8 * (v13 >> 6));
      v42 = (__int64 *)(v40 + 8 * (v31 >> 6));
      v43 = *v41;
      if ( v41 == v42 )
      {
        v44 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v16) << v13;
      }
      else
      {
        if ( ((-1LL << v13) & v43) != -1LL << v13 )
          goto LABEL_52;
        while ( ++v41 != v42 )
        {
          if ( *v41 != -1 )
            goto LABEL_52;
        }
        v43 = *v41;
        v44 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v31;
      }
      v45 = (v44 & v43) == v44;
    }
    else
    {
      if ( v31 >= v12 )
        goto LABEL_52;
      if ( v16 <= 1 )
      {
        if ( v16 == 1 )
        {
          v32 = !_bittest64(*(const signed __int64 **)(v11 + 8), v13);
          goto LABEL_29;
        }
        goto LABEL_52;
      }
      v46 = *(_QWORD *)(v11 + 8);
      v47 = (_QWORD *)(v46 + 8 * (v13 >> 6));
      v48 = (_QWORD *)(v46 + 8 * (v31 >> 6));
      if ( v47 != v48 )
      {
        v50 = ((-1LL << v13) & *v47) == 0;
        for ( i = 0; ; i = 0 )
        {
          LOBYTE(i) = v50;
          if ( !i )
            break;
          if ( ++v47 == v48 )
          {
            v49 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v31;
            goto LABEL_58;
          }
          v50 = *v47 == 0LL;
        }
LABEL_52:
        v32 = 0;
        goto LABEL_29;
      }
      v49 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v16) << v13;
LABEL_58:
      v45 = (v49 & *v47) == 0;
    }
    v32 = v45;
LABEL_29:
    if ( v32 == 1 )
      break;
LABEL_4:
    if ( !v7 )
    {
      v7 = 1;
      KeAcquireInStackQueuedSpinLock(&qword_14036C2C0, &LockHandle);
    }
    if ( a4 == 1 )
      RtlSetBitsEx(v11, v13, v16);
    else
      RtlClearBitsEx(v11, v13, v16);
    if ( !(_DWORD)v10 )
      break;
    v17 = MiLargePageSizes[(unsigned int)(v10 - 1)] / v53;
    v18 = v17;
    v19 = ~(v17 - 1);
    v20 = v19 & (v17 + v15 - 1);
    v21 = v19 & v13;
    v22 = v20 - v21;
    if ( a4 != 1 )
      goto LABEL_37;
    v23 = v17 + v21;
    v24 = v17 + v21 - 1;
    if ( v24 >= *(_QWORD *)v11 )
      goto LABEL_20;
    if ( v17 <= 1 )
    {
      if ( v17 != 1 )
        goto LABEL_20;
      v30 = _bittest64(*(const signed __int64 **)(v11 + 8), v21);
LABEL_19:
      if ( !v30 )
        goto LABEL_20;
    }
    else
    {
      v25 = *(_QWORD *)(v11 + 8);
      v26 = (__int64 *)(v25 + 8 * (v21 >> 6));
      v27 = (__int64 *)(v25 + 8 * (v24 >> 6));
      v28 = *v26;
      if ( v26 != v27 )
      {
        for ( j = ((-1LL << v21) & v28) == -1LL << v21; j; j = *v26 == -1 )
        {
          if ( ++v26 == v27 )
          {
            if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v24) & *v26) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v24 )
              goto LABEL_38;
            v30 = 0;
            goto LABEL_19;
          }
        }
LABEL_20:
        v22 -= v18;
        if ( !v22 )
          break;
        v21 = v23;
        goto LABEL_38;
      }
      if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v18) << v21) & v28) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v18) << v21 )
        goto LABEL_20;
    }
LABEL_38:
    v33 = v20 - v18;
    v34 = v20 - 1;
    if ( v34 < *(_QWORD *)v11 )
    {
      if ( v18 <= 1 )
      {
        if ( v18 == 1 )
        {
          v52 = _bittest64(*(const signed __int64 **)(v11 + 8), v33);
LABEL_74:
          if ( v52 )
            goto LABEL_37;
        }
      }
      else
      {
        v35 = *(_QWORD *)(v11 + 8);
        v36 = (__int64 *)(v35 + 8 * (v33 >> 6));
        v37 = (__int64 *)(v35 + 8 * (v34 >> 6));
        v38 = *v36;
        if ( v36 == v37 )
        {
          if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v18) << v33) & v38) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v18) << v33 )
            goto LABEL_37;
        }
        else
        {
          for ( k = ((-1LL << v33) & v38) == -1LL << v33; k; k = *v36 == -1 )
          {
            if ( ++v36 == v37 )
            {
              if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v34) & *v36) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v34 )
                goto LABEL_37;
              v52 = 0;
              goto LABEL_74;
            }
          }
        }
      }
    }
    v22 -= v18;
    if ( !v22 )
      break;
LABEL_37:
    a5 = a4;
    a2 = v53 * v21;
    a3 = v53 * v22;
    v9 = a1;
  }
  if ( v7 == 1 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
}
