/*
 * XREFs of ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0052CB0
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C005EE20 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C00025FC (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0013DE4 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x1C001E69C (--_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00519B0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0057320 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 */

void __fastcall CVirtualAddressAllocator::FreeAllocMappedVaRangeList(struct _KTHREAD **this, struct VIDMM_ALLOC *a2)
{
  char *v3; // rsi
  __int64 v5; // rcx
  __int64 v6; // r8
  volatile signed __int32 **v7; // rbx
  volatile signed __int32 *v8; // r15
  __int64 v9; // rax
  volatile signed __int32 *v10; // rcx
  volatile signed __int32 *v11; // r14
  __int64 v12; // rbp
  volatile signed __int32 *v13; // r8
  __int64 v14; // rdx
  volatile signed __int32 **v15; // rax
  __int64 v16; // rdx
  int v17; // ecx
  __int64 **VidMmAllocFromOwner; // rax
  __int64 v19; // r8
  _QWORD *v20; // r12
  volatile signed __int32 **v21; // rcx
  __int64 **v22; // rsi
  __int64 *v23; // rdi
  __int64 *v24; // rax
  __int64 *v25; // rdx
  __int64 **v26; // rcx
  __int64 *v27; // rax
  int v28; // ecx
  __int64 *v29; // r14
  __int64 v30; // rax
  int v31; // r9d
  __int64 *v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rdx
  _QWORD *v35; // rax
  __int64 *v36; // rdx
  __int64 **v37; // rcx
  __int64 VidMmGlobalAllocFromOwner; // rbx
  __int64 *v39; // rdx
  __int64 **v40; // rax
  __int64 *v41; // [rsp+30h] [rbp-38h] BYREF
  volatile signed __int32 *v42; // [rsp+38h] [rbp-30h]

  v42 = (volatile signed __int32 *)&v41;
  v3 = (char *)(this + 7);
  v41 = (__int64 *)&v41;
  if ( this != (struct _KTHREAD **)-56LL && this[8] == KeGetCurrentThread() )
  {
    v30 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v30 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v30);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v3, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v31 = *((_DWORD *)v3 + 4);
      if ( v31 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v5, &EventBlockThread, v6, v31);
    }
    ExAcquirePushLockExclusiveEx(v3, 0LL);
  }
  v7 = (volatile signed __int32 **)((char *)a2 + 128);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  while ( *v7 != (volatile signed __int32 *)v7 )
  {
    v8 = *v7;
    v9 = *(_QWORD *)*v7;
    if ( *((volatile signed __int32 ***)*v7 + 1) != v7 || *(volatile signed __int32 **)(v9 + 8) != v8 )
      __fastfail(3u);
    *v7 = (volatile signed __int32 *)v9;
    *(_QWORD *)(v9 + 8) = v7;
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)v8 + 1) = 0LL;
    _InterlockedIncrement(v8 + 26);
    v10 = v8 - 4;
    v11 = v8 - 6;
    v12 = *((_QWORD *)v8 - 3);
    v13 = v8 - 4;
    if ( *(volatile signed __int32 **)(v12 + 24LL * ((*((_DWORD *)v8 + 10) >> 4) & 0x3F) + 112) == v13 )
      *(_QWORD *)(v12 + 24LL * ((*((_DWORD *)v8 + 10) >> 4) & 0x3F) + 112) = 0LL;
    v14 = *(_QWORD *)v10;
    v15 = (volatile signed __int32 **)*((_QWORD *)v10 + 1);
    if ( *(volatile signed __int32 **)(*(_QWORD *)v10 + 8LL) != v10 || *v15 != v10 )
      __fastfail(3u);
    *v15 = (volatile signed __int32 *)v14;
    *(_QWORD *)(v14 + 8) = v15;
    v16 = *((_QWORD *)v11 + 7);
    v17 = (int)(*((_DWORD *)v11 + 16) << 28) >> 28;
    *(_QWORD *)v13 = 0LL;
    VidMmAllocFromOwner = (__int64 **)GetVidMmAllocFromOwner(v17, v16);
    if ( VidMmAllocFromOwner )
    {
      if ( *(_QWORD *)v8 )
      {
        v19 = *(_QWORD *)v8;
        v32 = (__int64 *)*((_QWORD *)v11 + 4);
        if ( *(volatile signed __int32 **)(*(_QWORD *)v8 + 8LL) != v8 || (volatile signed __int32 *)*v32 != v8 )
          __fastfail(3u);
        *v32 = v19;
        *(_QWORD *)(v19 + 8) = v32;
        *(_QWORD *)v8 = 0LL;
      }
      v20 = v11 + 10;
      if ( *((_QWORD *)v11 + 5) )
      {
        v33 = **VidMmAllocFromOwner;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v33 + 352, 0LL);
        v34 = *v20;
        v35 = (_QWORD *)*((_QWORD *)v11 + 6);
        if ( *(_QWORD **)(*v20 + 8LL) != v20 || (_QWORD *)*v35 != v20 )
          __fastfail(3u);
        *v35 = v34;
        *(_QWORD *)(v34 + 8) = v35;
        *v20 = 0LL;
        ExReleasePushLockExclusiveEx(v33 + 352, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    --*(_DWORD *)(v12 + 76);
    *(_QWORD *)v11 = 0LL;
    if ( _InterlockedExchangeAdd(v11 + 32, 0xFFFFFFFF) == 1 )
      VIDMM_MAPPED_VA_RANGE::`scalar deleting destructor'((_QWORD *)v8 - 3);
    if ( (*(_BYTE *)(v12 + 72) & 0xF) == 3 && !*(_DWORD *)(v12 + 76) )
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
        (CVirtualAddressAllocator *)this,
        (struct VIDMM_VAD *)v12,
        v19);
    v21 = (volatile signed __int32 **)v42;
    if ( *(__int64 ***)v42 != &v41 )
      __fastfail(3u);
    *((_QWORD *)v8 + 1) = v42;
    *(_QWORD *)v8 = &v41;
    *v21 = v8;
    v42 = v8;
  }
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  v22 = (__int64 **)v41;
  if ( v41 != (__int64 *)&v41 )
  {
    do
    {
      v23 = (__int64 *)(v22 - 3);
      if ( ((_DWORD)v22[5] & 0xC00) != 0 )
      {
        VIDMM_GLOBAL::UncommitVirtualAddressRange(
          this[10],
          (struct CVirtualAddressAllocator *)this,
          (struct VIDMM_MAPPED_VA_RANGE *)(v22 - 3),
          KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this[10] + 8LL),
          0LL);
        *((_DWORD *)v23 + 16) &= 0xFFFFF3FF;
      }
      v22 = (__int64 **)*v22;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v23 + 32, 0xFFFFFFFF) == 1 )
      {
        v24 = v23 + 3;
        if ( v23[3] )
        {
          v25 = (__int64 *)*v24;
          v26 = (__int64 **)v23[4];
          if ( *(__int64 **)(*v24 + 8) != v24 || *v26 != v24 )
            __fastfail(3u);
          *v26 = v25;
          v25[1] = (__int64)v26;
          *v24 = 0LL;
        }
        v27 = v23 + 1;
        if ( v23[1] )
        {
          v36 = (__int64 *)*v27;
          v37 = (__int64 **)v23[2];
          if ( *(__int64 **)(*v27 + 8) != v27 || *v37 != v27 )
            __fastfail(3u);
          *v37 = v36;
          v36[1] = (__int64)v37;
          *v27 = 0LL;
        }
        v28 = *((_DWORD *)v23 + 16);
        if ( (v28 & 0x1000) == 0 )
        {
          v29 = v23 + 5;
          if ( v23[5] )
          {
            VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v28 << 28 >> 28, v23[7]);
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 352, 0LL);
            v39 = (__int64 *)*v29;
            v40 = (__int64 **)v23[6];
            if ( *(__int64 **)(*v29 + 8) != v29 || *v40 != v29 )
              __fastfail(3u);
            *v40 = v39;
            v39[1] = (__int64)v40;
            *v29 = 0LL;
            ExReleasePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 352, 0LL);
            KeLeaveCriticalRegion();
          }
        }
        operator delete(v23);
      }
    }
    while ( v22 != &v41 );
  }
}
