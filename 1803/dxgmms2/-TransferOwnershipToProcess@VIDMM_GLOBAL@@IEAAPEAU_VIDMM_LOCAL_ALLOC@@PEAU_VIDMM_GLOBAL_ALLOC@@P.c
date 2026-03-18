/*
 * XREFs of ?TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1C006BD44
 * Callers:
 *     ?TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C006BF5C (-TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z.c)
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0005984 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     VidSchSuspendResumeDevice @ 0x1C0012590 (VidSchSuspendResumeDevice.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0012DA4 (VidSchiMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     McTemplateK0pqq @ 0x1C00244A0 (McTemplateK0pqq.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C005345C (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
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
  __int64 v10; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  struct _VIDMM_GLOBAL_ALLOC *v15; // rax
  struct _VIDMM_GLOBAL_ALLOC *v16; // r14
  _QWORD **v17; // r13
  _QWORD *v18; // r12
  __int64 v19; // rbx
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-80h] BYREF

  v4 = *((_QWORD *)a2 + 17);
  v5 = 0;
  v6 = (struct _VIDMM_LOCAL_ALLOC *)a4;
  v9 = this;
  if ( v4
    && (*(_DWORD *)(v4 + 80) & 0x1001) != 0
    && *((int *)a2 + 87) > 0
    && (KeStackAttachProcess(*a4[1], &ApcState),
        v12 = (int)VIDMM_GLOBAL::TransferProbeAndLockToNewProcess(v9, a3, v6),
        KeUnstackDetachProcess(&ApcState),
        (int)v12 < 0) )
  {
    _InterlockedIncrement(&dword_1C0047564);
    v14 = (_QWORD *)WdLogNewEntry5_WdLowResource(v13);
    v14[3] = a2;
    v14[4] = *((_QWORD *)a2 + 1);
    v14[5] = v12;
    WdLogEvent5_WdLowResource(v14);
    v15 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296);
    v16 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 37);
    if ( v16 != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296) )
    {
      do
      {
        if ( (struct _VIDMM_GLOBAL_ALLOC *)((char *)v16 - 56) != a3 )
        {
          v17 = (_QWORD **)((char *)v16 - 16);
          v18 = *v17;
          if ( *v17 != v17 )
          {
            do
            {
              v19 = *(_QWORD *)(*(v18 - 4) + 32LL);
              VidSchiMarkDeviceAsError(v19, 13);
              VidSchSuspendResumeDevice(v19, 1, 0, 0);
              VidSchSuspendResumeDevice(v19, 0, 0, 0);
              v18 = (_QWORD *)*v18;
            }
            while ( v18 != v17 );
            v15 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296);
          }
        }
        v16 = *(struct _VIDMM_GLOBAL_ALLOC **)v16;
      }
      while ( v16 != v15 );
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
    if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    {
      v10 = *(unsigned int *)(*((_QWORD *)a3 + 1) + 8LL);
      McTemplateK0pqq(v10, &EventTransferAllocationOwnership, (__int64)a3, a2, v10, v5);
    }
  }
  return v6;
}
