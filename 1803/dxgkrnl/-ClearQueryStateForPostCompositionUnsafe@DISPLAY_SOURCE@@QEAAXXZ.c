/*
 * XREFs of ?ClearQueryStateForPostCompositionUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C0150F94
 * Callers:
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C01D8060 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 * Callees:
 *     <none>
 */

void __fastcall DISPLAY_SOURCE::ClearQueryStateForPostCompositionUnsafe(DISPLAY_SOURCE *this)
{
  __int64 v2; // rax

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 408LL) != KeGetCurrentThread() )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 8710LL;
    WdLogEvent5_WdAssertion(v2);
  }
  *((_BYTE *)this + 3696) = 0;
}
