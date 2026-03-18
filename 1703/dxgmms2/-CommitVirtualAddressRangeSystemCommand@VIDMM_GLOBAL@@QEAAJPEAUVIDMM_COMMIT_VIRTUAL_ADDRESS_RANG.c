/*
 * XREFs of ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00573C0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0057614 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C230 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x1C001E69C (--_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C00530B0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053290 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006D1A0 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
        VIDMM_GLOBAL *this,
        struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *a2,
        struct VIDMM_ALLOC **a3)
{
  unsigned int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  __int64 **v13; // rcx
  unsigned int v14; // eax
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 **v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v20; // r15
  __int64 v21; // rbp
  int v22; // esi
  struct _MDL *FullMDL; // rcx
  int v24; // r9d
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // r9d
  __int64 v28; // rax

  *a3 = 0LL;
  v5 = 0;
  v6 = *(_QWORD *)a2 + 56LL;
  if ( *(_QWORD *)a2 != -56LL && *(struct _KTHREAD **)(*(_QWORD *)a2 + 64LL) == KeGetCurrentThread() )
  {
    v26 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v26 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v26);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v6, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v27 = *(_DWORD *)(v6 + 16);
      if ( v27 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v8, &EventBlockThread, v9, v27);
    }
    ExAcquirePushLockExclusiveEx(v6, 0LL);
  }
  *(_QWORD *)(v6 + 8) = KeGetCurrentThread();
  v10 = *((_QWORD *)a2 + 3);
  if ( !v10 || **(_QWORD **)(v10 + 16) && **((_QWORD **)a2 + 1) )
  {
    v11 = *((_QWORD *)a2 + 1);
    v12 = (int)(*(_DWORD *)(v11 + 64) << 28) >> 28;
    switch ( v12 )
    {
      case 1:
        v13 = *(__int64 ***)(v11 + 56);
        if ( (*((_DWORD *)v13 + 7) & 3) == 2 )
        {
          v20 = *(_QWORD *)(v11 + 72);
          v21 = **v13;
          v22 = *(_DWORD *)(*(_QWORD *)(v21 + 136) + 80LL) & 0x1001;
          if ( v22 )
          {
            FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v21, 0LL);
          }
          else
          {
            v20 += *(_QWORD *)(v21 + 144);
            FullMDL = 0LL;
          }
          if ( v22 )
          {
            v24 = 0;
          }
          else
          {
            v25 = *(_QWORD *)(v21 + 136);
            if ( (*(_DWORD *)(v25 + 80) & 0x1000) != 0 )
              v24 = 0;
            else
              v24 = *(_DWORD *)(v25 + 16) + 1;
          }
          v14 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                  *(CVirtualAddressAllocator **)a2,
                  *((struct VIDMM_MAPPED_VA_RANGE **)a2 + 1),
                  *(_DWORD *)(v21 + 76) & 0x3F,
                  v24,
                  v20,
                  FullMDL,
                  1u,
                  a3);
        }
        else
        {
          v14 = CVirtualAddressAllocator::UncommitVirtualAddressRange(
                  *(CVirtualAddressAllocator **)a2,
                  (struct VIDMM_MAPPED_VA_RANGE *)v11,
                  a3,
                  1);
        }
        goto LABEL_11;
      case 2:
        v14 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                *(CVirtualAddressAllocator **)a2,
                (struct VIDMM_MAPPED_VA_RANGE *)v11,
                0,
                0,
                0LL,
                *((struct _MDL **)a2 + 2),
                1u,
                a3);
LABEL_11:
        v5 = v14;
        break;
      case 6:
        v14 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                *(CVirtualAddressAllocator **)a2,
                (struct VIDMM_MAPPED_VA_RANGE *)v11,
                0,
                -2,
                0LL,
                0LL,
                1u,
                a3);
        goto LABEL_11;
    }
  }
  else
  {
    v28 = WdLogNewEntry5_WdWarning(v8, v7);
    WdLogEvent5_WdWarning(v28);
  }
  if ( v5 == -1073741267 && *((_BYTE *)a2 + 32) )
    goto LABEL_50;
  v15 = (__int64 *)*((_QWORD *)a2 + 3);
  if ( v15 )
  {
    v16 = *v15;
    if ( *v15 )
    {
      v17 = (__int64 **)v15[1];
      if ( *(__int64 **)(v16 + 8) != v15 || *v17 != v15 )
        __fastfail(3u);
      *v17 = (__int64 *)v16;
      *(_QWORD *)(v16 + 8) = v17;
      *v15 = 0LL;
      v15[1] = 0LL;
    }
    v18 = *((_QWORD *)a2 + 1);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 128), 0xFFFFFFFF) == 1 && v18 )
      VIDMM_MAPPED_VA_RANGE::`scalar deleting destructor'((_QWORD *)v18);
    operator delete(*((void **)a2 + 3));
    *((_QWORD *)a2 + 3) = 0LL;
    *(_QWORD *)a2 = 0LL;
    *((_QWORD *)a2 + 1) = 0LL;
  }
  if ( v5 == -1073741267 )
  {
LABEL_50:
    if ( !*((_BYTE *)a2 + 32) )
      v5 = -1073741823;
  }
  *(_QWORD *)(v6 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v6, 0LL);
  KeLeaveCriticalRegion();
  return v5;
}
