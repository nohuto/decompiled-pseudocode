/*
 * XREFs of ?SetPointerOffset@PointerList@@YAHGPEBUtagPOINT@@@Z @ 0x1C01EA4B0
 * Callers:
 *     ?xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@HPEAHPEAUtagPOINT@@@Z @ 0x1C01C78B0 (-xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUt.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01C9220 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01E9DBC (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 */

__int64 __fastcall PointerList::SetPointerOffset(PointerList *this, _QWORD *a2, const struct tagPOINT *a3)
{
  __int64 result; // rax

  result = (__int64)FindNodeById((unsigned __int16)this, 0, 0);
  if ( result )
  {
    *(_QWORD *)(result + 64) = *a2;
    return 1LL;
  }
  return result;
}
