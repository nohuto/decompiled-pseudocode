/*
 * XREFs of ?VidMmInitDevice@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C000DC0C
 * Callers:
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C00C89B8 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000E010 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmInitDevice(VIDMM_EXPORT *this, struct VIDMM_DEVICE *a2)
{
  struct DXGPROCESS *Current; // rax
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v9, Current);
  v5 = (*(__int64 (__fastcall **)(struct VIDMM_DEVICE *))(*((_QWORD *)this + 1) + 392LL))(a2);
  v6 = v9;
  v7 = v5;
  if ( v9 )
  {
    *(_QWORD *)(v9 + 120) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 112, 0LL);
    KeLeaveCriticalRegion();
  }
  return v7;
}
