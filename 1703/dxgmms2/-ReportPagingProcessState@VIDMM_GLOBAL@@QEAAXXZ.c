/*
 * XREFs of ?ReportPagingProcessState@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0094E18
 * Callers:
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0094F98 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     Template_ppqqpx @ 0x1C001499C (Template_ppqqpx.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 */

void __fastcall VIDMM_GLOBAL::ReportPagingProcessState(VIDMM_GLOBAL *this)
{
  __int64 i; // rdi
  __int64 v3; // r8
  __int64 v4; // [rsp+28h] [rbp-80h]
  __int64 v5; // [rsp+30h] [rbp-78h]
  _QWORD v6[10]; // [rsp+50h] [rbp-58h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1604); i = (unsigned int)(i + 1) )
  {
    memset(v6, 0, sizeof(v6));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v5) = HIDWORD(v6[0]);
      LODWORD(v4) = 4;
      Template_ppqqpx(
        LODWORD(v6[9]),
        &EventReportMonitoredFence,
        v3,
        *((_QWORD *)this + 3),
        *((_QWORD *)this + i + 738),
        v4,
        v5,
        LODWORD(v6[9]),
        v6[1]);
    }
  }
  VIDMM_DEVICE::ReportState(*((VIDMM_DEVICE **)this + 5041));
}
