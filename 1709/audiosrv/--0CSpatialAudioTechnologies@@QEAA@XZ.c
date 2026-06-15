/*
 * XREFs of ??0CSpatialAudioTechnologies@@QEAA@XZ @ 0x180032424
 * Callers:
 *     _dynamic_initializer_for__g_ListOfSpatialTech__ @ 0x180001260 (_dynamic_initializer_for__g_ListOfSpatialTech__.c)
 * Callees:
 *     memset @ 0x180033A5A (memset.c)
 */

CSpatialAudioTechnologies *__fastcall CSpatialAudioTechnologies::CSpatialAudioTechnologies(
        CSpatialAudioTechnologies *this)
{
  g_ListOfSpatialTech = 0;
  InitializeCriticalSectionEx(&stru_18014C4B8, 0, 0);
  dword_18014C4E0 = 0;
  memset(&unk_18014C478, 0, 0x40uLL);
  return (CSpatialAudioTechnologies *)&g_ListOfSpatialTech;
}
