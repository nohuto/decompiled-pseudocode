/*
 * XREFs of ?SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0174658
 * Callers:
 *     DxgkSuspendMemorySegments @ 0x1C0174F6C (DxgkSuspendMemorySegments.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000E010 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00CCF24 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::SuspendMemorySegments(ADAPTER_RENDER *this)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rax
  int v6; // eax
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  ADAPTER_RENDER::FlushScheduler((__int64)this, 6, 0xFFFFFFFF, 1);
  v2 = *((_QWORD *)this + 55);
  v3 = *((_QWORD *)this + 54);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v10, Current);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 8) + 96LL))(v2);
  v7 = v10;
  v8 = v6;
  if ( v10 )
  {
    *(_QWORD *)(v10 + 120) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 112, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v8 < 0 )
    ADAPTER_RENDER::FlushScheduler((__int64)this, 7, 0xFFFFFFFF, 1);
  return (unsigned int)v8;
}
