/*
 * XREFs of ?DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z @ 0x1C009FF30
 * Callers:
 *     ?VmBusDestroyPagingQueue@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D0E0 (-VmBusDestroyPagingQueue@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z @ 0x1C009FF10 (-DxgkCddDestroyPagingQueue@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@@Z.c)
 *     DxgkDestroyPagingQueue @ 0x1C009FF20 (DxgkDestroyPagingQueue.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006F28 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C00134E0 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyPagingQueueInternal(struct D3DDDI_DESTROYPAGINGQUEUE *a1, int a2, __int64 a3)
{
  struct D3DDDI_DESTROYPAGINGQUEUE *p_hPagingQueue; // rbx
  struct DXGPROCESS *Current; // r14
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rsi
  DXGPAGINGQUEUE *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rax
  __int64 v24; // r8
  _BYTE v25[32]; // [rsp+28h] [rbp-20h] BYREF
  D3DKMT_HANDLE hPagingQueue; // [rsp+58h] [rbp+10h] BYREF

  p_hPagingQueue = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2118);
  hPagingQueue = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)p_hPagingQueue >= MmUserProbeAddress )
      p_hPagingQueue = (struct D3DDDI_DESTROYPAGINGQUEUE *)MmUserProbeAddress;
    hPagingQueue = p_hPagingQueue->hPagingQueue;
    p_hPagingQueue = (struct D3DDDI_DESTROYPAGINGQUEUE *)&hPagingQueue;
  }
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v25, Current, v6, v7);
  v10 = p_hPagingQueue->hPagingQueue;
  v11 = (p_hPagingQueue->hPagingQueue >> 6) & 0xFFFFFF;
  if ( (unsigned int)v11 < *((_DWORD *)Current + 52)
    && (v12 = *((_QWORD *)Current + 24),
        v9 = *(unsigned int *)(v12 + 16LL * (unsigned int)v11 + 8),
        v8 = ((unsigned int)v10 >> 26) & 0x30,
        (((unsigned int)v10 >> 26) & 0x30) == (*(_BYTE *)(v12 + 16LL * (unsigned int)v11 + 8) & 0x30))
    && (v9 & 0x1000) == 0
    && (v9 & 0xF) != 0
    && (v8 = 2LL * (unsigned int)v11, (*(_BYTE *)(v12 + 16LL * (unsigned int)v11 + 8) & 0xF) == 0xA)
    && (v13 = *(DXGPAGINGQUEUE **)(v12 + 16LL * (unsigned int)v11)) != 0LL )
  {
    v14 = ((unsigned int)v10 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v14 < *((_DWORD *)Current + 52) )
    {
      v15 = *((_QWORD *)Current + 24);
      v16 = *(_DWORD *)(v15 + 16 * v14 + 8);
      if ( (((unsigned int)v10 >> 26) & 0x30) == (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x30)
        && (v16 & 0x1000) == 0
        && (v16 & 0xF) != 0 )
      {
        *(_DWORD *)(v15 + 16 * (((unsigned __int64)(unsigned int)v10 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
    DXGPAGINGQUEUE::ReleaseReference(v13, v17, v18, v19);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v20, &EventProfilerExit, v21, 2118);
    return 0LL;
  }
  else
  {
    v23 = WdLogNewEntry5_WdWarning(v8, v11, v9, v10);
    *(_QWORD *)(v23 + 24) = p_hPagingQueue->hPagingQueue;
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v23);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(qword_1C006E790, &EventProfilerExit, v24, 2118);
    return 3221225485LL;
  }
}
