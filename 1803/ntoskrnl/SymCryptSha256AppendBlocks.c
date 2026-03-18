/*
 * XREFs of SymCryptSha256AppendBlocks @ 0x1401A19E0
 * Callers:
 *     SymCryptSha256Append @ 0x1401A1920 (SymCryptSha256Append.c)
 *     SymCryptSha256Result @ 0x1401A3150 (SymCryptSha256Result.c)
 *     SymCryptParallelSha256AppendBytes_serial @ 0x1401A46BC (SymCryptParallelSha256AppendBytes_serial.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x1400D0A60 (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptSha256AppendBlocks_shani @ 0x1401A1A44 (SymCryptSha256AppendBlocks_shani.c)
 *     SymCryptSha256AppendBlocks_ul1 @ 0x1401A1E04 (SymCryptSha256AppendBlocks_ul1.c)
 */

__int64 __fastcall SymCryptSha256AppendBlocks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (((unsigned __int8)g_SymCryptCpuFeaturesNotPresent | (unsigned __int8)SymCryptCpuFeaturesNeverPresent()) & 0x42) != 0 )
    return SymCryptSha256AppendBlocks_ul1(a1, a2, a3, a4);
  else
    return SymCryptSha256AppendBlocks_shani(a1, a2, a3, a4);
}
