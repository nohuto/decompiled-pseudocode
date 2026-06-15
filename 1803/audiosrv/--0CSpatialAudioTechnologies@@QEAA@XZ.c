/*
 * XREFs of ??0CSpatialAudioTechnologies@@QEAA@XZ @ 0x1800182E8
 * Callers:
 *     _dynamic_initializer_for__g_ListOfSpatialTech__ @ 0x180001290 (_dynamic_initializer_for__g_ListOfSpatialTech__.c)
 * Callees:
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 */

CSpatialAudioTechnologies *__fastcall CSpatialAudioTechnologies::CSpatialAudioTechnologies(
        CSpatialAudioTechnologies *this)
{
  g_ListOfSpatialTech = 0;
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  dword_18018A9A0 = 0;
  memset_0(&unk_18018A938, 0, 0x40uLL);
  return (CSpatialAudioTechnologies *)&g_ListOfSpatialTech;
}
