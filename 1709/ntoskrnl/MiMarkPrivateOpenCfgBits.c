/*
 * XREFs of MiMarkPrivateOpenCfgBits @ 0x1405803D8
 * Callers:
 *     MiCommitVadCfgBits @ 0x1404D1EE4 (MiCommitVadCfgBits.c)
 *     MiMarkProcessCfgBits @ 0x1404D20E8 (MiMarkProcessCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x1405873F8 (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     MiPopulateCfgBitMap @ 0x1404D355C (MiPopulateCfgBitMap.c)
 */

__int64 __fastcall MiMarkPrivateOpenCfgBits(_QWORD *a1, unsigned __int64 a2, __int64 a3, int a4)
{
  return MiPopulateCfgBitMap(
           a1,
           a4 != 1,
           (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL,
           a2,
           (a3 + 4095) & 0xFFFFFFFFFFFFF000uLL,
           0);
}
