/*
 * XREFs of PopFreeWakeInfo @ 0x1406C9760
 * Callers:
 *     <none>
 * Callees:
 *     PopUnlinkWakeSources @ 0x1406C99C8 (PopUnlinkWakeSources.c)
 */

void __fastcall PopFreeWakeInfo(void *a1)
{
  PopUnlinkWakeSources(a1);
  ExFreePoolWithTag(a1, 0x206D654Du);
}
