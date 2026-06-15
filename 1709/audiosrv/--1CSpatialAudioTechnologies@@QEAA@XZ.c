/*
 * XREFs of ??1CSpatialAudioTechnologies@@QEAA@XZ @ 0x180032468
 * Callers:
 *     _dynamic_atexit_destructor_for__g_ListOfSpatialTech__ @ 0x18003A620 (_dynamic_atexit_destructor_for__g_ListOfSpatialTech__.c)
 * Callees:
 *     <none>
 */

void __fastcall CSpatialAudioTechnologies::~CSpatialAudioTechnologies(CSpatialAudioTechnologies *this)
{
  DeleteCriticalSection(&stru_18014C4B8);
}
