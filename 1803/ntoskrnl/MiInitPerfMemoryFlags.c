/*
 * XREFs of MiInitPerfMemoryFlags @ 0x1402602EC
 * Callers:
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 *     MiUseLargeDriverPage @ 0x1405F83BC (MiUseLargeDriverPage.c)
 *     MiLogSectionCreate @ 0x14074C154 (MiLogSectionCreate.c)
 *     MiMapUserLargePages @ 0x140755B60 (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitPerfMemoryFlags(int a1, char a2)
{
  return (2 * (a2 & 0xF)) | (unsigned int)(a1 != 0);
}
