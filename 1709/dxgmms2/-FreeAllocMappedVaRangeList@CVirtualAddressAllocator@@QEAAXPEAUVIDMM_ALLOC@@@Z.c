/*
 * XREFs of ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00547D0
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0060530 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0061B40 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0001AB8 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C00160F8 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x1C002041C (--_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0053510 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005A1A4 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 */

void __fastcall CVirtualAddressAllocator::FreeAllocMappedVaRangeList(struct _KTHREAD **this, struct VIDMM_ALLOC *a2)
{
  char *v3; // rsi
  __int64 v5; // rcx
  __int64 v6; // r8
  char *v7; // rdi
  __int64 **v8; // rsi
  __int64 *v9; // rbx
  __int64 *v10; // rax
  __int64 *v11; // rcx
  __int64 **v12; // rdx
  __int64 *v13; // rax
  int v14; // ecx
  __int64 *v15; // r14
  volatile signed __int32 *v16; // r15
  __int64 v17; // rax
  volatile signed __int32 *v18; // rcx
  volatile signed __int32 *v19; // r14
  __int64 v20; // r13
  volatile signed __int32 *v21; // r8
  __int64 v22; // rax
  volatile signed __int32 **v23; // rdx
  __int64 v24; // rdx
  int v25; // ecx
  __int64 **VidMmAllocFromOwner; // rax
  volatile signed __int32 **v27; // r8
  __int64 *v28; // r12
  volatile signed __int32 **v29; // rax
  int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 *v34; // rdx
  __int64 **v35; // rax
  __int64 *v36; // rcx
  __int64 **v37; // rdx
  __int64 VidMmGlobalAllocFromOwner; // rdi
  __int64 *v39; // rdx
  __int64 **v40; // rax
  __int64 *v41; // [rsp+30h] [rbp-38h] BYREF
  volatile signed __int32 *v42; // [rsp+38h] [rbp-30h]

  v42 = (volatile signed __int32 *)&v41;
  v3 = (char *)(this + 7);
  v41 = (__int64 *)&v41;
  if ( this != (struct _KTHREAD **)-56LL && this[8] == KeGetCurrentThread() )
  {
    v31 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v31 + 24) = 1214LL;
    WdLogEvent5_WdAssertion(v31);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v3, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v30 = *((_DWORD *)v3 + 4);
      if ( v30 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v5, (__int64)&EventBlockThread, v6, v30);
    }
    ExAcquirePushLockExclusiveEx(v3, 0LL);
  }
  v7 = (char *)a2 + 128;
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  while ( *(char **)v7 != v7 )
  {
    v16 = *(volatile signed __int32 **)v7;
    if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7
      || (v17 = *(_QWORD *)v16, *(volatile signed __int32 **)(*(_QWORD *)v16 + 8LL) != v16) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v7 = v17;
    *(_QWORD *)(v17 + 8) = v7;
    *(_QWORD *)v16 = 0LL;
    *((_QWORD *)v16 + 1) = 0LL;
    _InterlockedIncrement(v16 + 26);
    v18 = v16 - 4;
    v19 = v16 - 6;
    v20 = *((_QWORD *)v16 - 3);
    v21 = v16 - 4;
    if ( *(volatile signed __int32 **)(v20 + 24LL * ((*((_DWORD *)v16 + 10) >> 4) & 0x3F) + 112) == v21 )
      *(_QWORD *)(v20 + 24LL * ((*((_DWORD *)v16 + 10) >> 4) & 0x3F) + 112) = 0LL;
    v22 = *(_QWORD *)v18;
    if ( *(volatile signed __int32 **)(*(_QWORD *)v18 + 8LL) != v18
      || (v23 = (volatile signed __int32 **)*((_QWORD *)v18 + 1), *v23 != v18) )
    {
      __fastfail(3u);
    }
    *v23 = (volatile signed __int32 *)v22;
    *(_QWORD *)(v22 + 8) = v23;
    v24 = *((_QWORD *)v19 + 7);
    v25 = (int)(*((_DWORD *)v19 + 16) << 28) >> 28;
    *(_QWORD *)v21 = 0LL;
    VidMmAllocFromOwner = (__int64 **)GetVidMmAllocFromOwner(v25, v24);
    if ( VidMmAllocFromOwner )
    {
      if ( *(_QWORD *)v16 )
      {
        v32 = *(_QWORD *)v16;
        if ( *(volatile signed __int32 **)(*(_QWORD *)v16 + 8LL) != v16
          || (v27 = (volatile signed __int32 **)*((_QWORD *)v19 + 4), *v27 != v16) )
        {
          __fastfail(3u);
        }
        *v27 = (volatile signed __int32 *)v32;
        *(_QWORD *)(v32 + 8) = v27;
        *(_QWORD *)v16 = 0LL;
      }
      v28 = (__int64 *)(v19 + 10);
      if ( *((_QWORD *)v19 + 5) )
      {
        v33 = **VidMmAllocFromOwner;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v33 + 352, 0LL);
        v34 = (__int64 *)*v28;
        if ( *(__int64 **)(*v28 + 8) != v28 || (v35 = (__int64 **)*((_QWORD *)v19 + 6), *v35 != v28) )
          __fastfail(3u);
        *v35 = v34;
        v34[1] = (__int64)v35;
        *v28 = 0LL;
        ExReleasePushLockExclusiveEx(v33 + 352, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    --*(_DWORD *)(v20 + 76);
    *(_QWORD *)v19 = 0LL;
    if ( _InterlockedExchangeAdd(v19 + 32, 0xFFFFFFFF) == 1 )
      VIDMM_MAPPED_VA_RANGE::`scalar deleting destructor'((_QWORD *)v16 - 3);
    if ( (*(_BYTE *)(v20 + 72) & 0xF) == 3 && !*(_DWORD *)(v20 + 76) )
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
        (CVirtualAddressAllocator *)this,
        (struct VIDMM_VAD *)v20,
        (__int64)v27);
    v29 = (volatile signed __int32 **)v42;
    if ( *(__int64 ***)v42 != &v41 )
      __fastfail(3u);
    *((_QWORD *)v16 + 1) = v42;
    *(_QWORD *)v16 = &v41;
    *v29 = v16;
    v42 = v16;
  }
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  v8 = (__int64 **)v41;
  if ( v41 != (__int64 *)&v41 )
  {
    do
    {
      v9 = (__int64 *)(v8 - 3);
      if ( ((_DWORD)v8[5] & 0xC00) != 0 )
      {
        VIDMM_GLOBAL::UncommitVirtualAddressRange(
          this[10],
          (struct CVirtualAddressAllocator *)this,
          (struct VIDMM_MAPPED_VA_RANGE *)(v8 - 3),
          KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this[10] + 8LL),
          0LL);
        *((_DWORD *)v9 + 16) &= 0xFFFFF3FF;
      }
      v8 = (__int64 **)*v8;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 32, 0xFFFFFFFF) == 1 )
      {
        v10 = v9 + 3;
        if ( v9[3] )
        {
          v11 = (__int64 *)*v10;
          if ( *(__int64 **)(*v10 + 8) != v10 || (v12 = (__int64 **)v9[4], *v12 != v10) )
            __fastfail(3u);
          *v12 = v11;
          v11[1] = (__int64)v12;
          *v10 = 0LL;
        }
        v13 = v9 + 1;
        if ( v9[1] )
        {
          v36 = (__int64 *)*v13;
          if ( *(__int64 **)(*v13 + 8) != v13 || (v37 = (__int64 **)v9[2], *v37 != v13) )
            __fastfail(3u);
          *v37 = v36;
          v36[1] = (__int64)v37;
          *v13 = 0LL;
        }
        v14 = *((_DWORD *)v9 + 16);
        if ( (v14 & 0x1000) == 0 )
        {
          v15 = v9 + 5;
          if ( v9[5] )
          {
            VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v14 << 28 >> 28, v9[7]);
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 352, 0LL);
            v39 = (__int64 *)*v15;
            if ( *(__int64 **)(*v15 + 8) != v15 || (v40 = (__int64 **)v9[6], *v40 != v15) )
              __fastfail(3u);
            *v40 = v39;
            v39[1] = (__int64)v40;
            *v15 = 0LL;
            ExReleasePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 352, 0LL);
            KeLeaveCriticalRegion();
          }
        }
        operator delete(v9);
      }
    }
    while ( v8 != &v41 );
  }
}
