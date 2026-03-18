/*
 * XREFs of ?ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007A5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005720 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00057D8 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0060FAC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00653C0 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0079BF4 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C007A6B4 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::ReleaseTemporaryResource(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3)
{
  struct _VIDMM_GLOBAL_ALLOC *v3; // rdi
  VIDMM_GLOBAL *v5; // rbx
  struct _MDL *MDLForRange; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rax

  v3 = a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v10[3] = *((_QWORD *)v3 + 31);
    a3 = *((int *)v3 + 65);
    v10[4] = a3;
    a2 = (struct _VIDMM_GLOBAL_ALLOC *)*((unsigned int *)v3 + 64);
    v10[5] = a2;
  }
  if ( *((_QWORD *)v3 + 29) || *((_QWORD *)v3 + 30) )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v11[7] = 0LL;
    v11[3] = 270LL;
    v11[4] = 27LL;
    v11[5] = v3;
    v11[6] = this;
    WdLogEvent5_WdCriticalError(v11);
  }
  VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), v3);
  VIDMM_GLOBAL::FlushScratchGpuVaRanges(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v3 + 40));
  (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)this + 64LL))(this, v3);
  if ( *((_BYTE *)v3 + 289) )
  {
    v5 = *(VIDMM_GLOBAL **)this;
    MDLForRange = VidMmGetMDLForRange(v3, *((_QWORD *)v3 + 34), *((_QWORD *)v3 + 35));
    (*((void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *))v5 + 15))(
      this,
      v3,
      *((_QWORD *)v3 + 34),
      *((_QWORD *)v3 + 35),
      MDLForRange);
    LOBYTE(v7) = 1;
    (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64))(*(_QWORD *)this + 104LL))(
      this,
      v3,
      v7);
  }
  *((_QWORD *)v3 + 31) = 0LL;
  *((_QWORD *)v3 + 33) = 0LL;
  VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), v3);
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v3 + 40), v8, v9);
}
