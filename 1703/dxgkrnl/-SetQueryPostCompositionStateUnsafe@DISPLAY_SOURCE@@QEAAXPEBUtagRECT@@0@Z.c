/*
 * XREFs of ?SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z @ 0x1C017307C
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0186368 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAUtagRECT@@@Z @ 0x1C01B7BC0 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRES.c)
 * Callees:
 *     <none>
 */

void __fastcall DISPLAY_SOURCE::SetQueryPostCompositionStateUnsafe(
        DISPLAY_SOURCE *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3)
{
  struct _KTHREAD *CurrentThread; // r9
  __int64 v7; // rax

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 408LL) != CurrentThread )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, CurrentThread);
    *(_QWORD *)(v7 + 24) = 7834LL;
    WdLogEvent5_WdAssertion(v7);
  }
  *((_BYTE *)this + 3152) = 1;
  *((_BYTE *)this + 3156) = 1;
  *(struct tagRECT *)((char *)this + 3160) = *a2;
  *(struct tagRECT *)((char *)this + 3176) = *a3;
}
