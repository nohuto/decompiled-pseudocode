/*
 * XREFs of ?ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z @ 0x1C016FF80
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0186368 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAUtagRECT@@@Z @ 0x1C01B7BC0 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRES.c)
 * Callees:
 *     <none>
 */

void __fastcall DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe(DISPLAY_SOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v6; // rdi
  __int64 v7; // rax

  CurrentThread = KeGetCurrentThread();
  v6 = (unsigned int)a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 408LL) != CurrentThread )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, CurrentThread, a4);
    *(_QWORD *)(v7 + 24) = 7897LL;
    WdLogEvent5_WdAssertion(v7);
  }
  *((_BYTE *)this + v6 + 2504) = 0;
}
