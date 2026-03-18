/*
 * XREFs of ?ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0174230
 * Callers:
 *     DxgkResumeMemorySegments @ 0x1C0174F08 (DxgkResumeMemorySegments.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000E010 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00CCF24 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?PageInAllDevices@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0173D34 (-PageInAllDevices@ADAPTER_RENDER@@AEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::ResumeMemorySegments(ADAPTER_RENDER *this)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  struct _KTHREAD **Current; // rax
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 55);
  v3 = *((_QWORD *)this + 54);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this);
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v9, Current);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 8) + 104LL))(v1);
  v6 = v9;
  v7 = v5;
  if ( v9 )
  {
    *(_QWORD *)(v9 + 120) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 112, 0LL);
    KeLeaveCriticalRegion();
  }
  ADAPTER_RENDER::PageInAllDevices(this);
  ADAPTER_RENDER::FlushScheduler((__int64)this, 7, 0xFFFFFFFF, 1);
  return v7;
}
