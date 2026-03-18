/*
 * XREFs of ?CompletePStateTransitionCB@DXGADAPTER@@QEAAXII@Z @ 0x1C0025310
 * Callers:
 *     DxgkCompletePStateTransitionCB @ 0x1C002EC90 (DxgkCompletePStateTransitionCB.c)
 * Callees:
 *     McTemplateK0pqqq @ 0x1C00278B8 (McTemplateK0pqqq.c)
 *     ?RecordPStateChange@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z @ 0x1C0033A24 (-RecordPStateChange@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z.c)
 */

void __fastcall DXGADAPTER::CompletePStateTransitionCB(struct _MCGEN_TRACE_CONTEXT *this, int a2, unsigned int a3)
{
  const GUID *Arg1; // r8
  __int64 v5; // rdi

  if ( this[34].EnableKeyWords )
  {
    v5 = *(_QWORD *)&this[34].EnableBitMask[130 * (unsigned __int16)a2
                                          + 128
                                          + 130 * *((unsigned __int16 *)&this[34].EnableLevel + HIWORD(a2))];
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      {
        Arg1 = (const GUID *)((unsigned __int16)a2
                            + (unsigned int)*((unsigned __int16 *)&this[34].EnableLevel + HIWORD(a2)));
        McTemplateK0pqqq(
          this,
          &Dxgk_PowerPStateCompleted,
          Arg1,
          this,
          (const unsigned int)Arg1,
          *(_DWORD *)(v5 + 192),
          a3);
      }
    }
    DXGPOWERSTATISTICSTRANSITIONENGINE::RecordPStateChange((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v5 + 136), a3);
  }
}
