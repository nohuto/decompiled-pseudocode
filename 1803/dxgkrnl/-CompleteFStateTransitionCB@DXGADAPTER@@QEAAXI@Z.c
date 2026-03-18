/*
 * XREFs of ?CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z @ 0x1C0025200
 * Callers:
 *     DxgkCompleteFStateTransitionCB @ 0x1C002EC20 (DxgkCompleteFStateTransitionCB.c)
 * Callees:
 *     DxgkNotifySharedPowerGraphicsFStateTransition @ 0x1C0032F24 (DxgkNotifySharedPowerGraphicsFStateTransition.c)
 *     ?RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C00339B8 (-RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 *     McTemplateK0xq @ 0x1C0040120 (McTemplateK0xq.c)
 */

void __fastcall DXGADAPTER::CompleteFStateTransitionCB(DXGADAPTER *this, int a2, __int64 a3)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  __int64 v6; // rcx

  if ( *((_QWORD *)this + 313) )
  {
    v4 = (unsigned __int16)a2 + *((unsigned __int16 *)this + HIWORD(a2) + 1256);
    v5 = *((_QWORD *)this + 312) + 520LL * v4;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      McTemplateK0xq(
        this,
        &Dxgk_CompleteFStateTransitionCB,
        a3,
        this,
        (unsigned __int16)a2 + *((unsigned __int16 *)this + HIWORD(a2) + 1256));
    *(_BYTE *)(v5 + 359) = 0;
    PoFxCompleteIdleState(*((_QWORD *)this + 313), v4);
    v6 = *(_QWORD *)(v5 + 512);
    if ( v6 && !*(_DWORD *)(v5 + 344) )
      DXGPOWERSTATISTICSTRANSITIONENGINE::RecordLeavingIdleFState((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v6 + 136));
    if ( *(_DWORD *)(v5 + 208) == 7 )
      DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v5 + 4), *(_DWORD *)(v5 + 344), 0);
    if ( *((_QWORD *)this + 414)
      && (v4 == 1 || v4 == 4)
      && _InterlockedExchangeAdd((volatile signed __int32 *)this + 816, 0xFFFFFFFF) != 1 )
    {
      KeSetEvent((PRKEVENT)((char *)this + 3208), 0, 0);
    }
  }
}
