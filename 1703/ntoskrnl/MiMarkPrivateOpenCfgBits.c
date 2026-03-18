/*
 * XREFs of MiMarkPrivateOpenCfgBits @ 0x14049A770
 * Callers:
 *     MiMarkPrivateImageCfgBits @ 0x14044169C (MiMarkPrivateImageCfgBits.c)
 *     MiCommitVadCfgBits @ 0x14049B12C (MiCommitVadCfgBits.c)
 * Callees:
 *     MiPopulateCfgBitMap @ 0x14049B024 (MiPopulateCfgBitMap.c)
 */

__int64 __fastcall MiMarkPrivateOpenCfgBits(int a1, int a2, __int64 a3, int a4)
{
  return MiPopulateCfgBitMap(a1, a4 != 1, (a3 + 4095) & 0xFFFFF000, a2, (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL, 0);
}
