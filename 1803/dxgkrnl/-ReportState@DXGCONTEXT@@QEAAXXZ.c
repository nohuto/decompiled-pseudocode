/*
 * XREFs of ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1C0172CC8
 * Callers:
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C018BE04 (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z @ 0x1C002C9E4 (-VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?VidMmReportDmaPoolState@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DMA_POOL@@@Z @ 0x1C002CA60 (-VidMmReportDmaPoolState@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DMA_POOL@@@Z.c)
 *     McTemplateK0ppp @ 0x1C002CACC (McTemplateK0ppp.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C002CB50 (McTemplateK0pqqqqqqqqppp.c)
 */

void __fastcall DXGCONTEXT::ReportState(DXGCONTEXT *this, __int64 a2, __int64 a3)
{
  struct VIDMM_DMA_POOL *v4; // rdx
  __int64 v5; // rcx
  __int64 *i; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v9; // [rsp+80h] [rbp-28h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v9 = *((_OWORD *)this + 12);
    McTemplateK0pqqqqqqqqppp(
      DWORD1(v9),
      &EventReportContext,
      v9,
      *((_QWORD *)this + 2),
      *((_DWORD *)this + 88),
      *((_DWORD *)this + 89),
      (_DWORD)v9,
      DWORD1(v9),
      DWORD2(v9),
      HIDWORD(v9),
      (unsigned int)*((_OWORD *)this + 13),
      0,
      this,
      *((unsigned int *)this + 6),
      0LL);
  }
  v4 = (struct VIDMM_DMA_POOL *)*((_QWORD *)this + 28);
  if ( v4 )
    VIDMM_EXPORT::VidMmReportDmaPoolState(*(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL), v4);
  if ( (*((_DWORD *)this + 91) & 0x10) != 0 )
  {
    v5 = *((_QWORD *)this + 32);
    if ( v5 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppp(v5, &EventAssociateContext, a3, this, v5, *((_QWORD *)this + 23));
    if ( *((_QWORD *)this + 33) )
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL) + 288LL))();
    for ( i = (__int64 *)*((_QWORD *)this + 46); i != (__int64 *)((char *)this + 368) && i; i = (__int64 *)*i )
    {
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ppp(*((unsigned int *)i + 6), &EventReportHwQueue, a3, i[2], *((unsigned int *)i + 6), i);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(i[2] + 16) + 16LL) + 520LL) + 8LL)
                                      + 288LL))(i[5]);
    }
  }
  else if ( *((_QWORD *)this + 29) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL) + 280LL))();
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppp(v7, &EventAssociateContext, v8, this, *((_QWORD *)this + 29), *((_QWORD *)this + 23));
  }
  if ( !*((_BYTE *)this + 401) )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGCONTEXT *)((char *)this + 272));
    VIDMM_EXPORT::VidMmReportContextAllocList(
      *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL),
      *((struct DXGDEVICE **)this + 2),
      (struct _LIST_ENTRY *)((char *)this + 296));
    *((_QWORD *)this + 35) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 272, 0LL);
    KeLeaveCriticalRegion();
  }
}
