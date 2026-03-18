/*
 * XREFs of MiMarkPrivateOpenCfgBits @ 0x1404B3928
 * Callers:
 *     MiCommitVadCfgBits @ 0x1404B5948 (MiCommitVadCfgBits.c)
 *     MiMarkProcessCfgBits @ 0x1404B5B54 (MiMarkProcessCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x140574F8C (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     MiPopulateCfgBitMap @ 0x1404B3B10 (MiPopulateCfgBitMap.c)
 */

__int64 __fastcall MiMarkPrivateOpenCfgBits(int a1, int a2, __int64 a3, int a4)
{
  return MiPopulateCfgBitMap(a1, a4 != 1, (a3 + 4095) & 0xFFFFF000, a2, (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL, 0);
}
