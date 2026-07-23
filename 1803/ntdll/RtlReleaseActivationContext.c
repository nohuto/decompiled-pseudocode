/*
 * XREFs of RtlReleaseActivationContext @ 0x180024580
 * Callers:
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_180024608 @ 0x180024608 (sub_180024608.c)
 *     sub_180024CB8 @ 0x180024CB8 (sub_180024CB8.c)
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_18003E4CC @ 0x18003E4CC (sub_18003E4CC.c)
 *     sub_180046810 @ 0x180046810 (sub_180046810.c)
 *     sub_180047030 @ 0x180047030 (sub_180047030.c)
 *     RtlQueueWorkItem @ 0x180057A90 (RtlQueueWorkItem.c)
 *     RtlFreeActivationContextStack @ 0x180072B30 (RtlFreeActivationContextStack.c)
 *     RtlDeactivateActivationContext @ 0x180072C10 (RtlDeactivateActivationContext.c)
 *     sub_180073CD4 @ 0x180073CD4 (sub_180073CD4.c)
 *     LdrRemoveLoadAsDataTable @ 0x180073DE0 (LdrRemoveLoadAsDataTable.c)
 *     ntdll_8 @ 0x18007DD10 (ntdll_8.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x18000C3C0 (RtlCaptureStackBackTrace.c)
 *     sub_180081B88 @ 0x180081B88 (sub_180081B88.c)
 *     sub_1800D9B6C @ 0x1800D9B6C (sub_1800D9B6C.c)
 */

void __cdecl RtlReleaseActivationContext(PACTIVATION_CONTEXT ActivationContext)
{
  LONG i; // eax
  int v3; // edi

  if ( ActivationContext
    && (((unsigned __int64)&ActivationContext[-1].InlineStorageMapEntries[31] + 7) | 7) != 0xFFFFFFFFFFFFFFFFuLL
    && (unsigned int)(ActivationContext->RefCount - 1) <= 0x7FFFFFFD )
  {
    for ( i = ActivationContext->RefCount; i != 0x7FFFFFFF; i = ActivationContext->RefCount )
    {
      v3 = i - 1;
      if ( i == _InterlockedCompareExchange(&ActivationContext->RefCount, i - 1, i) )
        goto LABEL_7;
    }
    v3 = 0x7FFFFFFF;
LABEL_7:
    if ( byte_18015D428 )
      RtlCaptureStackBackTrace(
        1u,
        4u,
        &ActivationContext[1].NotificationContext
      + 4
      * (((unsigned __int8)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)&ActivationContext[1].NotificationRoutine,
                             1u)
        + 1) & 3),
        0LL);
    if ( !v3 )
    {
      if ( byte_18015D429 )
        sub_1800D9B6C(ActivationContext);
      else
        sub_180081B88(ActivationContext);
    }
  }
}
