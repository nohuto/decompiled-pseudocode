/*
 * XREFs of ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C017EC48
 * Callers:
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C017ED14 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     DxgkDestroyClientAllocation @ 0x1C017FFCC (DxgkDestroyClientAllocation.c)
 *     ?DrainClientAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C01873E8 (-DrainClientAllocations@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000E010 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x1C00201EC (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00CEC74 (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 */

void __fastcall DXGDEVICE::DestroyClientAllocations(PERESOURCE *this, struct DXGALLOCATION *a2)
{
  struct DXGALLOCATION *v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rdi
  POWNER_ENTRY OwnerTable; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v9; // rcx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

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
        v6 = *((_QWORD *)a2 + 10);
        OwnerTable = this[2][4].OwnerTable;
        Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5);
        DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v10, Current);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)&OwnerTable->0 + 280LL))(v6);
        if ( v10 )
        {
          v9 = v10 + 112;
          *(_QWORD *)(v10 + 120) = 0LL;
          ExReleasePushLockExclusiveEx(v9, 0LL);
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
