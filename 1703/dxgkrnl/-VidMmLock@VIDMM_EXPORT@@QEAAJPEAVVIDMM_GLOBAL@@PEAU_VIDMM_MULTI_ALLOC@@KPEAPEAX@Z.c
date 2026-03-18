/*
 * XREFs of ?VidMmLock@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0013AA0
 * Callers:
 *     DxgkLock2 @ 0x1C00CA6A0 (DxgkLock2.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000E010 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmLock(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct _VIDMM_MULTI_ALLOC *a3,
        __int64 a4,
        void **a5)
{
  struct _KTHREAD **Current; // rax
  unsigned int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v13, Current);
  v9 = (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, struct _VIDMM_MULTI_ALLOC *, _QWORD, void **))(*((_QWORD *)this + 1) + 808LL))(
         a2,
         a3,
         0LL,
         a5);
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
