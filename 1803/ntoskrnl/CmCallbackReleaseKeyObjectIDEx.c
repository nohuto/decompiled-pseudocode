/*
 * XREFs of CmCallbackReleaseKeyObjectIDEx @ 0x140574030
 * Callers:
 *     <none>
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140009034 (CmpFreeTransientPoolWithTag.c)
 */

void __fastcall CmCallbackReleaseKeyObjectIDEx(void *a1)
{
  CmpFreeTransientPoolWithTag(a1, 0x624E4D43u);
}
