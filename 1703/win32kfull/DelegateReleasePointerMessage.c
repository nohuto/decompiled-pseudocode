/*
 * XREFs of DelegateReleasePointerMessage @ 0x1C01BAD90
 * Callers:
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0131A68 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     ?DelegateCapturePointerImplicit@@YAH_K@Z @ 0x1C01BAAF4 (-DelegateCapturePointerImplicit@@YAH_K@Z.c)
 *     ?SetDelegateAction@PointerList@@YAX_KW4tagDCPACTION@@@Z @ 0x1C01EA270 (-SetDelegateAction@PointerList@@YAX_KW4tagDCPACTION@@@Z.c)
 */

__int64 __fastcall DelegateReleasePointerMessage(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        struct tagDELEGATEPOINTERMAP *a4)
{
  PointerList *v5; // rcx
  __int64 v7; // rax

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
      PointerList::SetDelegateAction(*(_QWORD *)(a2 + 40), 6LL);
    }
  }
  return DelegateCoalescePointerMessage(a1, 1LL, a2);
}
