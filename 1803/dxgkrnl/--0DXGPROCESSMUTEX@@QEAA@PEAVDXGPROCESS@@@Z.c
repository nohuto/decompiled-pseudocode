/*
 * XREFs of ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C001A3DC
 * Callers:
 *     DxgkGetPresentHistory @ 0x1C00DF2D0 (DxgkGetPresentHistory.c)
 *     NtDxgkRegisterVailProcess @ 0x1C01E8AD0 (NtDxgkRegisterVailProcess.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

DXGPROCESSMUTEX *__fastcall DXGPROCESSMUTEX::DXGPROCESSMUTEX(DXGPROCESSMUTEX *this, struct DXGFASTMUTEX *const *a2)
{
  DXGAUTOMUTEX::DXGAUTOMUTEX(this, a2[14], 0);
  return this;
}
