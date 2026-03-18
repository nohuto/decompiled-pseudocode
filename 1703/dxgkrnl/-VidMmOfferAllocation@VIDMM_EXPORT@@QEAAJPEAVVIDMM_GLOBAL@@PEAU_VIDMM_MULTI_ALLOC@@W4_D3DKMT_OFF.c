/*
 * XREFs of ?VidMmOfferAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C0013BA0
 * Callers:
 *     ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z @ 0x1C00C3A10 (-OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000E010 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmOfferAllocation(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        unsigned int a4,
        struct _D3DKMT_OFFER_FLAGS a5)
{
  struct _KTHREAD **Current; // rax
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v14, Current);
  v10 = (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, struct _VIDMM_MULTI_ALLOC *, _QWORD, _QWORD))(*((_QWORD *)this + 1) + 664LL))(
          a2,
          a3,
          a4,
          a5.Value);
  v11 = v14;
  v12 = v10;
  if ( v14 )
  {
    *(_QWORD *)(v14 + 120) = 0LL;
    ExReleasePushLockExclusiveEx(v11 + 112, 0LL);
    KeLeaveCriticalRegion();
  }
  return v12;
}
