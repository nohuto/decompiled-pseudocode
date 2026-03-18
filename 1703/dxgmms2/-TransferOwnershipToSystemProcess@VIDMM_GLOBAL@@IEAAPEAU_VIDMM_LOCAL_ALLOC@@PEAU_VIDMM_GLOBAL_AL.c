/*
 * XREFs of ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C00557E0
 * Callers:
 *     ?TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C00558D4 (-TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z.c)
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001964 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     Template_pqq @ 0x1C001FA90 (Template_pqq.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C005EE20 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C005F450 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C00954A8 (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 */

struct _VIDMM_LOCAL_ALLOC *__fastcall VIDMM_GLOBAL::TransferOwnershipToSystemProcess(
        struct VIDMM_DEVICE **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_LOCAL_ALLOC *a3)
{
  struct _VIDMM_LOCAL_ALLOC *v3; // rdi
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v17[2]; // [rsp+20h] [rbp-38h]
  __int64 v18; // [rsp+28h] [rbp-30h]
  unsigned __int8 v19; // [rsp+60h] [rbp+8h] BYREF
  struct VIDMM_ALLOC *v20; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v20 = 0LL;
  LODWORD(v8) = VIDMM_GLOBAL::OpenOneAllocation((VIDMM_GLOBAL *)this, this[5041], a2, 0LL, 0, 0LL, &v20, &v19);
  if ( (int)v8 < 0 )
  {
    _InterlockedIncrement(&dword_1C003C554);
    v12 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v12 + 24) = a2;
    *(_QWORD *)(v12 + 32) = *((_QWORD *)a2 + 1);
    WdLogEvent5_WdLowResource(v12);
  }
  else
  {
    v3 = *(struct _VIDMM_LOCAL_ALLOC **)v20;
    if ( *((int *)a2 + 87) > 0 )
    {
      v13 = VIDMM_GLOBAL::TransferProbeAndLockToNewProcess((VIDMM_GLOBAL *)this, a3, *(struct _VIDMM_LOCAL_ALLOC **)v20);
      v8 = v13;
      if ( v13 >= 0 )
        goto LABEL_4;
      _InterlockedIncrement(&dword_1C003C554);
      v15 = (_QWORD *)WdLogNewEntry5_WdLowResource(v14);
      v15[3] = a2;
      v15[4] = *((_QWORD *)a2 + 1);
      v15[5] = v8;
      WdLogEvent5_WdLowResource(v15);
      VIDMM_GLOBAL::CloseOneAllocation((VIDMM_GLOBAL *)this, v20, 0LL, 0, 0, 0LL);
    }
  }
  if ( (int)v8 < 0 )
    return 0LL;
LABEL_4:
  if ( bTracingEnabled )
  {
    v16 = v3 ? *(unsigned int *)(*((_QWORD *)v3 + 1) + 8LL) : 0LL;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    {
      LODWORD(v18) = v16;
      v17[0] = *(struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)(*((_QWORD *)a3 + 1) + 8LL);
      Template_pqq(v16, &EventTransferAllocationOwnership, v9, a2, *(_QWORD *)&v17[0].0, v18);
    }
  }
  if ( *((_QWORD *)a3 + 1) )
  {
    v10 = *((_QWORD *)a2 + 17);
    if ( v10 )
    {
      VidMmRecordAlloc((VIDMM_GLOBAL *)this, (__int64)a2, (__int64)a3, v10, *((_QWORD *)a2 + 2), 1);
      VidMmRecordAlloc((VIDMM_GLOBAL *)this, (__int64)a2, (__int64)v3, *((_QWORD *)a2 + 17), *((_QWORD *)a2 + 2), 0);
    }
  }
  return v3;
}
