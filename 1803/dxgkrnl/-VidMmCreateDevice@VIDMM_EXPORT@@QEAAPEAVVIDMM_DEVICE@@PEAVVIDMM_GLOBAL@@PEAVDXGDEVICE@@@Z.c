/*
 * XREFs of ?VidMmCreateDevice@VIDMM_EXPORT@@QEAAPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C0006BF4
 * Callers:
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C00F0990 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006078 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

struct VIDMM_DEVICE *__fastcall VIDMM_EXPORT::VidMmCreateDevice(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct DXGDEVICE *a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v10, Current);
  v7 = (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, struct DXGDEVICE *))(*((_QWORD *)this + 1) + 384LL))(a2, a3);
  if ( v10 )
  {
    v8 = v10 + 144;
    *(_QWORD *)(v10 + 152) = 0LL;
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
  }
  return (struct VIDMM_DEVICE *)v7;
}
