/*
 * XREFs of ?RmpRsEnforcedThresholdsDisarmCheckDestroy@@YAXPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x18005381C
 * Callers:
 *     ?RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x18002EF70 (-RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x180053688 (-RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEA.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

void __fastcall RmpRsEnforcedThresholdsDisarmCheckDestroy(_QWORD *P)
{
  __int64 v2; // rcx

  *(_QWORD *)(*P + 152LL) = 0LL;
  P[6] = 0LL;
  if ( (unsigned int)TpSetTimerEx(P[5], 0LL, 0LL, 0LL) )
  {
    RmpObjectRelease((char *)*P);
    v2 = P[5];
    if ( v2 )
      TpReleaseTimer(v2);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
}
