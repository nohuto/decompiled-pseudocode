/*
 * XREFs of ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C003BDB8
 * Callers:
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C003BB74 (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C003BEF8 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z @ 0x1C003F718 (-CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z.c)
 *     CitBackgroundMouseInput @ 0x1C003F9C8 (CitBackgroundMouseInput.c)
 *     ?CitpLastInputUpdate@@YAXEI@Z @ 0x1C003FAAC (-CitpLastInputUpdate@@YAXEI@Z.c)
 *     ?CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0160E98 (-CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C01610DC (-CitpDPDataLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0162950 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0162E30 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C01643B0 (-CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0164958 (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitpStatIncrement(unsigned __int16 *a1, __int16 a2)
{
  unsigned __int16 v2; // ax

  if ( (unsigned __int16)(a2 + *a1) < *a1 )
    v2 = -1;
  else
    v2 = a2 + *a1;
  *a1 = v2;
}
