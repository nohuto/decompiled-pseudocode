/*
 * XREFs of ?SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z @ 0x1C0172EE0
 * Callers:
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAUtagRECT@@@Z @ 0x1C01B7BC0 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRES.c)
 *     ?UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVDXGALLOCATIONREFERENCE@@HI@Z @ 0x1C01BA878 (-UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@P.c)
 * Callees:
 *     ?CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z @ 0x1C0170598 (-CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z.c)
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1C0171960 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 *     ?PostCompositionConfigsMatch@@YAEPEAU_POST_COMPOSITION_CONFIG@@EPEBUtagRECT@@1@Z @ 0x1C017224C (-PostCompositionConfigsMatch@@YAEPEAU_POST_COMPOSITION_CONFIG@@EPEBUtagRECT@@1@Z.c)
 */

void __fastcall DISPLAY_SOURCE::SetPostCompositionConfigUnsafe(
        DISPLAY_SOURCE *this,
        __int64 a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  char v6; // bl
  __int64 v8; // rax
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  __int64 v10; // rdx

  v6 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 408LL) != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 7580LL;
    WdLogEvent5_WdAssertion(v8);
  }
  LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal(
                                          this,
                                          a2,
                                          (__int64)a3,
                                          (__int64)a4);
  if ( LatestPostCompositionConfigInternal )
  {
    if ( PostCompositionConfigsMatch(LatestPostCompositionConfigInternal, v6, a3, a4) )
      return;
  }
  else if ( !v6 )
  {
    return;
  }
  LOBYTE(v10) = v6;
  DISPLAY_SOURCE::CreateNewPostCompositionConfig(this, v10, a3, a4);
}
