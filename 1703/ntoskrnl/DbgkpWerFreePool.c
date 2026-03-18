/*
 * XREFs of DbgkpWerFreePool @ 0x1406831A0
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1401E23D8 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpWerFreePool(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x57676244u);
}
