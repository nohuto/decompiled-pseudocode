/*
 * XREFs of EtwpFreeSecurityDescriptor @ 0x1404F65AC
 * Callers:
 *     EtwpAccessCheckFromState @ 0x1404F2D14 (EtwpAccessCheckFromState.c)
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 *     EtwpAllocGuidEntry @ 0x1405549DC (EtwpAllocGuidEntry.c)
 *     EtwpCheckGuidAccess @ 0x140554B20 (EtwpCheckGuidAccess.c)
 *     EtwpUpdateTrace @ 0x1405D8AE8 (EtwpUpdateTrace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
