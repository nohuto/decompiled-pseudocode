/*
 * XREFs of ?CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z @ 0x1C0021538
 * Callers:
 *     DxgkCompleteFStateTransitionCB @ 0x1C00346C0 (DxgkCompleteFStateTransitionCB.c)
 * Callees:
 *     ?RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0038BD8 (-RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     Template_xq @ 0x1C00414C4 (Template_xq.c)
 */

void __fastcall DXGADAPTER::CompleteFStateTransitionCB(DXGADAPTER *this, int a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // rcx

  if ( *((_QWORD *)this + 291) )
  {
    v4 = (unsigned __int16)a2 + *((unsigned __int16 *)this + HIWORD(a2) + 1168);
    v5 = *((_QWORD *)this + 290) + 520LL * v4;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_xq(this, &Dxgk_CompleteFStateTransitionCB, a3, this, v4);
    *(_BYTE *)(v5 + 359) = 0;
    PoFxCompleteIdleState(*((_QWORD *)this + 291), v4);
    v6 = *(_QWORD *)(v5 + 512);
    if ( v6 && !*(_DWORD *)(v5 + 344) )
      DXGPOWERSTATISTICSTRANSITIONENGINE::RecordLeavingIdleFState((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v6 + 136));
    if ( *((_QWORD *)this + 392)
      && (v4 == 1 || v4 == 4)
      && _InterlockedExchangeAdd((volatile signed __int32 *)this + 772, 0xFFFFFFFF) != 1 )
    {
      KeSetEvent((PRKEVENT)((char *)this + 3032), 0, 0);
    }
  }
}
