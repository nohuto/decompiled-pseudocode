/*
 * XREFs of ?RmpRsEnforcedThresholdsDisarmCheckDestroy@@YAXPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x1800351CC
 * Callers:
 *     ?RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180015ED0 (-RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x180018344 (-RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEA.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

void __fastcall RmpRsEnforcedThresholdsDisarmCheckDestroy(_QWORD *P)
{
  *(_QWORD *)(*P + 144LL) = 0LL;
  P[6] = 0LL;
  if ( (unsigned int)TpSetTimerEx(P[5], 0LL, 0LL, 0LL) )
  {
    RmpObjectRelease((char *)*P);
    if ( P[5] )
      TpReleaseTimer();
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
}
