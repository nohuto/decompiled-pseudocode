/*
 * XREFs of ?TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1C005575C
 * Callers:
 *     ?TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C00558D4 (-TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z.c)
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001964 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     VidSchSuspendResumeDevice @ 0x1C0010450 (VidSchSuspendResumeDevice.c)
 *     VidSchiMarkDeviceAsError @ 0x1C00127A4 (VidSchiMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     Template_pqq @ 0x1C001FA90 (Template_pqq.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C00954A8 (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 */

struct _VIDMM_LOCAL_ALLOC *__fastcall VIDMM_GLOBAL::TransferOwnershipToProcess(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_LOCAL_ALLOC *a3,
        PRKPROCESS **a4)
{
  __int64 v4; // rax
  int v5; // edi
  struct _VIDMM_LOCAL_ALLOC *v6; // rbp
  VIDMM_GLOBAL *v9; // r12
  __int64 v11; // rbx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  struct _VIDMM_GLOBAL_ALLOC *v14; // rax
  struct _VIDMM_GLOBAL_ALLOC *v15; // r14
  _QWORD **v16; // r13
  _QWORD *v17; // r12
  __int64 v18; // rbx
  __int64 v19; // rcx
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-80h] BYREF

  v4 = *((_QWORD *)a2 + 17);
  v5 = 0;
  v6 = (struct _VIDMM_LOCAL_ALLOC *)a4;
  v9 = this;
  if ( v4
    && (*(_DWORD *)(v4 + 80) & 0x1001) != 0
    && *((int *)a2 + 87) > 0
    && (KeStackAttachProcess(*a4[1], &ApcState),
        v11 = (int)VIDMM_GLOBAL::TransferProbeAndLockToNewProcess(v9, a3, v6),
        KeUnstackDetachProcess(&ApcState),
        (int)v11 < 0) )
  {
    _InterlockedIncrement(&dword_1C003C554);
    v13 = (_QWORD *)WdLogNewEntry5_WdLowResource(v12);
    v13[3] = a2;
    v13[4] = *((_QWORD *)a2 + 1);
    v13[5] = v11;
    WdLogEvent5_WdLowResource(v13);
    v14 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296);
    v15 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 37);
    if ( v15 != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296) )
    {
      do
      {
        if ( (struct _VIDMM_GLOBAL_ALLOC *)((char *)v15 - 56) != a3 )
        {
          v16 = (_QWORD **)((char *)v15 - 16);
          v17 = *v16;
          if ( *v16 != v16 )
          {
            do
            {
              v18 = *(_QWORD *)(*(v17 - 4) + 32LL);
              VidSchiMarkDeviceAsError(v18, 13);
              VidSchSuspendResumeDevice(v18, 1, 0, 0);
              VidSchSuspendResumeDevice(v18, 0, 0, 0);
              v17 = (_QWORD *)*v17;
            }
            while ( v17 != v16 );
            v14 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296);
          }
        }
        v15 = *(struct _VIDMM_GLOBAL_ALLOC **)v15;
      }
      while ( v15 != v14 );
      v9 = this;
    }
    VidMmRecordAlloc(v9, (__int64)a2, (__int64)a3, *((_QWORD *)a2 + 17), *((_QWORD *)a2 + 2), 0);
    VidMmRecordAlloc(v9, (__int64)a2, (__int64)v6, *((_QWORD *)a2 + 17), *((_QWORD *)a2 + 2), 1);
    *((_DWORD *)a2 + 19) |= 0x20000000u;
    v6 = 0LL;
    *((_DWORD *)a2 + 20) ^= (*((_DWORD *)a2 + 20) ^ *(_DWORD *)(*((_QWORD *)a2 + 17) + 20LL)) & 0x1F;
  }
  else if ( bTracingEnabled )
  {
    if ( v6 )
      v5 = *(_DWORD *)(*((_QWORD *)v6 + 1) + 8LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    {
      v19 = *(unsigned int *)(*((_QWORD *)a3 + 1) + 8LL);
      Template_pqq(v19, &EventTransferAllocationOwnership, (__int64)a3, a2, v19, v5);
    }
  }
  return v6;
}
