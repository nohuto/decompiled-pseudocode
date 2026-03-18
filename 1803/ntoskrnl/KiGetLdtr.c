/*
 * XREFs of KiGetLdtr @ 0x1402E9450
 * Callers:
 *     sub_1401947F0 @ 0x1401947F0 (sub_1401947F0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1402D2010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int16 KiGetLdtr()
{
  __int16 result; // ax

  __asm { sldt    ax }
  return result;
}
