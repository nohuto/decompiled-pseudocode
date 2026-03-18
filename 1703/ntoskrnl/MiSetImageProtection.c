/*
 * XREFs of MiSetImageProtection @ 0x14006C19C
 * Callers:
 *     MmLoadSystemImageEx @ 0x1404B191C (MmLoadSystemImageEx.c)
 *     MmChangeImageProtection @ 0x1404B2670 (MmChangeImageProtection.c)
 *     MiCompactServiceTable @ 0x140580324 (MiCompactServiceTable.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1406BD5E4 (MiProcessKernelCfgImageLoadConfig.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSetImageProtection(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  return MiSetSystemCodeProtection(
           a1,
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a3 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
}
