/*
 * XREFs of ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C0188ABC
 * Callers:
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0173ECC (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000738C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000E010 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z @ 0x1C0025D7C (-VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z.c)
 *     Template_ppqpttq @ 0x1C0034E3C (Template_ppqpttq.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1C0183CC4 (-ReportState@DXGCONTEXT@@QEAAXXZ.c)
 *     ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C01889AC (-ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 *     ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C0188A18 (-ReportDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::ReportState(DXGDEVICE *this, __int64 a2, __int64 a3, __int64 a4)
{
  DXGCONTEXT *i; // rbx
  __int64 v6; // rsi
  __int64 v7; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v9; // rcx
  struct DXGALLOCATION *j; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _BYTE v14[32]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15; // [rsp+80h] [rbp+8h] BYREF

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    Template_ppqpttq(
      (__int64)this,
      &EventReportDevice,
      *((unsigned __int8 *)this + 1817),
      *(_QWORD *)(*((_QWORD *)this + 5) + 56LL),
      *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
      *((_DWORD *)this + 82),
      this,
      *((unsigned __int8 *)this + 1817),
      *((unsigned __int8 *)this + 1818),
      *((_DWORD *)this + 83));
  for ( i = (DXGCONTEXT *)*((_QWORD *)this + 43); i != (DXGDEVICE *)((char *)this + 344) && i; i = *(DXGCONTEXT **)i )
    DXGCONTEXT::ReportState(i);
  v6 = *((_QWORD *)this + 74);
  if ( v6 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 432LL);
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this);
    DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v15, Current);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v7 + 8) + 56LL))(v6);
    if ( v15 )
    {
      v9 = v15 + 112;
      *(_QWORD *)(v15 + 120) = 0LL;
      ExReleasePushLockExclusiveEx(v9, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  if ( *((_QWORD *)this + 75) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 408LL) + 8LL) + 128LL))();
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v14,
    (struct _KTHREAD **)this + 20,
    a3,
    a4);
  for ( j = (struct DXGALLOCATION *)*((_QWORD *)this + 6); j; j = (struct DXGALLOCATION *)*((_QWORD *)j + 8) )
    DXGDEVICE::ReportAllocationState(this, j, 1);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  DXGDEVICE::ReportDeviceResources((struct _KTHREAD **)this, v11, v12, v13);
  if ( !*((_BYTE *)this + 1821) )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 608));
    VIDMM_EXPORT::VidMmReportContextAllocList(
      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 432LL),
      this,
      (struct _LIST_ENTRY *)((char *)this + 632));
    *((_QWORD *)this + 77) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 608, 0LL);
    KeLeaveCriticalRegion();
  }
}
