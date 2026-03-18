/*
 * XREFs of ?VidMmInitDevice@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C0006C78
 * Callers:
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C00F0990 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006078 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmInitDevice(VIDMM_EXPORT *this, struct VIDMM_DEVICE *a2)
{
  struct _KTHREAD **Current; // rax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v8, Current);
  v5 = (*(__int64 (__fastcall **)(struct VIDMM_DEVICE *))(*((_QWORD *)this + 1) + 392LL))(a2);
  if ( v8 )
  {
    v6 = v8 + 144;
    *(_QWORD *)(v8 + 152) = 0LL;
    ExReleasePushLockExclusiveEx(v6, 0LL);
    KeLeaveCriticalRegion();
  }
  return v5;
}
