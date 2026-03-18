/*
 * XREFs of ?IsTargetSetForRetrieval@@YAHPEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01CB838
 * Callers:
 *     ?RevalidateFrameProcessing@@YAHPEAUtagTHREADINFO@@HPEBUtagPOINTERINFONODE@@H@Z @ 0x1C01CC0D0 (-RevalidateFrameProcessing@@YAHPEAUtagTHREADINFO@@HPEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@HPEAHPEAUtagPOINT@@@Z @ 0x1C01CC4D4 (-xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUt.c)
 *     ?xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01CD184 (-xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01CD4E0 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsTargetSetForRetrieval(struct tagTHREADINFO *a1, const struct tagPOINTERINFONODE *a2)
{
  int v2; // eax

  v2 = *(_DWORD *)a2;
  if ( (*((_DWORD *)a1 + 296) & 0x2000) != 0 )
    return (unsigned int)-__CFSHR__(v2, 9);
  return (v2 & 0x100) != 0 && (v2 & 0x200) == 0;
}
