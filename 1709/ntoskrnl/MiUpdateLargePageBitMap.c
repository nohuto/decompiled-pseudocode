/*
 * XREFs of MiUpdateLargePageBitMap @ 0x1400C4FE4
 * Callers:
 *     MiFindContiguousPages @ 0x140078120 (MiFindContiguousPages.c)
 *     MiFreeLargeZeroPages @ 0x1400C5300 (MiFreeLargeZeroPages.c)
 *     MiFreeSmallPageFromMdl @ 0x1400E1408 (MiFreeSmallPageFromMdl.c)
 *     MiFreeLargePageMemory @ 0x1400F43C0 (MiFreeLargePageMemory.c)
 *     MiExpandNonPagedPool @ 0x1400F5408 (MiExpandNonPagedPool.c)
 *     MiDemoteLargePageOneLevel @ 0x140145244 (MiDemoteLargePageOneLevel.c)
 *     MiInitializeDynamicPfns @ 0x14021464C (MiInitializeDynamicPfns.c)
 *     MiFindLargeNodePage @ 0x140216B0C (MiFindLargeNodePage.c)
 *     MiDemotePfnListChain @ 0x14022E394 (MiDemotePfnListChain.c)
 *     MiRebuildLargePage @ 0x1402336B8 (MiRebuildLargePage.c)
 *     MiActOnPartitionNodePages @ 0x1402360CC (MiActOnPartitionNodePages.c)
 *     MiAddPhysicalMemory @ 0x1406DF4C8 (MiAddPhysicalMemory.c)
 *     MiGetFastLargePage @ 0x1406EBFA0 (MiGetFastLargePage.c)
 *     MiMarkLargePageRanges @ 0x14082D2D8 (MiMarkLargePageRanges.c)
 *     MiCreateEnclaveRegions @ 0x140850F58 (MiCreateEnclaveRegions.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140036470 (RtlClearBitsEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlSetBitsEx @ 0x1400C2EE0 (RtlSetBitsEx.c)
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
  unsigned __int64 v17; // r10
  unsigned __int8 v18; // al
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rbp
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 *v28; // r8
  __int64 *v29; // r10
  __int64 v30; // rax
  bool i; // zf
  unsigned __int8 v32; // al
  unsigned __int64 v33; // r10
  unsigned __int64 v34; // rbp
  __int64 v35; // rdx
  __int64 *v36; // r8
  __int64 *v37; // rdi
  __int64 v38; // rax
  bool j; // zf
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
  unsigned __int8 v50; // al
  unsigned __int64 v51; // [rsp+20h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = 0;
  v9 = a1;
  LODWORD(v10) = 2;
  while ( 1 )
  {
    v10 = (unsigned int)(v10 - 1);
    v11 = 16LL * (unsigned int)v10 + v9 + 4936;
    v12 = *(_QWORD *)v11;
    if ( !*(_QWORD *)v11 )
      break;
    v51 = MiLargePageSizes[v10];
    v13 = a2 / v51;
    v14 = (~(v51 - 1) & (a3 + v51 + a2 - 1)) / v51;
    v15 = v14;
    v16 = v14 - a2 / v51;
    if ( a5 == 1 )
      goto LABEL_12;
    v17 = v14 - 1;
    if ( a4 == 1 )
    {
      if ( v17 >= v12 )
        goto LABEL_51;
      if ( v16 <= 1 )
      {
        if ( v16 == 1 )
        {
          v18 = _bittest64(*(const signed __int64 **)(v11 + 8), v13);
          goto LABEL_9;
        }
        goto LABEL_51;
      }
      v40 = *(_QWORD *)(v11 + 8);
      v41 = (__int64 *)(v40 + 8 * (v13 >> 6));
      v42 = (__int64 *)(v40 + 8 * (v17 >> 6));
      v43 = *v41;
      if ( v41 == v42 )
      {
        v44 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v16) << v13;
      }
      else
      {
        if ( ((-1LL << v13) & v43) != -1LL << v13 )
          goto LABEL_51;
        while ( ++v41 != v42 )
        {
          if ( *v41 != -1 )
            goto LABEL_51;
        }
        v43 = *v41;
        v44 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v17;
      }
      v45 = (v44 & v43) == v44;
    }
    else
    {
      if ( v17 >= v12 )
        goto LABEL_51;
      if ( v16 <= 1 )
      {
        if ( v16 == 1 )
        {
          v18 = !_bittest64(*(const signed __int64 **)(v11 + 8), v13);
          goto LABEL_9;
        }
LABEL_51:
        v18 = 0;
        goto LABEL_9;
      }
      v46 = *(_QWORD *)(v11 + 8);
      v47 = (_QWORD *)(v46 + 8 * (v13 >> 6));
      v48 = (_QWORD *)(v46 + 8 * (v17 >> 6));
      if ( v47 == v48 )
      {
        v49 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v16) << v13;
      }
      else
      {
        if ( ((-1LL << v13) & *v47) != 0 )
          goto LABEL_51;
        while ( ++v47 != v48 )
        {
          if ( *v47 )
            goto LABEL_51;
        }
        v49 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v17;
      }
      v45 = (v49 & *v47) == 0;
    }
    v18 = v45;
LABEL_9:
    if ( v18 == 1 )
      break;
LABEL_12:
    if ( !v7 )
    {
      v7 = 1;
      KeAcquireInStackQueuedSpinLock(&qword_140388600, &LockHandle);
    }
    if ( a4 == 1 )
      RtlSetBitsEx(v11, v13, v16);
    else
      RtlClearBitsEx(v11, v13, v16);
    if ( !(_DWORD)v10 )
      break;
    v19 = MiLargePageSizes[(unsigned int)(v10 - 1)] / v51;
    v20 = v19;
    v21 = ~(v19 - 1);
    v22 = v21 & (v19 + v15 - 1);
    v23 = v21 & v13;
    v24 = v22 - v23;
    if ( a4 != 1 )
      goto LABEL_36;
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
      v29 = (__int64 *)(v27 + 8 * (v26 >> 6));
      v30 = *v28;
      if ( v28 != v29 )
      {
        for ( i = ((-1LL << v23) & v30) == -1LL << v23; i; i = *v28 == -1 )
        {
          if ( ++v28 == v29 )
          {
            if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v26) & *v28) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v26 )
              goto LABEL_31;
            v32 = 0;
            goto LABEL_28;
          }
        }
LABEL_29:
        v24 -= v20;
        if ( !v24 )
          break;
        v23 = v25;
        goto LABEL_31;
      }
      if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v20) << v23) & v30) != 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v20) << v23 )
        goto LABEL_29;
    }
LABEL_31:
    v33 = v22 - v20;
    v34 = v22 - 1;
    if ( v34 < *(_QWORD *)v11 )
    {
      if ( v20 <= 1 )
      {
        if ( v20 == 1 )
        {
          v50 = _bittest64(*(const signed __int64 **)(v11 + 8), v33);
LABEL_73:
          if ( v50 )
            goto LABEL_36;
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
          if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v20) << v33) & v38) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v20) << v33 )
            goto LABEL_36;
        }
        else
        {
          for ( j = ((-1LL << v33) & v38) == -1LL << v33; j; j = *v36 == -1 )
          {
            if ( ++v36 == v37 )
            {
              if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v34) & *v36) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v34 )
                goto LABEL_36;
              v50 = 0;
              goto LABEL_73;
            }
          }
        }
      }
    }
    v24 -= v20;
    if ( !v24 )
      break;
LABEL_36:
    a5 = a4;
    a2 = v51 * v23;
    a3 = v51 * v24;
    v9 = a1;
  }
  if ( v7 == 1 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
}
