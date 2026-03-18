/*
 * XREFs of MNFreePopup @ 0x1C01F6E14
 * Callers:
 *     MNFlushDestroyedPopups @ 0x1C01F6D20 (MNFlushDestroyedPopups.c)
 *     xxxMNEndMenuState @ 0x1C01F7030 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C01F7708 (xxxMNStartMenuState.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0204C3C (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00601F8 (safe_cast_fnid_to_PMENUWND.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     UnlockPopupMenu @ 0x1C0205C6C (UnlockPopupMenu.c)
 */

_QWORD *__fastcall MNFreePopup(__int64 **a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 16));
  if ( v2 && (void *const)**a1 != gpopupMenu )
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    *(_QWORD *)(v2 + 16) = **a1;
  }
  HMAssignmentUnlock(**a1 + 24);
  HMAssignmentUnlock(**a1 + 32);
  v3 = **a1;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v13, v3, v4, v5);
  UnlockPopupMenu(v13, v3 + 40);
  v6 = **a1;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v14, v6, v7, v8);
  UnlockPopupMenu(v14, v6 + 48);
  HMAssignmentUnlock(**a1 + 8);
  HMAssignmentUnlock(**a1 + 56);
  HMAssignmentUnlock(**a1 + 16);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v9, v10, v11);
}
