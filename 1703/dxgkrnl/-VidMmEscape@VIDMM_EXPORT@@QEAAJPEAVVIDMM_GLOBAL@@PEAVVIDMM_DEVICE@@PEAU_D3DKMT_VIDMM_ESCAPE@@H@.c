/*
 * XREFs of ?VidMmEscape@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C00382EC
 * Callers:
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000E010 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmEscape(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_DEVICE *a3,
        struct _D3DKMT_VIDMM_ESCAPE *a4,
        unsigned int a5)
{
  struct _KTHREAD **Current; // rax
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v14, Current);
  v10 = (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, struct VIDMM_DEVICE *, struct _D3DKMT_VIDMM_ESCAPE *, _QWORD))(*((_QWORD *)this + 1) + 40LL))(
          a2,
          a3,
          a4,
          a5);
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
