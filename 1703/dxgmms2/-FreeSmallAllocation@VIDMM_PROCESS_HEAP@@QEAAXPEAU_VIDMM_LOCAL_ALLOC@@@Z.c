/*
 * XREFs of ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00A80B0
 * Callers:
 *     ?Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00A7D30 (-Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00017C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ExFreeToPagedLookasideList @ 0x1C0020FC4 (ExFreeToPagedLookasideList.c)
 *     Template_qpxp @ 0x1C0021384 (Template_qpxp.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C004C1D4 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1C00A7F50 (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
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
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rcx
  bool v15; // zf
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a2 + 3);
  v5 = this;
  if ( g_IsInternalReleaseOrDbg )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v6[3] = *(_QWORD *)(v4 + 56);
    a3 = *(_QWORD *)(v4 + 16);
    v6[4] = a3;
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
  *(_QWORD *)(*((_QWORD *)v5 + 1) + 88LL) -= *(_QWORD *)(v4 + 56);
  v12 = *(_DWORD *)(*(_QWORD *)(v4 + 8) + 80LL);
  v13 = *(_QWORD *)(v4 + 56);
  if ( v12 == 1 )
  {
    v14 = *((_QWORD *)v5 + 1);
    *(_QWORD *)(v14 + 112) -= v13;
  }
  else
  {
    v15 = v12 == 2;
    v14 = *((_QWORD *)v5 + 1);
    if ( v15 )
      *(_QWORD *)(v14 + 128) -= v13;
    else
      *(_QWORD *)(v14 + 144) -= v13;
  }
  --*(_DWORD *)(*(_QWORD *)(v4 + 8) + 24LL);
  if ( bTracingEnabled )
  {
    v14 = *(_QWORD *)(v4 + 8);
    v16 = (unsigned int)(*(_DWORD *)(v14 + 80) - 3) > 3 ? *(_QWORD *)(v14 + 32) : *(_QWORD *)(v14 + 88);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      Template_qpxp(
        *((_QWORD *)v5 + 1),
        &EventDestroyProcessAllocationDetails,
        v11,
        *(_DWORD *)(*((_QWORD *)v5 + 1) + 8LL),
        v4,
        *(_QWORD *)(v4 + 56),
        v16);
  }
  if ( !*(_DWORD *)(*(_QWORD *)(v4 + 8) + 24LL) )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v14) + 24) = *(_QWORD *)(v4 + 8);
    VIDMM_PROCESS_HEAP::FreeBlock(v5, *(struct _VIDMM_PROCESS_HEAP_BLOCK **)(v4 + 8));
  }
  ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)v5 + 64), (PVOID)v4);
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v5 + 2), v17, v18);
}
