/*
 * XREFs of EtwpFreeSecurityDescriptor @ 0x140492ADC
 * Callers:
 *     EtwpUpdateTrace @ 0x140450B18 (EtwpUpdateTrace.c)
 *     EtwpAllocGuidEntry @ 0x140489654 (EtwpAllocGuidEntry.c)
 *     EtwpAccessCheckFromState @ 0x140492A5C (EtwpAccessCheckFromState.c)
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 *     EtwpCheckGuidAccess @ 0x1404EF040 (EtwpCheckGuidAccess.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeSecurityDescriptor(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    if ( v2 != (void *)EtwpDefaultTraceSecurityDescriptor && v2 != (void *)WmipDefaultAccessSd )
      ExFreePoolWithTag(v2, 0);
    *a1 = 0LL;
  }
}
