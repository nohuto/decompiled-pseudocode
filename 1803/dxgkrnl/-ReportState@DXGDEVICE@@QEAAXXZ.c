/*
 * XREFs of ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C018BE04
 * Callers:
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C015B94C (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006078 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z @ 0x1C002C9E4 (-VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z.c)
 *     McTemplateK0ppqpttq @ 0x1C002F9E0 (McTemplateK0ppqpttq.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1C0172CC8 (-ReportState@DXGCONTEXT@@QEAAXXZ.c)
 *     ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C018BC34 (-ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 *     ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C018BCA0 (-ReportDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C018BD44 (-ReportDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::ReportState(DXGDEVICE *this, __int64 a2, __int64 a3)
{
  DXGCONTEXT *i; // rbx
  __int64 v5; // rsi
  __int64 v6; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v8; // rcx
  struct DXGALLOCATION *j; // rbx
  _BYTE v10[32]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v11; // [rsp+80h] [rbp+8h] BYREF

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0ppqpttq(
      (__int64)this,
      &EventReportDevice,
      *((unsigned __int8 *)this + 1705),
      *(_QWORD *)(*((_QWORD *)this + 5) + 64LL),
      *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
      *((_DWORD *)this + 82),
      this,
      *((unsigned __int8 *)this + 1705),
      *((unsigned __int8 *)this + 1706),
      *((_DWORD *)this + 83));
  for ( i = (DXGCONTEXT *)*((_QWORD *)this + 45); i != (DXGDEVICE *)((char *)this + 360) && i; i = *(DXGCONTEXT **)i )
    DXGCONTEXT::ReportState(i, a2, a3);
  v5 = *((_QWORD *)this + 76);
  if ( v5 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 544LL);
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this, a2);
    DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v11, Current);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v6 + 8) + 56LL))(v5);
    if ( v11 )
    {
      v8 = v11 + 144;
      *(_QWORD *)(v11 + 152) = 0LL;
      ExReleasePushLockExclusiveEx(v8, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  if ( *((_QWORD *)this + 77) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 520LL) + 8LL) + 128LL))();
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v10, (struct _KTHREAD **)this + 20);
  for ( j = (struct DXGALLOCATION *)*((_QWORD *)this + 6); j; j = (struct DXGALLOCATION *)*((_QWORD *)j + 8) )
    DXGDEVICE::ReportAllocationState(this, j, 1);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  DXGDEVICE::ReportDeviceResources((struct _KTHREAD **)this);
  DXGDEVICE::ReportDeviceSyncObjects(this);
  if ( (*((_BYTE *)this + 1709) & 1) == 0 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 624));
    VIDMM_EXPORT::VidMmReportContextAllocList(
      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
      this,
      (struct _LIST_ENTRY *)((char *)this + 648));
    *((_QWORD *)this + 79) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 624, 0LL);
    KeLeaveCriticalRegion();
  }
}
