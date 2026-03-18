/*
 * XREFs of ?VidMmEndCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z @ 0x1C0014A30
 * Callers:
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0094B50 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C01AD6FC (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003944 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmEndCPUAccess(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        unsigned int a4)
{
  struct _KTHREAD **Current; // rax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v12, Current);
  v9 = (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, struct _VIDMM_MULTI_ALLOC *, _QWORD, _QWORD, _QWORD))(*((_QWORD *)this + 1) + 264LL))(
         a2,
         a3,
         a4,
         0LL,
         0LL);
  if ( v12 )
  {
    v10 = v12 + 136;
    *(_QWORD *)(v12 + 144) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
  }
  return v9;
}
