/*
 * XREFs of ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0016BF4
 * Callers:
 *     DxgkRender @ 0x1C0099050 (DxgkRender.c)
 *     DxgkSetContextInProcessSchedulingPriority @ 0x1C0099CC0 (DxgkSetContextInProcessSchedulingPriority.c)
 *     DxgkGetContextSchedulingPriority @ 0x1C009CE20 (DxgkGetContextSchedulingPriority.c)
 *     DxgkPresent @ 0x1C00C8F20 (DxgkPresent.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00E71E0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00F5360 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C00FC0D0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 *     DxgkSetContextSchedulingPriority @ 0x1C010E060 (DxgkSetContextSchedulingPriority.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C016D3D0 (DxgkUpdateGpuVirtualAddress.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE@@I@Z @ 0x1C016EE00 (-DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE@@I@Z.c)
 *     ?DxgkPresentVirtualFrameBuffer@@YAJII_KIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C016F800 (-DxgkPresentVirtualFrameBuffer@@YAJII_KIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@I@Z @ 0x1C017B554 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017BE90 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017C130 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1C018E5A0 (DxgkGetContextInProcessSchedulingPriority.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0195B0C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkCreateHwQueue @ 0x1C01A50E0 (DxgkCreateHwQueue.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C01B2984 (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESO.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C01CB188 (-OutputDuplPreIndirectPresent@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVDXGPROCESS@@PEAPEAVDXGADAPT.c)
 *     OutputDuplPresent @ 0x1C01CD6F8 (OutputDuplPresent.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C01DB5A0 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C01DBC00 (DxgkPresentMultiPlaneOverlay2.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C01DC260 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 */

DXGCONTEXTBYHANDLE *__fastcall DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
        DXGCONTEXTBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGCONTEXT **a4,
        bool a5)
{
  DXGPUSHLOCK *v5; // rdi
  __int64 v10; // rax
  struct _KTHREAD *v11; // r8
  int v12; // ecx
  __int64 v13; // rdx
  struct DXGCONTEXT *v14; // rax
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  __int64 v18; // rax
  _BYTE v19[8]; // [rsp+20h] [rbp-28h] BYREF
  char *v20; // [rsp+28h] [rbp-20h]
  int v21; // [rsp+30h] [rbp-18h]

  v5 = (DXGPUSHLOCK *)(a3 + 26);
  v20 = (char *)(a3 + 26);
  if ( a3 != (struct _KTHREAD **)-208LL && a3[27] == KeGetCurrentThread() )
  {
    v18 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v18 + 24) = 1306LL;
    WdLogEvent5_WdAssertion(v18);
  }
  DXGPUSHLOCK::AcquireShared(v5);
  v21 = 1;
  v10 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v10 < *((_DWORD *)a3 + 62)
    && (v11 = a3[29],
        v12 = *((_DWORD *)v11 + 4 * v10 + 2),
        ((a2 >> 25) & 0x60) == (*((_BYTE *)v11 + 16 * v10 + 8) & 0x60))
    && (v12 & 0x2000) == 0
    && (v12 & 0x1F) == 7 )
  {
    v13 = *((_QWORD *)v11 + 2 * (unsigned int)v10);
  }
  else
  {
    v13 = 0LL;
  }
  v14 = (struct DXGCONTEXT *)v13;
  *((_BYTE *)this + 8) = a5;
  *(_QWORD *)this = v13;
  if ( v13 && !a5 )
  {
    _m_prefetchw((const void *)(v13 + 32));
    v15 = *(_QWORD *)(v13 + 32);
    while ( v15 )
    {
      v16 = v15;
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 32), v15 + 1, v15);
      if ( v16 == v15 )
      {
        v14 = *(struct DXGCONTEXT **)this;
        goto LABEL_15;
      }
    }
    *(_QWORD *)this = 0LL;
    v14 = 0LL;
  }
LABEL_15:
  *a4 = v14;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  return this;
}
