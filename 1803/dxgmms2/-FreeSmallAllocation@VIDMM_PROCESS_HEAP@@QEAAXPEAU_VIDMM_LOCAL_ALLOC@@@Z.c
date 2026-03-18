/*
 * XREFs of ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00B9010
 * Callers:
 *     ?Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00B8C80 (-Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005720 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00057D8 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ExFreeToPagedLookasideList @ 0x1C0025884 (ExFreeToPagedLookasideList.c)
 *     McTemplateK0qpxp @ 0x1C0025DB8 (McTemplateK0qpxp.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00543D0 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1C00B8EA8 (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::FreeSmallAllocation(
        VIDMM_PROCESS_HEAP *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        __int64 a3)
{
  __int64 v4; // rbx
  VIDMM_PROCESS_HEAP *v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // r9
  void *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a2 + 3);
  v5 = this;
  if ( g_IsInternalReleaseOrDbg )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    a3 = *(_QWORD *)(v4 + 56);
    v6[3] = a3;
    v6[4] = *(_QWORD *)(v4 + 16);
    this = *(VIDMM_PROCESS_HEAP **)(v4 + 8);
    v6[5] = this;
  }
  if ( *(_BYTE *)(v4 + 72) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v7[7] = 0LL;
    v7[3] = 270LL;
    v7[4] = 21LL;
    v7[5] = v5;
    v7[6] = v4;
    WdLogEvent5_WdCriticalError(v7);
  }
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v5 + 2));
  v9 = *(void **)(v4 + 32);
  if ( v9 )
  {
    MmUnsecureVirtualMemory(v9);
    *(_QWORD *)(v4 + 32) = 0LL;
  }
  v10 = *(_QWORD *)(v4 + 8);
  if ( *(_DWORD *)(v10 + 24) != 1 )
  {
    if ( *(_QWORD *)(v10 + 56) || *(_QWORD *)(v10 + 88) )
    {
      LOBYTE(v8) = 1;
      (*(void (__fastcall **)(VIDMM_PROCESS_HEAP *, _QWORD, __int64, __int64))(*(_QWORD *)v5 + 120LL))(
        v5,
        *(_QWORD *)a2,
        v4,
        v8);
    }
    else
    {
      BaseAddress = (PVOID)(*(_QWORD *)(v4 + 16) + *(_QWORD *)(v10 + 32));
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, (PSIZE_T)(v4 + 56), 0x4000u);
    }
  }
  VIDMM_LINEAR_POOL::Free(*(VIDMM_LINEAR_POOL **)(*(_QWORD *)(v4 + 8) + 72LL), *(struct _VIDMM_POOL_BLOCK **)(v4 + 24));
  *(_QWORD *)(*((_QWORD *)v5 + 1) + 128LL) -= *(_QWORD *)(v4 + 56);
  v12 = *((_QWORD *)v5 + 1);
  v13 = *(_DWORD *)(*(_QWORD *)(v4 + 8) + 80LL);
  v14 = *(_QWORD *)(v4 + 56);
  if ( v13 == 1 )
  {
    *(_QWORD *)(v12 + 152) -= v14;
  }
  else if ( v13 == 2 )
  {
    *(_QWORD *)(v12 + 168) -= v14;
  }
  else
  {
    *(_QWORD *)(v12 + 184) -= v14;
  }
  --*(_DWORD *)(*(_QWORD *)(v4 + 8) + 24LL);
  if ( bTracingEnabled )
  {
    v12 = *(_QWORD *)(v4 + 8);
    v15 = (unsigned int)(*(_DWORD *)(v12 + 80) - 3) > 3 ? *(_QWORD *)(v12 + 32) : *(_QWORD *)(v12 + 88);
    if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      McTemplateK0qpxp(
        *((_QWORD *)v5 + 1),
        &EventDestroyProcessAllocationDetails,
        v11,
        *(_DWORD *)(*((_QWORD *)v5 + 1) + 8LL),
        v4,
        *(_QWORD *)(v4 + 56),
        v15);
  }
  v16 = *(_QWORD *)(v4 + 8);
  if ( !*(_DWORD *)(v16 + 24) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v12) + 24) = *(_QWORD *)(v4 + 8);
      v16 = *(_QWORD *)(v4 + 8);
    }
    VIDMM_PROCESS_HEAP::FreeBlock(v5, (struct _VIDMM_PROCESS_HEAP_BLOCK *)v16);
  }
  ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)v5 + 64), (PVOID)v4);
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v5 + 2), v17, v18);
}
