/*
 * XREFs of ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C0182514
 * Callers:
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C01825E8 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     DxgkDestroyClientAllocation @ 0x1C0184098 (DxgkDestroyClientAllocation.c)
 *     ?DrainClientAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C019CC7C (-DrainClientAllocations@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003944 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x1C001D47C (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0082468 (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyClientAllocations(PERESOURCE *this, struct DXGALLOCATION *a2)
{
  struct DXGALLOCATION *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  struct _LIST_ENTRY *Blink; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(this[13]);
  if ( a2 )
  {
    do
    {
      v4 = (struct DXGALLOCATION *)*((_QWORD *)a2 + 8);
      ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences((ADAPTER_RENDER *)this, a2, 0LL);
      if ( (*((_DWORD *)a2 + 18) & 1) != 0 )
      {
        v7 = *((_QWORD *)a2 + 10);
        Blink = this[2][5].SystemResourcesList.Blink;
        Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
        DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v11, Current);
        ((void (__fastcall *)(__int64))Blink->Blink[17].Blink)(v7);
        if ( v11 )
        {
          v10 = v11 + 136;
          *(_QWORD *)(v11 + 144) = 0LL;
          ExReleasePushLockExclusiveEx(v10, 0LL);
          KeLeaveCriticalRegion();
        }
        *((_DWORD *)a2 + 18) &= ~1u;
      }
      DXGALLOCATION::`scalar deleting destructor'(a2);
      a2 = v4;
    }
    while ( v4 );
  }
}
