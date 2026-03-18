/*
 * XREFs of DbgkpWerFreePool @ 0x140712D40
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x140223BFC (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpWerFreePool(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x57676244u);
}
