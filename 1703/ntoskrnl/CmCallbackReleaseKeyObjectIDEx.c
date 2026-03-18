/*
 * XREFs of CmCallbackReleaseKeyObjectIDEx @ 0x14044D150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CmCallbackReleaseKeyObjectIDEx(void *a1)
{
  CmpFreeTransientPoolWithTag(a1, 0x624E4D43u);
}
