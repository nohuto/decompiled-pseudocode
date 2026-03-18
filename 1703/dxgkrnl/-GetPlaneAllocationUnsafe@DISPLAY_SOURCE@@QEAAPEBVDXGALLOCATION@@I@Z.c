/*
 * XREFs of ?GetPlaneAllocationUnsafe@DISPLAY_SOURCE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0171A1C
 * Callers:
 *     ?GetPlaneAllocation@ADAPTER_DISPLAY@@QEAAPEBVDXGALLOCATION@@II@Z @ 0x1C01719A8 (-GetPlaneAllocation@ADAPTER_DISPLAY@@QEAAPEBVDXGALLOCATION@@II@Z.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAUtagRECT@@@Z @ 0x1C01B7BC0 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRES.c)
 * Callees:
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C016C758 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

const struct DXGALLOCATION *__fastcall DISPLAY_SOURCE::GetPlaneAllocationUnsafe(
        DISPLAY_SOURCE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r8
  unsigned int v5; // esi
  __int64 v7; // rax
  __int64 v8; // rbx
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 408LL) != CurrentThread )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, CurrentThread, a4);
    *(_QWORD *)(v7 + 24) = 7639LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = 0LL;
  LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, v5, (__int64)CurrentThread, a4);
  if ( LatestPlaneConfigInternal && *((_BYTE *)LatestPlaneConfigInternal + 12) )
    return *(const struct DXGALLOCATION **)LatestPlaneConfigInternal;
  return (const struct DXGALLOCATION *)v8;
}
