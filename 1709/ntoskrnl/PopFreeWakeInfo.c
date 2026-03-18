/*
 * XREFs of PopFreeWakeInfo @ 0x1406FA5C0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PopUnlinkWakeSources @ 0x1406FAA04 (PopUnlinkWakeSources.c)
 */

void __fastcall PopFreeWakeInfo(PVOID P)
{
  PopUnlinkWakeSources(P);
  ExFreePoolWithTag(P, 0x206D654Du);
}
