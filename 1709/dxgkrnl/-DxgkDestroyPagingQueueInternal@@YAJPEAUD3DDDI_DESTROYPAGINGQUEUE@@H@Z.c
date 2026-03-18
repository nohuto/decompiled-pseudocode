/*
 * XREFs of ?DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z @ 0x1C00F309C
 * Callers:
 *     ?DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z @ 0x1C00F3060 (-DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z.c)
 *     DxgkDestroyPagingQueue @ 0x1C00F3080 (DxgkDestroyPagingQueue.c)
 *     ?VmBusDestroyPagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0192DF0 (-VmBusDestroyPagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0014274 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyPagingQueueInternal(struct D3DDDI_DESTROYPAGINGQUEUE *a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  struct D3DDDI_DESTROYPAGINGQUEUE *p_hPagingQueue; // rdi
  struct DXGPROCESS *Current; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  D3DKMT_HANDLE v8; // r14d
  __int64 v9; // rcx
  unsigned int v10; // r12d
  int v11; // r11d
  DXGPAGINGQUEUE *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // r8
  _BYTE v18[48]; // [rsp+28h] [rbp-30h] BYREF
  D3DKMT_HANDLE hPagingQueue; // [rsp+68h] [rbp+10h] BYREF

  v3 = a2;
  p_hPagingQueue = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2118);
  hPagingQueue = 0;
  if ( v3 )
  {
    a1 = (struct D3DDDI_DESTROYPAGINGQUEUE *)MmUserProbeAddress;
    if ( (unsigned __int64)p_hPagingQueue >= MmUserProbeAddress )
      p_hPagingQueue = (struct D3DDDI_DESTROYPAGINGQUEUE *)MmUserProbeAddress;
    hPagingQueue = p_hPagingQueue->hPagingQueue;
    p_hPagingQueue = (struct D3DDDI_DESTROYPAGINGQUEUE *)&hPagingQueue;
  }
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v18, Current);
  v8 = p_hPagingQueue->hPagingQueue;
  v9 = (p_hPagingQueue->hPagingQueue >> 6) & 0xFFFFFF;
  v10 = *((_DWORD *)Current + 60);
  if ( (unsigned int)v9 < v10
    && (v6 = *((_QWORD *)Current + 28),
        v7 = *(unsigned int *)(v6 + 16LL * (unsigned int)v9 + 8),
        v11 = (*(_DWORD *)(v6 + 16LL * (unsigned int)v9 + 8) >> 5) & 3,
        v8 >> 30 == v11)
    && (v7 & 0x2000) == 0
    && (v7 &= 0x1Fu, (_DWORD)v7)
    && (*(_BYTE *)(v6 + 16LL * (unsigned int)v9 + 8) & 0x1F) == 0xA
    && (v12 = *(DXGPAGINGQUEUE **)(v6 + 16LL * (unsigned int)v9)) != 0LL )
  {
    if ( (unsigned int)v9 < v10 && v8 >> 30 == v11 )
      *(_DWORD *)(v6 + 16LL * ((v8 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18);
    DXGPAGINGQUEUE::ReleaseReference(v12);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v13, &EventProfilerExit, v14, 2118);
    return 0LL;
  }
  else
  {
    v16 = WdLogNewEntry5_WdWarning(v9, v6, v7);
    *(_QWORD *)(v16 + 24) = p_hPagingQueue->hPagingQueue;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v16);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(qword_1C005F010, &EventProfilerExit, v17, 2118);
    return 3221225485LL;
  }
}
