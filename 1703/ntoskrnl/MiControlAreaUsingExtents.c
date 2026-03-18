/*
 * XREFs of MiControlAreaUsingExtents @ 0x14005EB50
 * Callers:
 *     MmExtendSection @ 0x140492D14 (MmExtendSection.c)
 *     MiExtendSection @ 0x140492FCC (MiExtendSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiControlAreaUsingExtents(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) >> 30) & 1;
}
