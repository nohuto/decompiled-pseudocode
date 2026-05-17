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

void __fastcall RtlAddRefActivationContext(volatile signed __int32 *a1)
{
  signed __int32 i; // eax

  if ( a1 && (((unsigned __int64)a1 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL && *a1 != 0x7FFFFFFF )
  {
    for ( i = *a1; i != 0x7FFFFFFF && i != _InterlockedCompareExchange(a1, i + 1, i); i = *a1 )
      ;
  }
}
