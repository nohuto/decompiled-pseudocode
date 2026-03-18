/*
 * XREFs of MNFreePopup @ 0x1C01EAF7C
 * Callers:
 *     MNFlushDestroyedPopups @ 0x1C01EAD30 (MNFlushDestroyedPopups.c)
 *     xxxMNEndMenuState @ 0x1C01EB210 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C01EB83C (xxxMNStartMenuState.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0203244 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 * Callees:
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005D060 (safe_cast_fnid_to_PMENUWND.c)
 *     UnlockPopupMenu @ 0x1C0204220 (UnlockPopupMenu.c)
 */

_QWORD *__fastcall MNFreePopup(__int64 *a1)
{
  __int64 v2; // rax
  void *v3; // r8
  __int64 v4; // rbx
  __int64 v5; // rbx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*a1 + 16));
  if ( v2 && v3 != gpopupMenu )
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_QWORD *)(v2 + 16) = *a1;
  }
  HMAssignmentUnlock(*a1 + 24);
  HMAssignmentUnlock(*a1 + 32);
  v4 = *a1;
  SmartObjStackRef<tagPOPUPMENU>::Init(v7, *a1);
  UnlockPopupMenu(v7, v4 + 40);
  v5 = *a1;
  SmartObjStackRef<tagPOPUPMENU>::Init(v7, *a1);
  UnlockPopupMenu(v7, v5 + 48);
  HMAssignmentUnlock(*a1 + 8);
  HMAssignmentUnlock(*a1 + 56);
  HMAssignmentUnlock(*a1 + 16);
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
}
