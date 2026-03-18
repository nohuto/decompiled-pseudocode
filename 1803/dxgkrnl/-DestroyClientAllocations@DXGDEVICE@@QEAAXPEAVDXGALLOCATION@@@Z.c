/*
 * XREFs of ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C016A6CC
 * Callers:
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C016A808 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     DxgkDestroyClientAllocation @ 0x1C016C1CC (DxgkDestroyClientAllocation.c)
 *     ?DrainClientAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C018A3C8 (-DrainClientAllocations@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006078 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x1C0023A24 (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A55E4 (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0182B40 (-VmBusSendDestroyAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXIIIIPEAPEAVDXGALLOCATION@@U_D3DDDIC.c)
 */

void __fastcall DXGDEVICE::DestroyClientAllocations(DXGDEVICE *this, struct DXGALLOCATION **a2)
{
  struct DXGALLOCATION *v4; // r15
  struct DXGALLOCATION *v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v11; // rcx
  struct DXGALLOCATION *v12; // [rsp+70h] [rbp+8h] BYREF
  __int64 v13; // [rsp+78h] [rbp+10h] BYREF

  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
  v12 = (struct DXGALLOCATION *)a2;
  if ( a2 )
  {
    v4 = (struct DXGALLOCATION *)a2;
    do
    {
      v5 = a2[8];
      ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences(this, (struct DXGALLOCATION *)a2, 0LL);
      if ( (*((_DWORD *)v4 + 18) & 1) != 0 )
      {
        v8 = *((_QWORD *)v4 + 10);
        v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 544LL);
        Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v7, v6);
        DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v13, Current);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v9 + 8) + 280LL))(v8);
        if ( v13 )
        {
          v11 = v13 + 144;
          *(_QWORD *)(v13 + 152) = 0LL;
          ExReleasePushLockExclusiveEx(v11, 0LL);
          KeLeaveCriticalRegion();
        }
        *((_DWORD *)v4 + 18) &= ~1u;
      }
      if ( (*((_BYTE *)this + 1709) & 1) != 0 )
      {
        if ( *((_DWORD *)a2 + 24) )
        {
          DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyAllocation(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4080LL),
            *(_DWORD *)(*((_QWORD *)this + 5) + 392LL),
            *((_DWORD *)this + 84),
            0,
            1u,
            &v12,
            (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1);
          *((_DWORD *)a2 + 24) = 0;
        }
      }
      DXGALLOCATION::`scalar deleting destructor'(v4);
      v12 = v5;
      a2 = (struct DXGALLOCATION **)v5;
      v4 = v5;
    }
    while ( v5 );
  }
}
