/*
 * XREFs of UnlockPopupMenu @ 0x1C0204220
 * Callers:
 *     MNFreePopup @ 0x1C01EAF7C (MNFreePopup.c)
 *     xxxMNKeyDown @ 0x1C020589C (xxxMNKeyDown.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?UnlockPopupMenuWindow@@YAXPEAUtagMENU@@PEAUtagWND@@@Z @ 0x1C0203154 (-UnlockPopupMenuWindow@@YAXPEAUtagMENU@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall UnlockPopupMenu(_QWORD *a1, struct tagMENU **a2)
{
  __int64 v3; // rbx

  v3 = 0LL;
  if ( *a2 )
  {
    UnlockPopupMenuWindow(*a2, *(struct tagWND **)(*a1 + 8LL));
    v3 = HMAssignmentUnlock(a2);
  }
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
  return v3;
}
