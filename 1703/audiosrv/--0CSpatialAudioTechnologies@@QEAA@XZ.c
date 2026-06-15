/*
 * XREFs of ??0CSpatialAudioTechnologies@@QEAA@XZ @ 0x1800389FC
 * Callers:
 *     _dynamic_initializer_for__g_ListOfSpatialTech__ @ 0x180001250 (_dynamic_initializer_for__g_ListOfSpatialTech__.c)
 * Callees:
 *     memset @ 0x180049B8A (memset.c)
 */

CSpatialAudioTechnologies *__fastcall CSpatialAudioTechnologies::CSpatialAudioTechnologies(
        CSpatialAudioTechnologies *this)
{
  g_ListOfSpatialTech = 0;
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  dword_18012C1E0 = 0;
  memset(&unk_18012C178, 0, 0x40uLL);
  return (CSpatialAudioTechnologies *)&g_ListOfSpatialTech;
}
