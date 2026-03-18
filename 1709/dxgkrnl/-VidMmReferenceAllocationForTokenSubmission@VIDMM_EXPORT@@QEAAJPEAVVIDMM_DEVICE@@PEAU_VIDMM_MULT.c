/*
 * XREFs of ?VidMmReferenceAllocationForTokenSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C000F660
 * Callers:
 *     ?PrepareIndependentFlipToken@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00CBE30 (-PrepareIndependentFlipToken@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003944 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmReferenceAllocationForTokenSubmission(
        VIDMM_EXPORT *this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        struct VIDMM_ALLOC **a4,
        struct VIDMM_GLOBAL *a5)
{
  struct _KTHREAD **Current; // rax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v13, Current);
  v10 = (*(__int64 (__fastcall **)(struct VIDMM_DEVICE *, struct _VIDMM_MULTI_ALLOC *, struct VIDMM_ALLOC **, struct VIDMM_GLOBAL *))(*((_QWORD *)this + 1) + 416LL))(
          a2,
          a3,
          a4,
          a5);
  if ( v13 )
  {
    v11 = v13 + 136;
    *(_QWORD *)(v13 + 144) = 0LL;
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
  }
  return v10;
}
