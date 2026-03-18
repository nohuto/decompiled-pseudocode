/*
 * XREFs of ?GetPointerOffset@PointerList@@YAHGPEAUtagPOINT@@@Z @ 0x1C01F6020
 * Callers:
 *     ?xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@HPEAHPEAUtagPOINT@@@Z @ 0x1C01CC4D4 (-xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUt.c)
 *     ?xxxDetermineTouchpadPointerTargetWindow@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAPEAUtagWND@@@Z @ 0x1C01CC7A4 (-xxxDetermineTouchpadPointerTargetWindow@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINPUTFRAME@@PEBUta.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01CD4E0 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01F5D54 (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 */

__int64 __fastcall PointerList::GetPointerOffset(PointerList *this, _QWORD *a2, struct tagPOINT *a3)
{
  __int64 result; // rax

  result = (__int64)FindNodeById((unsigned __int16)this, 0, 0);
  if ( result )
  {
    *a2 = *(_QWORD *)(result + 64);
    return 1LL;
  }
  return result;
}
