/*
 * XREFs of CmCallbackReleaseKeyObjectIDEx @ 0x140478180
 * Callers:
 *     <none>
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14001655C (CmpFreeTransientPoolWithTag.c)
 */

void __fastcall CmCallbackReleaseKeyObjectIDEx(void *a1)
{
  CmpFreeTransientPoolWithTag(a1, 0x624E4D43u);
}
