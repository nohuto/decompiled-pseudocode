/*
 * XREFs of KiGetGdtIdt @ 0x1402B10E0
 * Callers:
 *     sub_14016A6A0 @ 0x14016A6A0 (sub_14016A6A0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x14029A010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     <none>
 */

void __fastcall KiGetGdtIdt(void *a1, void *a2)
{
  __sgdt(a1);
  __sidt(a2);
}
