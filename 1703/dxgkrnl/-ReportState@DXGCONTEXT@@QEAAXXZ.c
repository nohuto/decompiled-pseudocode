/*
 * XREFs of ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1C0183CC4
 * Callers:
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C0188ABC (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z @ 0x1C0025D7C (-VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?VidMmReportDmaPoolState@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DMA_POOL@@@Z @ 0x1C0025DF4 (-VidMmReportDmaPoolState@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DMA_POOL@@@Z.c)
 *     Template_pqqqqqqqqppp @ 0x1C0025E5C (Template_pqqqqqqqqppp.c)
 */

void __fastcall DXGCONTEXT::ReportState(DXGCONTEXT *this)
{
  struct VIDMM_DMA_POOL *v2; // rdx
  __int128 v3; // [rsp+80h] [rbp-28h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v3 = *((_OWORD *)this + 12);
    Template_pqqqqqqqqppp(
      DWORD1(v3),
      &EventReportContext,
      v3,
      *((_QWORD *)this + 2),
      *((_DWORD *)this + 84),
      *((_DWORD *)this + 85),
      (_DWORD)v3,
      DWORD1(v3),
      DWORD2(v3),
      HIDWORD(v3),
      (unsigned int)*((_OWORD *)this + 13),
      0,
      this,
      *((unsigned int *)this + 6),
      0LL);
  }
  v2 = (struct VIDMM_DMA_POOL *)*((_QWORD *)this + 28);
  if ( v2 )
    VIDMM_EXPORT::VidMmReportDmaPoolState(*(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL), v2);
  if ( *((_QWORD *)this + 29) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL) + 8LL) + 232LL))();
  if ( !*((_BYTE *)this + 369) )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGCONTEXT *)((char *)this + 256));
    VIDMM_EXPORT::VidMmReportContextAllocList(
      *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
      *((struct DXGDEVICE **)this + 2),
      (struct _LIST_ENTRY *)((char *)this + 280));
    *((_QWORD *)this + 33) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 256, 0LL);
    KeLeaveCriticalRegion();
  }
}
