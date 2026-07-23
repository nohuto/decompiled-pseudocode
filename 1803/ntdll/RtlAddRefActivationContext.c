/*
 * XREFs of RtlAddRefActivationContext @ 0x180029120
 * Callers:
 *     sub_180024CB8 @ 0x180024CB8 (sub_180024CB8.c)
 *     sub_180029098 @ 0x180029098 (sub_180029098.c)
 *     RtlFindActivationContextSectionString @ 0x18003E8E0 (RtlFindActivationContextSectionString.c)
 *     sub_180040F58 @ 0x180040F58 (sub_180040F58.c)
 *     RtlGetActiveActivationContext @ 0x180041750 (RtlGetActiveActivationContext.c)
 *     RtlActivateActivationContextEx @ 0x18004DFF0 (RtlActivateActivationContextEx.c)
 *     sub_18007EE7C @ 0x18007EE7C (sub_18007EE7C.c)
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
