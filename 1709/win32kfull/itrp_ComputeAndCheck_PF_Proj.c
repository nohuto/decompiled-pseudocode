/*
 * XREFs of itrp_ComputeAndCheck_PF_Proj @ 0x1C02CA748
 * Callers:
 *     itrp_SDPVTL @ 0x1C02D2080 (itrp_SDPVTL.c)
 *     itrp_SFVTL @ 0x1C02D2560 (itrp_SFVTL.c)
 *     itrp_SPVTL @ 0x1C02D3A10 (itrp_SPVTL.c)
 *     itrp_WFV @ 0x1C02D4DD0 (itrp_WFV.c)
 *     itrp_WPV @ 0x1C02D4E80 (itrp_WPV.c)
 * Callees:
 *     <none>
 */

__int64 itrp_ComputeAndCheck_PF_Proj()
{
  int v0; // edx
  __int64 result; // rax

  v0 = (SHIWORD(dword_1C0327C6C) * SHIWORD(dword_1C0327C68) + 0x2000) >> 14;
  LOWORD(v0) = (((__int16)dword_1C0327C6C * (__int16)dword_1C0327C68 + 0x2000) >> 14) + v0;
  result = (unsigned int)(v0 + 1023);
  if ( (unsigned __int16)(v0 + 1023) <= 0x7FEu )
  {
    result = 0x4000LL;
    LOWORD(v0) = (((__int16)v0 >> 15) & 0x8000) + 0x4000;
  }
  dword_1C0327CD8 = 0;
  word_1C0327CB8 = v0;
  return result;
}
