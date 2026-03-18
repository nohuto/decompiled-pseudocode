/*
 * XREFs of ?VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1C0022F6C
 * Callers:
 *     ?DisableTransitionalPrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0170BD4 (-DisableTransitionalPrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PE.c)
 *     ?UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0189268 (-UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000E010 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall VIDMM_EXPORT::VidMmIsAllocationInPresentQueue(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        unsigned int *a4)
{
  struct _KTHREAD **Current; // rax
  char v9; // al
  __int64 v10; // rcx
  char v11; // bl
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v13, Current);
  v9 = (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, struct _VIDMM_MULTI_ALLOC *, unsigned int *))(*((_QWORD *)this + 1) + 688LL))(
         a2,
         a3,
         a4);
  v10 = v13;
  v11 = v9;
  if ( v13 )
  {
    *(_QWORD *)(v13 + 120) = 0LL;
    ExReleasePushLockExclusiveEx(v10 + 112, 0LL);
    KeLeaveCriticalRegion();
  }
  return v11;
}
