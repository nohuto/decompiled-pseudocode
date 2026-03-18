/*
 * XREFs of ?CitpInvalidateAllWeakReferences@@YAXXZ @ 0x1C0154FF0
 * Callers:
 *     ?CitpResetTracking@@YAJXZ @ 0x1C01559B8 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C001C8FC (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1C00247F8 (-CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z.c)
 */

void CitpInvalidateAllWeakReferences(void)
{
  __int64 i; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8

  for ( i = gppiList; i; i = *(_QWORD *)(i + 352) )
  {
    if ( CitpProcessInfoIsValid(*(struct _CIT_PROCESS **)(i + 880)) )
    {
      *(_DWORD *)(v2 + 24) = 0;
      CitpInteractionSummaryDelete((struct _CIT_INTERACTION_SUMMARY **)(*(_QWORD *)(i + 880) + 16LL), v1, v3);
    }
  }
}
