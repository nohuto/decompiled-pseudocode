/*
 * XREFs of ?ClearQueryStateForPostCompositionUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C016FFD8
 * Callers:
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAUtagRECT@@@Z @ 0x1C01B7BC0 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRES.c)
 * Callees:
 *     <none>
 */

void __fastcall DISPLAY_SOURCE::ClearQueryStateForPostCompositionUnsafe(
        DISPLAY_SOURCE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v6; // rax

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 408LL) != CurrentThread )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, CurrentThread, a3, a4);
    *(_QWORD *)(v6 + 24) = 7913LL;
    WdLogEvent5_WdAssertion(v6);
  }
  *((_BYTE *)this + 3152) = 0;
}
