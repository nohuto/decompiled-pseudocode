/*
 * XREFs of ?ReportState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C00A736C
 * Callers:
 *     ?ReportState@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A7284 (-ReportState@VIDMM_DEVICE@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0ppqqpx @ 0x1C0016530 (McTemplateK0ppqqpx.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 */

void __fastcall VIDMM_DEVICE_PAGING_QUEUE::ReportState(VIDMM_DEVICE_PAGING_QUEUE *this)
{
  __int64 v1; // rdi
  __int64 v3; // r8
  int v4; // [rsp+28h] [rbp-80h]
  int v5; // [rsp+30h] [rbp-78h]
  _QWORD v6[10]; // [rsp+50h] [rbp-58h] BYREF

  v1 = *((_QWORD *)this + 19);
  if ( v1 )
  {
    memset(v6, 0, sizeof(v6));
    if ( bTracingEnabled )
    {
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v5 = HIDWORD(v6[0]);
        v4 = 4;
        McTemplateK0ppqqpx(
          **((_QWORD **)this + 17),
          (__int64)&EventReportMonitoredFence,
          v3,
          *(_QWORD *)(**((_QWORD **)this + 17) + 24LL),
          v1,
          v4,
          v5,
          0LL,
          v6[1]);
      }
    }
  }
}
