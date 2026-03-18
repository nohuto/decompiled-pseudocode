/*
 * XREFs of ?GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ @ 0x1C0171718
 * Callers:
 *     ?PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00BA040 (-PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_.c)
 * Callees:
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C016C758 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

__int64 __fastcall DISPLAY_SOURCE::GetEnabledPlaneCountUnsafe(DISPLAY_SOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v6; // rax
  unsigned int v7; // esi
  unsigned int i; // edi
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 408LL) != CurrentThread )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, CurrentThread, a3, a4);
    *(_QWORD *)(v6 + 24) = 8112LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = 0;
  for ( i = 0; i < *((_DWORD *)this + 798); ++i )
  {
    LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(this, i, a3, a4);
    if ( LatestPlaneConfigInternal && *((_BYTE *)LatestPlaneConfigInternal + 12) )
      ++v7;
  }
  return v7;
}
