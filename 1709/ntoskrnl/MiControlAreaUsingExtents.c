/*
 * XREFs of MiControlAreaUsingExtents @ 0x1400B7938
 * Callers:
 *     MmExtendSection @ 0x14056BA18 (MmExtendSection.c)
 *     MiExtendSection @ 0x14056BC80 (MiExtendSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiControlAreaUsingExtents(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) >> 30) & 1;
}
