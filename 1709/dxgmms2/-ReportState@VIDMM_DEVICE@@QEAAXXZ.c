/*
 * XREFs of ?ReportState@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00A08E0
 * Callers:
 *     VidMmReportVidMmDeviceState @ 0x1C0020D50 (VidMmReportVidMmDeviceState.c)
 *     ?ReportPagingProcessState@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009CC94 (-ReportPagingProcessState@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001820 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013B00 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     McTemplateK0pq @ 0x1C0021ADC (McTemplateK0pq.c)
 *     ?ReportState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C00A09CC (-ReportState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::ReportState(VIDMM_DEVICE *this)
{
  __int64 v1; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  VIDMM_DEVICE *i; // rdi
  __int64 j; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  _BYTE v10[40]; // [rsp+30h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
  {
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v10, (struct _KTHREAD **)(v1 + 360));
    for ( i = (VIDMM_DEVICE *)*((_QWORD *)this + 18); i != (VIDMM_DEVICE *)((char *)this + 144); i = *(VIDMM_DEVICE **)i )
    {
      if ( *((int *)i + 10) > 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        McTemplateK0pq(v3, &EventVidMmReportAllocationResidency, v4);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  }
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 15); j = (unsigned int)(j + 1) )
  {
    v7 = *((_QWORD *)this + 9);
    if ( v7 )
      VIDMM_DEVICE_PAGING_QUEUE::ReportState((VIDMM_DEVICE_PAGING_QUEUE *)(v7 + 160 * j));
    v8 = *((_QWORD *)this + 10);
    if ( v8 )
      VIDMM_DEVICE_PAGING_QUEUE::ReportState((VIDMM_DEVICE_PAGING_QUEUE *)(v8 + 160 * j));
    v9 = *((_QWORD *)this + 11);
    if ( v9 )
      VIDMM_DEVICE_PAGING_QUEUE::ReportState((VIDMM_DEVICE_PAGING_QUEUE *)(v9 + 160 * j));
  }
}
