/*
 * XREFs of ?ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0177D20
 * Callers:
 *     DxgkResumeMemorySegments @ 0x1C01787C8 (DxgkResumeMemorySegments.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003944 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0083A38 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PageInAllDevices@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0177820 (-PageInAllDevices@ADAPTER_RENDER@@AEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::ResumeMemorySegments(ADAPTER_RENDER *this, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 67);
  v4 = *((_QWORD *)this + 66);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this, a2);
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v10, Current);
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v4 + 8) + 104LL))(v2);
  if ( v10 )
  {
    v8 = v10 + 136;
    *(_QWORD *)(v10 + 144) = 0LL;
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
  }
  ADAPTER_RENDER::PageInAllDevices(this, v6);
  ADAPTER_RENDER::FlushScheduler((__int64)this, 7, 0xFFFFFFFF, 1);
  return v7;
}
