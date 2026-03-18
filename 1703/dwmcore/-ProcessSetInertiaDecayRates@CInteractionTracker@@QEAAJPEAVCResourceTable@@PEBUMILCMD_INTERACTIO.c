/*
 * XREFs of ?ProcessSetInertiaDecayRates@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETINERTIADECAYRATES@@@Z @ 0x18012CD84
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetPositionInertiaDecayRate@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18016E04C (-SetPositionInertiaDecayRate@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetScaleInertiaDecayRate@CInteractionTracker@@AEAAXM@Z @ 0x18016E3A4 (-SetScaleInertiaDecayRate@CInteractionTracker@@AEAAXM@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetInertiaDecayRates(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_SETINERTIADECAYRATES *a3)
{
  int v3; // xmm1_4
  _DWORD v7[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *((_DWORD *)a3 + 3);
  v7[0] = *((_DWORD *)a3 + 2);
  v7[1] = v3;
  v7[2] = 0;
  CInteractionTracker::SetPositionInertiaDecayRate(this, (const struct D2DVector3 *)v7);
  CInteractionTracker::SetScaleInertiaDecayRate(this, *((float *)a3 + 4));
  return 0LL;
}
