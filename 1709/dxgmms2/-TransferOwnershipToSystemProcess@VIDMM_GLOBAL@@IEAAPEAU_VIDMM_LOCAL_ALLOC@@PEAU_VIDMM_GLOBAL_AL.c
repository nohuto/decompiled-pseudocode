/*
 * XREFs of ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C0058318
 * Callers:
 *     ?TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C0058430 (-TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z.c)
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001B34 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     McTemplateK0pqq @ 0x1C0021B54 (McTemplateK0pqq.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0061B40 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00622B0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C009D644 (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 */

struct _VIDMM_LOCAL_ALLOC *__fastcall VIDMM_GLOBAL::TransferOwnershipToSystemProcess(
        struct VIDMM_DEVICE **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_LOCAL_ALLOC *a3)
{
  struct _VIDMM_LOCAL_ALLOC *v3; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v19[2]; // [rsp+20h] [rbp-38h]
  __int64 v20; // [rsp+28h] [rbp-30h]
  unsigned __int8 v21; // [rsp+60h] [rbp+8h] BYREF
  struct VIDMM_ALLOC *v22; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v22 = 0LL;
  LODWORD(v9) = VIDMM_GLOBAL::OpenOneAllocation((VIDMM_GLOBAL *)this, this[5041], a2, 0LL, 0, 0LL, &v22, &v21);
  if ( (int)v9 < 0 )
  {
    _InterlockedIncrement(&dword_1C0040564);
    v14 = WdLogNewEntry5_WdLowResource(v8, v7);
    *(_QWORD *)(v14 + 24) = a2;
    *(_QWORD *)(v14 + 32) = *((_QWORD *)a2 + 1);
    WdLogEvent5_WdLowResource(v14);
  }
  else
  {
    v3 = *(struct _VIDMM_LOCAL_ALLOC **)v22;
    if ( *((int *)a2 + 87) > 0 )
    {
      v15 = VIDMM_GLOBAL::TransferProbeAndLockToNewProcess((VIDMM_GLOBAL *)this, a3, *(struct _VIDMM_LOCAL_ALLOC **)v22);
      v9 = v15;
      if ( v15 >= 0 )
        goto LABEL_4;
      _InterlockedIncrement(&dword_1C0040564);
      v18 = (_QWORD *)WdLogNewEntry5_WdLowResource(v17, v16);
      v18[3] = a2;
      v18[4] = *((_QWORD *)a2 + 1);
      v18[5] = v9;
      WdLogEvent5_WdLowResource(v18);
      VIDMM_GLOBAL::CloseOneAllocation((VIDMM_GLOBAL *)this, v22, 0LL, 0, 0, 0LL);
    }
  }
  if ( (int)v9 < 0 )
    return 0LL;
LABEL_4:
  if ( bTracingEnabled )
  {
    v11 = v3 ? *(unsigned int *)(*((_QWORD *)v3 + 1) + 8LL) : 0LL;
    if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    {
      LODWORD(v20) = v11;
      v19[0] = *(struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)(*((_QWORD *)a3 + 1) + 8LL);
      McTemplateK0pqq(v11, &EventTransferAllocationOwnership, v10, a2, *(_QWORD *)&v19[0].0, v20);
    }
  }
  if ( *((_QWORD *)a3 + 1) )
  {
    v12 = *((_QWORD *)a2 + 17);
    if ( v12 )
    {
      VidMmRecordAlloc((VIDMM_GLOBAL *)this, (__int64)a2, (__int64)a3, v12, *((_QWORD *)a2 + 2), 1);
      VidMmRecordAlloc((VIDMM_GLOBAL *)this, (__int64)a2, (__int64)v3, *((_QWORD *)a2 + 17), *((_QWORD *)a2 + 2), 0);
    }
  }
  return v3;
}
