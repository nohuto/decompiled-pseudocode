/*
 * XREFs of RtlAddRefActivationContext @ 0x1800377C0
 * Callers:
 *     RtlActivateActivationContextEx @ 0x180017E20 (RtlActivateActivationContextEx.c)
 *     LdrpAllocateModuleEntry @ 0x1800205E0 (LdrpAllocateModuleEntry.c)
 *     RtlGetActiveActivationContext @ 0x180020770 (RtlGetActiveActivationContext.c)
 *     RtlFindActivationContextSectionString @ 0x1800343D0 (RtlFindActivationContextSectionString.c)
 *     TppCleanupGroupMemberInitialize @ 0x180036E40 (TppCleanupGroupMemberInitialize.c)
 *     RtlpQueryInformationActivationContextBasicInformation @ 0x180037738 (RtlpQueryInformationActivationContextBasicInformation.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x180083268 (RtlpFindActivationContextSection_FillOutReturnedData.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlAddRefActivationContext(PACTIVATION_CONTEXT ActivationContext)
{
  LONG i; // eax

  if ( ActivationContext
    && (((unsigned __int64)&ActivationContext[-1].InlineStorageMapEntries[31] + 7) | 7) != 0xFFFFFFFFFFFFFFFFuLL
    && ActivationContext->RefCount != 0x7FFFFFFF )
  {
    for ( i = ActivationContext->RefCount;
          i != 0x7FFFFFFF && i != _InterlockedCompareExchange(&ActivationContext->RefCount, i + 1, i);
          i = ActivationContext->RefCount )
    {
      ;
    }
  }
}
