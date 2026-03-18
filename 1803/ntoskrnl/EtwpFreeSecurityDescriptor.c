/*
 * XREFs of EtwpFreeSecurityDescriptor @ 0x1405917E4
 * Callers:
 *     EtwpStartLogger @ 0x14058A5A4 (EtwpStartLogger.c)
 *     EtwpCheckGuidAccess @ 0x14058DC64 (EtwpCheckGuidAccess.c)
 *     EtwpAllocGuidEntry @ 0x14058E5C4 (EtwpAllocGuidEntry.c)
 *     EtwpAccessCheckFromState @ 0x140591764 (EtwpAccessCheckFromState.c)
 *     EtwpUpdateTrace @ 0x140629C7C (EtwpUpdateTrace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
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
