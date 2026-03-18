/*
 * XREFs of ?VidMmReportMultiGlobalAlloc@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAVDXGADAPTERALLOCATION@@PEAVDXGSHAREDRESOURCE@@@Z @ 0x1C002F954
 * Callers:
 *     ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C018BC34 (-ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006078 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall VIDMM_EXPORT::VidMmReportMultiGlobalAlloc(
        VIDMM_EXPORT *this,
        struct DXGDEVICE *a2,
        struct DXGADAPTERALLOCATION *a3,
        struct DXGSHAREDRESOURCE *a4)
{
  struct _KTHREAD **Current; // rax
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v10, Current);
  (*(void (__fastcall **)(struct DXGDEVICE *, struct DXGADAPTERALLOCATION *, struct DXGSHAREDRESOURCE *))(*((_QWORD *)this + 1) + 584LL))(
    a2,
    a3,
    a4);
  if ( v10 )
  {
    v9 = v10 + 144;
    *(_QWORD *)(v10 + 152) = 0LL;
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
  }
}
