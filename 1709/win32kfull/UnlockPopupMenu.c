/*
 * XREFs of UnlockPopupMenu @ 0x1C0205C6C
 * Callers:
 *     MNFreePopup @ 0x1C01F6E14 (MNFreePopup.c)
 *     xxxMNKeyDown @ 0x1C0207450 (xxxMNKeyDown.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?UnlockPopupMenuWindow@@YAXPEAUtagMENU@@PEAUtagWND@@@Z @ 0x1C0204B48 (-UnlockPopupMenuWindow@@YAXPEAUtagMENU@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall UnlockPopupMenu(_QWORD *a1, struct tagMENU **a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx

  v4 = 0LL;
  if ( *a2 )
  {
    UnlockPopupMenuWindow(*a2, *(struct tagWND **)(*(_QWORD *)*a1 + 8LL));
    v4 = HMAssignmentUnlock(a2);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, (__int64)a2, a3, a4);
  return v4;
}
