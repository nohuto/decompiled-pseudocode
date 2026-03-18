/*
 * XREFs of ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C019DE50
 * Callers:
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01779BC (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002E60 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003944 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z @ 0x1C00244BC (-VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z.c)
 *     McTemplateK0ppqpttq @ 0x1C0026108 (McTemplateK0ppqpttq.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1C0187EC4 (-ReportState@DXGCONTEXT@@QEAAXXZ.c)
 *     ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C019DC80 (-ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 *     ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C019DCEC (-ReportDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C019DD90 (-ReportDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::ReportState(DXGDEVICE *this, __int64 a2)
{
  DXGCONTEXT *i; // rbx
  __int64 v4; // rsi
  __int64 v5; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v7; // rcx
  struct DXGALLOCATION *j; // rbx
  _BYTE v9[32]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v10; // [rsp+80h] [rbp+8h] BYREF

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0ppqpttq(
      (__int64)this,
      &EventReportDevice,
      *((unsigned __int8 *)this + 1689),
      *(_QWORD *)(*((_QWORD *)this + 5) + 56LL),
      *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
      *((_DWORD *)this + 82),
      this,
      *((unsigned __int8 *)this + 1689),
      *((unsigned __int8 *)this + 1690),
      *((_DWORD *)this + 83));
  for ( i = (DXGCONTEXT *)*((_QWORD *)this + 43); i != (DXGDEVICE *)((char *)this + 344) && i; i = *(DXGCONTEXT **)i )
    DXGCONTEXT::ReportState(i);
  v4 = *((_QWORD *)this + 74);
  if ( v4 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 528LL);
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this, a2);
    DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v10, Current);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v5 + 8) + 56LL))(v4);
    if ( v10 )
    {
      v7 = v10 + 136;
      *(_QWORD *)(v10 + 144) = 0LL;
      ExReleasePushLockExclusiveEx(v7, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  if ( *((_QWORD *)this + 75) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 504LL) + 8LL) + 128LL))();
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v9, (struct _KTHREAD **)this + 20);
  for ( j = (struct DXGALLOCATION *)*((_QWORD *)this + 6); j; j = (struct DXGALLOCATION *)*((_QWORD *)j + 8) )
    DXGDEVICE::ReportAllocationState(this, j, 1);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  DXGDEVICE::ReportDeviceResources((struct _KTHREAD **)this);
  DXGDEVICE::ReportDeviceSyncObjects(this);
  if ( !*((_BYTE *)this + 1693) )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 608));
    VIDMM_EXPORT::VidMmReportContextAllocList(
      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 528LL),
      this,
      (struct _LIST_ENTRY *)((char *)this + 632));
    *((_QWORD *)this + 77) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 608, 0LL);
    KeLeaveCriticalRegion();
  }
}
