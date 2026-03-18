/*
 * XREFs of ?SupportsInteractionType@CInteraction@@UEBAHW4InputType@@I@Z @ 0x1800283F0
 * Callers:
 *     ?SupportedByInteraction@CHitTestContext@@AEBA_NW4InputType@@PEBVCInteraction@@1_N@Z @ 0x1800265B0 (-SupportedByInteraction@CHitTestContext@@AEBA_NW4InputType@@PEBVCInteraction@@1_N@Z.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_N@Z @ 0x180026E98 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::SupportsInteractionType(__int64 a1, int a2)
{
  if ( a2 == 7 )
    return 0LL;
  else
    return CInteractionProcessor::SupportsInteractionType(a1 + 344);
}
