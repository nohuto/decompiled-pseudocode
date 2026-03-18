/*
 * XREFs of ?DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z @ 0x1C00A006C
 * Callers:
 *     ?DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z @ 0x1C009D480 (-DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z.c)
 *     DxgkDestroyPagingQueue @ 0x1C00A0050 (DxgkDestroyPagingQueue.c)
 *     ?VmBusDestroyPagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017EF20 (-VmBusDestroyPagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00153C4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C001A250 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyPagingQueueInternal(struct D3DDDI_DESTROYPAGINGQUEUE *a1, int a2, __int64 a3)
{
  struct D3DDDI_DESTROYPAGINGQUEUE *p_hPagingQueue; // rbx
  struct DXGPROCESS *Current; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  D3DKMT_HANDLE v8; // r11d
  __int64 v9; // rcx
  unsigned int v10; // r15d
  int v11; // r14d
  DXGPAGINGQUEUE *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // [rsp+28h] [rbp-40h] BYREF
  __int64 v20; // [rsp+30h] [rbp-38h]
  _BYTE v21[24]; // [rsp+38h] [rbp-30h] BYREF
  D3DKMT_HANDLE hPagingQueue; // [rsp+78h] [rbp+10h] BYREF

  p_hPagingQueue = a1;
  v20 = 0LL;
  v19 = 2118;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2118);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v19, 2118);
  hPagingQueue = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)p_hPagingQueue >= MmUserProbeAddress )
      p_hPagingQueue = (struct D3DDDI_DESTROYPAGINGQUEUE *)MmUserProbeAddress;
    hPagingQueue = p_hPagingQueue->hPagingQueue;
    p_hPagingQueue = (struct D3DDDI_DESTROYPAGINGQUEUE *)&hPagingQueue;
  }
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v21,
    (struct _KTHREAD **)Current);
  v8 = p_hPagingQueue->hPagingQueue;
  v9 = (p_hPagingQueue->hPagingQueue >> 6) & 0xFFFFFF;
  v10 = *((_DWORD *)Current + 62);
  if ( (unsigned int)v9 < v10
    && (v7 = *((_QWORD *)Current + 29),
        v6 = *(unsigned int *)(v7 + 16LL * (unsigned int)v9 + 8),
        v11 = (*(_DWORD *)(v7 + 16LL * (unsigned int)v9 + 8) >> 5) & 3,
        v8 >> 30 == v11)
    && (v6 & 0x2000) == 0
    && (v6 & 0x1F) != 0
    && (v6 &= 0x1Fu, (_BYTE)v6 == 10)
    && (v12 = *(DXGPAGINGQUEUE **)(v7 + 16LL * (unsigned int)v9)) != 0LL )
  {
    if ( (unsigned int)v9 < v10 && v8 >> 30 == v11 && (*(_DWORD *)(v7 + 16LL * (unsigned int)v9 + 8) & 0x1F) != 0 )
      *(_DWORD *)(v7 + 16LL * ((v8 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
    DXGPAGINGQUEUE::ReleaseReference(v12);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v13, &EventProfilerExit, v14, v19);
    return 0LL;
  }
  else
  {
    v16 = WdLogNewEntry5_WdWarning(v9, v6, v7);
    *(_QWORD *)(v16 + 24) = p_hPagingQueue->hPagingQueue;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v16);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v17, &EventProfilerExit, v18, v19);
    return 3221225485LL;
  }
}
