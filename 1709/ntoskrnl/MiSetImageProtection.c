/*
 * XREFs of MiSetImageProtection @ 0x1400DC1BC
 * Callers:
 *     MmChangeImageProtection @ 0x140515760 (MmChangeImageProtection.c)
 *     MmLoadSystemImageEx @ 0x1405431E0 (MmLoadSystemImageEx.c)
 *     MiCompactServiceTable @ 0x1405B9B54 (MiCompactServiceTable.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1406EA3C4 (MiProcessKernelCfgImageLoadConfig.c)
 * Callees:
 *     MiSetSystemCodeProtection @ 0x1400DC208 (MiSetSystemCodeProtection.c)
 */

__int64 __fastcall MiSetImageProtection(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  return MiSetSystemCodeProtection(
           a1,
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a3 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
}
