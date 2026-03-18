/*
 * XREFs of ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C00500A8
 * Callers:
 *     ?Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C004CA30 (-Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     memset @ 0x1C0015FC0 (memset.c)
 *     VidSchCreateSyncObject @ 0x1C004FEB0 (VidSchCreateSyncObject.c)
 *     ?InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C0069A04 (-InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAG.c)
 */

__int64 __fastcall VIDMM_DEVICE_PAGING_QUEUE::Initialize(_QWORD *a1, _QWORD *a2, __int64 a3, int a4)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  int SyncObject; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rax
  int v17[20]; // [rsp+40h] [rbp-58h] BYREF

  v6 = VIDMM_PAGING_QUEUE::InitializePagingQueue(a1, a2, a3, *a2, a4);
  v9 = v6;
  if ( v6 < 0 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v16 + 24) = a2;
LABEL_7:
    *(_QWORD *)(v16 + 32) = v9;
    WdLogEvent5_WdAssertion(v16);
    return (unsigned int)v9;
  }
  memset(v17, 0, sizeof(v17));
  v10 = *a2;
  v17[0] = 5;
  v11 = *(_QWORD *)(v10 + 16);
  *(_QWORD *)&v17[2] = 4294962295LL;
  SyncObject = VidSchCreateSyncObject(*(_QWORD *)(v11 + 416), 0LL, (unsigned int *)v17, 0LL, (__int64)a1, a1 + 19, 0LL);
  v9 = SyncObject;
  if ( SyncObject < 0 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v16 + 24) = a1;
    goto LABEL_7;
  }
  a1[11] = a1[19];
  a1[12] = 4294962295LL;
  return (unsigned int)v9;
}
