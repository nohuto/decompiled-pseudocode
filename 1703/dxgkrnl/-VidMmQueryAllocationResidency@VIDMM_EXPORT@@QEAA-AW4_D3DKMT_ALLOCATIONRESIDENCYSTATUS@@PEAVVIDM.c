/*
 * XREFs of ?VidMmQueryAllocationResidency@VIDMM_EXPORT@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C000DE0C
 * Callers:
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C00C40DC (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000E010 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmQueryAllocationResidency(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct _VIDMM_MULTI_ALLOC *a3)
{
  struct DXGPROCESS *Current; // rax
  unsigned int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v11, Current);
  v7 = (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, struct _VIDMM_MULTI_ALLOC *))(*((_QWORD *)this + 1) + 176LL))(
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
