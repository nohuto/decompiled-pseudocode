/*
 * XREFs of DelegateReleasePointerMessage @ 0x1C01BF070
 * Callers:
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0137D18 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     ?DelegateCapturePointerImplicit@@YAH_K@Z @ 0x1C01BEDD4 (-DelegateCapturePointerImplicit@@YAH_K@Z.c)
 *     DelegateCoalescePointerMessage @ 0x1C01CDE1C (DelegateCoalescePointerMessage.c)
 */

__int64 __fastcall DelegateReleasePointerMessage(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        struct tagDELEGATEPOINTERMAP *a4)
{
  PointerList *v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx

  v5 = *(PointerList **)(a2 + 40);
  if ( *(_DWORD *)(a2 + 24) == 583 )
  {
    if ( (gdwMitConfig & 4) != 0 )
    {
      CTouchProcessor::DelegateImplictCaptureAndReleaseIfNeeded(gpTouchProcessor, (unsigned __int64)v5);
    }
    else
    {
      v7 = *((_QWORD *)v5 + 5);
      if ( !v7 || (*(_DWORD *)(v7 + 80) & 4) == 0 )
        DelegateCapturePointerImplicit(v5, a2, gdwMitConfig, a4);
      v8 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 40LL);
      if ( v8 )
        *(_DWORD *)(v8 + 80) |= 0x20u;
    }
  }
  return DelegateCoalescePointerMessage(a1, 1LL, a2);
}
