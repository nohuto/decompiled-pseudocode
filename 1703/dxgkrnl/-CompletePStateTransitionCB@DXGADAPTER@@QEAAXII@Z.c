/*
 * XREFs of ?CompletePStateTransitionCB@DXGADAPTER@@QEAAXII@Z @ 0x1C0021628
 * Callers:
 *     DxgkCompletePStateTransitionCB @ 0x1C0034730 (DxgkCompletePStateTransitionCB.c)
 * Callees:
 *     Template_pqqq @ 0x1C00228F8 (Template_pqqq.c)
 *     ?RecordPStateChange@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z @ 0x1C0038C40 (-RecordPStateChange@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z.c)
 */

void __fastcall DXGADAPTER::CompletePStateTransitionCB(DXGADAPTER *this, int a2, unsigned int a3)
{
  int v4; // r8d
  __int64 v5; // rdi

  if ( *((_QWORD *)this + 291) )
  {
    v5 = *(_QWORD *)(520LL * ((unsigned __int16)a2 + (unsigned int)*((unsigned __int16 *)this + HIWORD(a2) + 1168))
                   + *((_QWORD *)this + 290)
                   + 512);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      {
        v4 = (unsigned __int16)a2 + *((unsigned __int16 *)this + HIWORD(a2) + 1168);
        Template_pqqq(
          (_DWORD)this,
          (unsigned int)&Dxgk_PowerPStateCompleted,
          v4,
          (_DWORD)this,
          v4,
          *(_DWORD *)(v5 + 192),
          a3);
      }
    }
    DXGPOWERSTATISTICSTRANSITIONENGINE::RecordPStateChange((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v5 + 136), a3);
  }
}
