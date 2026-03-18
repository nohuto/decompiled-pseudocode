/*
 * XREFs of ?GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA?AW4InteractionTrackerMarshalerFlag@12@W4ScrollAxis@@@Z @ 0x1C0145EB4
 * Callers:
 *     ?EmitSetInertiaModifierAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0145504 (-EmitSetInertiaModifierAnimations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVC.c)
 *     ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0146080 (-SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@.c)
 *     ?SetReferenceProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0146930 (-SetReferenceProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChann.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::GetInertiaModifierMarshalerFlag(__int64 a1, int a2)
{
  int v2; // edx

  if ( !a2 )
    return 0x80000LL;
  v2 = a2 - 1;
  if ( !v2 )
    return 0x100000LL;
  if ( v2 == 1 )
    return 0x200000LL;
  return 0LL;
}
