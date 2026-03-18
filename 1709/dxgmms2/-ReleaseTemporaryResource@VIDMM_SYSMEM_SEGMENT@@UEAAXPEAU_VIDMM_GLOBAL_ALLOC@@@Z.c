/*
 * XREFs of ?ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004D5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002440 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00024F4 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005C818 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005D1C4 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0060FE8 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::ReleaseTemporaryResource(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3)
{
  struct _VIDMM_GLOBAL_ALLOC *v3; // rbx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // rax
  _QWORD *v9; // rax

  v3 = a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v8[3] = *((_QWORD *)v3 + 31);
    a3 = *((int *)v3 + 65);
    v8[4] = a3;
    a2 = (struct _VIDMM_GLOBAL_ALLOC *)*((unsigned int *)v3 + 64);
    v8[5] = a2;
  }
  if ( *((_QWORD *)v3 + 29) || *((_QWORD *)v3 + 30) )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v9[7] = 0LL;
    v9[3] = 270LL;
    v9[4] = 27LL;
    v9[5] = v3;
    v9[6] = this;
    WdLogEvent5_WdCriticalError(v9);
  }
  VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), v3);
  VIDMM_GLOBAL::FlushScratchGpuVaRanges(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v3 + 40));
  (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)this + 64LL))(this, v3);
  if ( *((_BYTE *)v3 + 289) )
  {
    LOBYTE(v5) = 1;
    (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64))(*(_QWORD *)this + 104LL))(
      this,
      v3,
      v5);
  }
  *((_QWORD *)v3 + 31) = 0LL;
  *((_QWORD *)v3 + 33) = 0LL;
  VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), v3);
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v3 + 40), v6, v7);
}
