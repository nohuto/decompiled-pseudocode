/*
 * XREFs of ??1CSpatialAudioTechnologies@@QEAA@XZ @ 0x180048564
 * Callers:
 *     _dynamic_atexit_destructor_for__g_ListOfSpatialTech__ @ 0x18005C920 (_dynamic_atexit_destructor_for__g_ListOfSpatialTech__.c)
 * Callees:
 *     <none>
 */

void __fastcall CSpatialAudioTechnologies::~CSpatialAudioTechnologies(CSpatialAudioTechnologies *this)
{
  DeleteCriticalSection(&CriticalSection);
}
