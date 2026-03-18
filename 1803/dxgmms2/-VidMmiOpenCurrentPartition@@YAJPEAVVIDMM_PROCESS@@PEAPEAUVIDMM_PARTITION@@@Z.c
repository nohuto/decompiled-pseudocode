/*
 * XREFs of ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1C0002574
 * Callers:
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0073B5C (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C0002778 (--0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?CompareVidMmPartitionById@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00027B0 (-CompareVidMmPartitionById@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@VIDMM_PARTITION@@QEAAJXZ @ 0x1C0015D04 (-Initialize@VIDMM_PARTITION@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ??_GVIDMM_PARTITION@@QEAAPEAXI@Z @ 0x1C0025A88 (--_GVIDMM_PARTITION@@QEAAPEAXI@Z.c)
 *     ?InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z @ 0x1C0085C60 (-InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z.c)
 */

__int64 __fastcall VidMmiOpenCurrentPartition(struct VIDMM_PROCESS *a1, struct VIDMM_PARTITION **a2)
{
  int v3; // eax
  __int64 v4; // rdi
  void *v5; // rsi
  unsigned int v6; // edx
  unsigned int *v7; // rbx
  int v8; // eax
  bool v9; // zf
  __int64 v11; // rdi
  unsigned int *v12; // rax
  __int64 v13; // r8
  struct _RTL_BALANCED_NODE *v14; // rsi
  void *v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  struct _RTL_BALANCED_NODE *v19; // rax
  char v20[8]; // [rsp+30h] [rbp-138h] BYREF
  __int64 v21; // [rsp+38h] [rbp-130h]
  int v22; // [rsp+40h] [rbp-128h]
  _QWORD v23[30]; // [rsp+50h] [rbp-118h] BYREF

  memset(v23, 0, sizeof(v23));
  HIDWORD(v23[0]) = -1;
  LODWORD(v23[1]) = -1;
  v3 = ZwManagePartition(-1LL, 0LL, 0LL, v23, 240);
  v4 = v3;
  if ( v3 < 0 )
  {
    v16 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v16 + 24) = v4;
    WdLogEvent5_WdAssertion(v16);
    return (unsigned int)v4;
  }
  v5 = (void *)LODWORD(v23[29]);
  DXGAUTOEXPUSHLOCKEXCLUSIVE::DXGAUTOEXPUSHLOCKEXCLUSIVE(
    (DXGAUTOEXPUSHLOCKEXCLUSIVE *)v20,
    (struct _EX_PUSH_LOCK *const)&VIDMM_PARTITION::_PartitionLock);
  v7 = (unsigned int *)VIDMM_PARTITION::_PartitionTree;
  while ( v7 )
  {
    v8 = CompareVidMmPartitionById(v5, (struct _RTL_BALANCED_NODE *)v7);
    if ( v8 < 0 )
    {
      v7 = *(unsigned int **)v7;
    }
    else
    {
      if ( v8 <= 0 )
        break;
      v7 = (unsigned int *)*((_QWORD *)v7 + 1);
    }
  }
  if ( v7 )
    goto LABEL_7;
  v11 = (v23[6] - v23[28]) << 12;
  v12 = (unsigned int *)operator new[](0x40uLL, 0x62356956u, PagedPool);
  v7 = v12;
  if ( v12 )
  {
    v12[7] = 0;
    *((_QWORD *)v12 + 4) = 0LL;
    *((_QWORD *)v12 + 6) = 0LL;
    *((_QWORD *)v12 + 7) = 0LL;
    v12[6] = (unsigned int)v5;
    *((_QWORD *)v12 + 5) = v11;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
  {
    _InterlockedIncrement(&dword_1C00476A8);
    v17 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v17 + 24) = 165LL;
    WdLogEvent5_WdLowResource(v17);
    LODWORD(v4) = -1073741801;
    goto LABEL_9;
  }
  LODWORD(v4) = VIDMM_PARTITION::Initialize((VIDMM_PARTITION *)v7);
  if ( (int)v4 < 0
    || (LODWORD(v4) = VIDMM_GLOBAL::InitializePartitionForAllAdapters((struct VIDMM_PARTITION *)v7), (int)v4 < 0) )
  {
    v18 = WdLogNewEntry5_WdWarning();
    WdLogEvent5_WdWarning(v18);
    goto LABEL_7;
  }
  v14 = (struct _RTL_BALANCED_NODE *)VIDMM_PARTITION::_PartitionTree;
  LOBYTE(v13) = 0;
  v15 = (void *)v7[6];
  if ( !VIDMM_PARTITION::_PartitionTree )
    goto LABEL_20;
  while ( (int)CompareVidMmPartitionById(v15, v14) >= 0 )
  {
    v19 = v14->Children[1];
    if ( !v19 )
    {
      LOBYTE(v13) = 1;
      goto LABEL_20;
    }
LABEL_32:
    v14 = v19;
  }
  v19 = v14->Children[0];
  if ( v14->Children[0] )
    goto LABEL_32;
  LOBYTE(v13) = 0;
LABEL_20:
  RtlAvlInsertNodeEx(&VIDMM_PARTITION::_PartitionTree, v14, v13, v7);
LABEL_7:
  if ( (int)v4 < 0 )
  {
    VIDMM_PARTITION::`scalar deleting destructor'(v7, v6);
    v7 = 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)v7 + 7);
  }
LABEL_9:
  v9 = v22 == 1;
  *a2 = (struct VIDMM_PARTITION *)v7;
  if ( v9 )
  {
    ExReleasePushLockSharedEx(v21, 0LL);
  }
  else if ( v22 == 2 )
  {
    ExReleasePushLockExclusiveEx(v21, 0LL);
  }
  return (unsigned int)v4;
}
