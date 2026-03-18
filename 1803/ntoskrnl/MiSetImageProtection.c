/*
 * XREFs of MiSetImageProtection @ 0x14013EAF4
 * Callers:
 *     MmChangeImageProtection @ 0x1405BC4E0 (MmChangeImageProtection.c)
 *     MmLoadSystemImageEx @ 0x1405F9AF4 (MmLoadSystemImageEx.c)
 *     MiCompactServiceTable @ 0x14060E084 (MiCompactServiceTable.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1407541FC (MiProcessKernelCfgImageLoadConfig.c)
 * Callees:
 *     MiSetSystemCodeProtection @ 0x14013EB40 (MiSetSystemCodeProtection.c)
 */

__int64 __fastcall MiSetImageProtection(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  return MiSetSystemCodeProtection(
           a1,
           ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((a3 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
}
