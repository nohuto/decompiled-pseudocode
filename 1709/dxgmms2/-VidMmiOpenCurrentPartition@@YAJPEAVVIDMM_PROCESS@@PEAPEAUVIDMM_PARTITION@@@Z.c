/*
 * XREFs of ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1C0012690
 * Callers:
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C00524F0 (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CompareVidMmPartitionById@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0012830 (-CompareVidMmPartitionById@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?Initialize@VIDMM_PARTITION@@QEAAJXZ @ 0x1C00161D4 (-Initialize@VIDMM_PARTITION@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ??_GVIDMM_PARTITION@@QEAAPEAXI@Z @ 0x1C00230D8 (--_GVIDMM_PARTITION@@QEAAPEAXI@Z.c)
 *     ?InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z @ 0x1C0081250 (-InitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAJPEAUVIDMM_PARTITION@@@Z.c)
 */

__int64 __fastcall VidMmiOpenCurrentPartition(struct VIDMM_PROCESS *a1, struct VIDMM_PARTITION **a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  void *v7; // rsi
  unsigned int v8; // edx
  unsigned int *v9; // rbx
  int v10; // eax
  __int64 v12; // rdi
  unsigned int *v13; // rax
  __int64 v14; // r8
  struct _RTL_BALANCED_NODE *v15; // rsi
  void *v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  struct _RTL_BALANCED_NODE *v20; // rax
  _QWORD v21[30]; // [rsp+30h] [rbp-118h] BYREF

  memset(v21, 0, sizeof(v21));
  HIDWORD(v21[0]) = -1;
  LODWORD(v21[1]) = -1;
  v3 = ZwManagePartition(-1LL, 0LL, 0LL, v21, 240);
  v6 = v3;
  if ( v3 < 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v17 + 24) = v6;
    WdLogEvent5_WdAssertion(v17);
    return (unsigned int)v6;
  }
  v7 = (void *)LODWORD(v21[29]);
  ExAcquirePushLockExclusiveEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  v9 = (unsigned int *)VIDMM_PARTITION::_PartitionTree;
  while ( v9 )
  {
    v10 = CompareVidMmPartitionById(v7, (struct _RTL_BALANCED_NODE *)v9);
    if ( v10 < 0 )
    {
      v9 = *(unsigned int **)v9;
    }
    else
    {
      if ( v10 <= 0 )
        break;
      v9 = (unsigned int *)*((_QWORD *)v9 + 1);
    }
  }
  if ( v9 )
    goto LABEL_7;
  v12 = (v21[6] - v21[28]) << 12;
  v13 = (unsigned int *)operator new[](0x40uLL, 0x62356956u, PagedPool);
  v9 = v13;
  if ( v13 )
  {
    v13[7] = 0;
    *((_QWORD *)v13 + 4) = 0LL;
    *((_QWORD *)v13 + 6) = 0LL;
    *((_QWORD *)v13 + 7) = 0LL;
    v13[6] = (unsigned int)v7;
    *((_QWORD *)v13 + 5) = v12;
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
  {
    _InterlockedIncrement(&dword_1C00406A8);
    v18 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v18 + 24) = 165LL;
    WdLogEvent5_WdLowResource(v18);
    LODWORD(v6) = -1073741801;
    goto LABEL_9;
  }
  LODWORD(v6) = VIDMM_PARTITION::Initialize((VIDMM_PARTITION *)v9);
  if ( (int)v6 < 0
    || (LODWORD(v6) = VIDMM_GLOBAL::InitializePartitionForAllAdapters((struct VIDMM_PARTITION *)v9), (int)v6 < 0) )
  {
    v19 = WdLogNewEntry5_WdWarning();
    WdLogEvent5_WdWarning(v19);
    goto LABEL_7;
  }
  v15 = (struct _RTL_BALANCED_NODE *)VIDMM_PARTITION::_PartitionTree;
  LOBYTE(v14) = 0;
  v16 = (void *)v9[6];
  if ( !VIDMM_PARTITION::_PartitionTree )
    goto LABEL_17;
  while ( (int)CompareVidMmPartitionById(v16, v15) >= 0 )
  {
    v20 = v15->Children[1];
    if ( !v20 )
    {
      LOBYTE(v14) = 1;
      goto LABEL_17;
    }
LABEL_29:
    v15 = v20;
  }
  v20 = v15->Children[0];
  if ( v15->Children[0] )
    goto LABEL_29;
  LOBYTE(v14) = 0;
LABEL_17:
  RtlAvlInsertNodeEx(&VIDMM_PARTITION::_PartitionTree, v15, v14, v9);
LABEL_7:
  if ( (int)v6 < 0 )
  {
    VIDMM_PARTITION::`scalar deleting destructor'(v9, v8);
    v9 = 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)v9 + 7);
  }
LABEL_9:
  *a2 = (struct VIDMM_PARTITION *)v9;
  ExReleasePushLockExclusiveEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  return (unsigned int)v6;
}
