/*
 * XREFs of RtlAddRefActivationContext @ 0x1800184D0
 * Callers:
 *     sub_180017B34 @ 0x180017B34 (sub_180017B34.c)
 *     sub_180018440 @ 0x180018440 (sub_180018440.c)
 *     sub_180039C9C @ 0x180039C9C (sub_180039C9C.c)
 *     RtlFindActivationContextSectionString @ 0x18003F770 (RtlFindActivationContextSectionString.c)
 *     RtlActivateActivationContextEx @ 0x180055590 (RtlActivateActivationContextEx.c)
 *     RtlGetActiveActivationContext @ 0x18007A760 (RtlGetActiveActivationContext.c)
 *     sub_180084014 @ 0x180084014 (sub_180084014.c)
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
