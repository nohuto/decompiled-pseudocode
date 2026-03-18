/*
 * XREFs of ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0008CE8
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C0085D50 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0086FA0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     DxgkPresent @ 0x1C00BD0B0 (DxgkPresent.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z @ 0x1C00E9300 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N44@Z.c)
 *     DxgkGetContextSchedulingPriority @ 0x1C00F1EB0 (DxgkGetContextSchedulingPriority.c)
 *     DxgkSetContextInProcessSchedulingPriority @ 0x1C00F5F40 (DxgkSetContextInProcessSchedulingPriority.c)
 *     DxgkSetContextSchedulingPriority @ 0x1C00F7F40 (DxgkSetContextSchedulingPriority.c)
 *     ?DxgkPresentVirtualFrameBuffer@@YAJIIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C011DA40 (-DxgkPresentVirtualFrameBuffer@@YAJIIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C01854C0 (DxgkUpdateGpuVirtualAddress.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z @ 0x1C0186EE0 (-DxgkCddPresent@@YAJPEAU_D3DKMT_PRESENT@@I@Z.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@I@Z @ 0x1C01900A8 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01908C0 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0190B60 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1C01A0580 (DxgkGetContextInProcessSchedulingPriority.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C01A4544 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkCreateHwQueue @ 0x1C01AD050 (DxgkCreateHwQueue.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C01B6B50 (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESO.c)
 *     DxgkRender @ 0x1C01BDFB0 (DxgkRender.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C01C8034 (-OutputDuplPreIndirectPresent@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVDXGPROCESS@@PEAPEAVDXGADAPT.c)
 *     OutputDuplPresent @ 0x1C01CA16C (OutputDuplPresent.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C01D3010 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C01D3630 (DxgkPresentMultiPlaneOverlay2.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C01D3B60 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 */

DXGCONTEXTBYHANDLE *__fastcall DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
        DXGCONTEXTBYHANDLE *this,
        unsigned int a2,
        struct DXGPROCESS *a3,
        struct DXGCONTEXT **a4,
        bool a5)
{
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v16, a3);
  v9 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 < *((_DWORD *)a3 + 60)
    && (v10 = *((_QWORD *)a3 + 28),
        v11 = *(_DWORD *)(v10 + 16 * v9 + 8),
        ((a2 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16 * v9 + 8) & 0x60))
    && (v11 & 0x2000) == 0
    && (v11 & 0x1F) != 0
    && (*(_BYTE *)(v10 + 16LL * (unsigned int)v9 + 8) & 0x1F) == 7 )
  {
    v12 = *(_QWORD *)(v10 + 16LL * (unsigned int)v9);
  }
  else
  {
    v12 = 0LL;
  }
  *((_BYTE *)this + 8) = a5;
  *(_QWORD *)this = v12;
  if ( v12 && !a5 )
  {
    _m_prefetchw((const void *)(v12 + 32));
    v13 = *(_QWORD *)(v12 + 32);
    while ( v13 )
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 32), v13 + 1, v13);
      if ( v14 == v13 )
        goto LABEL_12;
    }
    *(_QWORD *)this = 0LL;
  }
LABEL_12:
  *a4 = *(struct DXGCONTEXT **)this;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return this;
}
