/*
 * XREFs of DbgkpWerFreePool @ 0x1406AE490
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1401E659C (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpWerFreePool(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x57676244u);
}
