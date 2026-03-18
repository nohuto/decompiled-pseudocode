/*
 * XREFs of ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C019DC80
 * Callers:
 *     ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C019DCEC (-ReportDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C019DE50 (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?VidMmReportMultiAlloc@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0026000 (-VidMmReportMultiAlloc@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?VidMmReportMultiGlobalAlloc@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAVDXGADAPTERALLOCATION@@PEAVDXGSHAREDRESOURCE@@@Z @ 0x1C002607C (-VidMmReportMultiGlobalAlloc@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAVDXGADAPTERALLOCATION@@PEAVDXG.c)
 */

void __fastcall DXGDEVICE::ReportAllocationState(DXGDEVICE *this, struct DXGALLOCATION *a2, int a3)
{
  struct DXGSHAREDRESOURCE *v3; // r9
  __int64 v6; // rax

  v3 = 0LL;
  if ( !*((_BYTE *)this + 1693) )
  {
    if ( a3 )
    {
      v6 = *((_QWORD *)a2 + 5);
      if ( v6 )
        v3 = *(struct DXGSHAREDRESOURCE **)(v6 + 56);
      VIDMM_EXPORT::VidMmReportMultiGlobalAlloc(
        *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 528LL),
        this,
        *((struct DXGADAPTERALLOCATION **)a2 + 6),
        v3);
    }
    VIDMM_EXPORT::VidMmReportMultiAlloc(*(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 528LL), this, a2);
  }
}
