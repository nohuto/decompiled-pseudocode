/*
 * XREFs of ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C0056384
 * Callers:
 *     ?Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C0075B78 (-Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C006B3BC (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STOR.c)
 *     ?InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C0073644 (-InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAG.c)
 *     VidSchCreateSyncObject @ 0x1C00776D0 (VidSchCreateSyncObject.c)
 */

__int64 __fastcall VIDMM_DEVICE_PAGING_QUEUE::Initialize(_QWORD *a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 v4; // rbp
  __int64 v7; // r15
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  _QWORD *v12; // r14
  int SyncObject; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rax
  int v18; // esi
  struct VIDMM_PROCESS *v19; // r8
  struct VIDMM_DEVICE *v20; // rdx
  struct VIDMM_MONITORED_FENCE_STORAGE *v21; // r9
  int v22[20]; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v23; // [rsp+C0h] [rbp+8h] BYREF

  v4 = *a2;
  v7 = *(_QWORD *)(*(_QWORD *)(*a2 + 16LL) + 528LL);
  v8 = VIDMM_PAGING_QUEUE::InitializePagingQueue(a1, a2, a3, *a2, a4);
  v11 = v8;
  if ( v8 < 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v17 + 24) = a2;
LABEL_7:
    *(_QWORD *)(v17 + 32) = v11;
    WdLogEvent5_WdAssertion(v17);
    return (unsigned int)v11;
  }
  memset(v22, 0, sizeof(v22));
  v12 = a1 + 19;
  v22[0] = 5;
  *(_QWORD *)&v22[2] = 4294962295LL;
  SyncObject = VidSchCreateSyncObject(v7, 0, (int)v22, 0, (__int64)a1, a1 + 19, 0LL);
  v11 = SyncObject;
  if ( SyncObject < 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v15, v14);
    *(_QWORD *)(v17 + 24) = a1;
    goto LABEL_7;
  }
  if ( !*(_BYTE *)(v7 + 54) || (v18 = 0, !*(_DWORD *)(v4 + 6992)) )
  {
LABEL_4:
    a1[11] = *v12;
    result = 0LL;
    a1[12] = 4294962295LL;
    return result;
  }
  while ( 1 )
  {
    v19 = *(struct VIDMM_PROCESS **)(v4 + 40896);
    v20 = *(struct VIDMM_DEVICE **)(v4 + 40904);
    v21 = (struct VIDMM_MONITORED_FENCE_STORAGE *)(*v12 + 48LL);
    v23 = 0LL;
    LODWORD(v11) = VIDMM_GLOBAL::MapGpuVA((VIDMM_GLOBAL *)v4, v20, v19, v21, &v23, 1 << v18, 0);
    if ( (int)v11 < 0 )
      return (unsigned int)v11;
    if ( (unsigned int)++v18 >= *(_DWORD *)(v4 + 6992) )
      goto LABEL_4;
  }
}
