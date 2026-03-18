/*
 * XREFs of ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14024BC90
 * Callers:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14001E8E4 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1400549C8 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14024A718 (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x14001E728 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x14001FEBC (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14005D994 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     RtlFindNextForwardRunClearCapped @ 0x1400AC7C0 (RtlFindNextForwardRunClearCapped.c)
 *     MiFreePagesFromMdl @ 0x1400B3890 (MiFreePagesFromMdl.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14011FE94 (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmFpAllocate @ 0x140121890 (SmFpAllocate.c)
 *     ?StDmIsCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z @ 0x14024BC4C (-StDmIsCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmLazyRegionsWorker(__int64 a1, char a2, unsigned __int64 a3)
{
  int v5; // r13d
  int v6; // r12d
  int v7; // ebx
  unsigned int v8; // esi
  __int64 v9; // rax
  int NextForwardRunClearCapped; // eax
  bool v11; // cf
  unsigned int v12; // edx
  __int64 v13; // r15
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rdi
  void *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  __int64 v21; // rbx
  __int16 v22; // ax
  unsigned int v24; // [rsp+80h] [rbp+8h] BYREF
  int v25; // [rsp+88h] [rbp+10h]
  int v26; // [rsp+90h] [rbp+18h]
  unsigned int v27; // [rsp+98h] [rbp+20h]

  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( a3 )
  {
    _InterlockedAnd16((volatile signed __int16 *)(a3 + 12), 0xFFFEu);
    *(_WORD *)(a3 + 14) &= ~1u;
  }
  v24 = 0;
  v8 = 0;
  v25 = a2 & 1;
LABEL_4:
  v9 = a1 + 840;
  while ( 1 )
  {
    NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(v9, v8, 0xFFFFFFFF, &v24);
    if ( !NextForwardRunClearCapped )
      break;
    v8 = v24;
    v27 = v24 + NextForwardRunClearCapped;
    v11 = v24 < v24 + NextForwardRunClearCapped;
    v9 = a1 + 840;
    if ( v11 )
    {
      while ( 1 )
      {
        v26 = ++v7;
        if ( (v7 & 0xF) == 0 && a3 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6544LL)
             + *(_DWORD *)(*(_QWORD *)(a1 + 800) + 6064LL)
             + (*(_DWORD *)(*(_QWORD *)(a1 + 800) + 6068LL) >> 8) )
          {
            v5 = 1;
            v6 = 1;
            goto LABEL_32;
          }
          v8 = v24;
        }
        if ( (unsigned int)ST_STORE<SM_TRAITS>::StDmIsCurrentRegion(a1, v8) != 8 )
        {
LABEL_28:
          _bittestandset(*(signed __int32 **)(a1 + 848), v8);
          goto LABEL_29;
        }
        v13 = v8;
        if ( (*(_WORD *)(*(_QWORD *)(a1 + 1016) + 2LL * v8) & 0x1FFF) != 0 )
          break;
        v14 = *(_QWORD *)(a1 + 800);
        if ( (*(_BYTE *)(v14 + 5989) & 4) != 0 )
        {
          v15 = SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(*(_QWORD *)(a1 + 800), v12, v25 | 2u);
        }
        else
        {
          v16 = *(_QWORD *)(v14 + 6184);
          v17 = (void *)(*(_QWORD *)(v16 + 8LL * v8) & 0xFFFFFFFFFFFFFFF8uLL);
          MiFreePagesFromMdl((ULONG_PTR)v17, 0);
          ExFreePoolWithTag(v17, 0);
          *(_QWORD *)(v16 + 8LL * v8) = 0LL;
          v7 = v26;
          v15 = 0;
        }
        if ( v15 >= 0 )
          goto LABEL_28;
LABEL_17:
        v6 = 1;
LABEL_29:
        v24 = ++v8;
        if ( v8 >= v27 )
          goto LABEL_4;
      }
      if ( !SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v12) )
        goto LABEL_28;
      if ( (*(_BYTE *)(v18 + 5989) & 4) != 0 )
      {
        v20 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v18, v8, 0, v19, 8u);
        goto LABEL_27;
      }
      v21 = *(_QWORD *)(v18 + 6184);
      if ( (*(_QWORD *)(v21 + 8LL * v8) & 3) == 0 )
      {
        v20 = SmFpAllocate(
                (PEX_SPIN_LOCK)(v18 + 6560),
                5,
                (__int64)KeGetCurrentThread(),
                *(_QWORD *)(v21 + 8LL * v8) & 0xFFFFFFFFFFFFFFF8uLL,
                0);
        v8 = v24;
        if ( v20 )
LABEL_25:
          *(_QWORD *)(v21 + 8 * v13) |= 1uLL;
        v7 = v26;
LABEL_27:
        if ( v20 != 3 )
          goto LABEL_28;
        goto LABEL_17;
      }
      v20 = *(_QWORD *)((*(_QWORD *)(v21 + 8LL * v8) & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      goto LABEL_25;
    }
  }
LABEL_32:
  if ( a3 )
  {
    v22 = *(_WORD *)(a3 + 12) & 1;
    if ( v22 || v6 )
    {
      if ( v5 )
        *(_WORD *)(a3 + 14) |= 1u;
      if ( !v22 )
        ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(a1, a3);
    }
  }
  return 0LL;
}
