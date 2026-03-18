/*
 * XREFs of ?VidMmIsAllocationCPUVisible@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C000DE88
 * Callers:
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C9C30 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000E010 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall VIDMM_EXPORT::VidMmIsAllocationCPUVisible(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct _VIDMM_MULTI_GLOBAL_ALLOC *a3)
{
  struct DXGPROCESS *Current; // rax
  char v7; // al
  __int64 v8; // rcx
  char v9; // bl
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v11, Current);
  v7 = (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, struct _VIDMM_MULTI_GLOBAL_ALLOC *))(*((_QWORD *)this + 1)
                                                                                            + 184LL))(
         a2,
         a3);
  v8 = v11;
  v9 = v7;
  if ( v11 )
  {
    *(_QWORD *)(v11 + 120) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 112, 0LL);
    KeLeaveCriticalRegion();
  }
  return v9;
}
