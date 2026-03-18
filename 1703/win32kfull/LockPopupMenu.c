/*
 * XREFs of LockPopupMenu @ 0x1C0203D60
 * Callers:
 *     xxxMNStartMenu @ 0x1C01EB49C (xxxMNStartMenu.c)
 *     xxxMNKeyDown @ 0x1C020589C (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C0206528 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?UnlockPopupMenuWindow@@YAXPEAUtagMENU@@PEAUtagWND@@@Z @ 0x1C0203154 (-UnlockPopupMenuWindow@@YAXPEAUtagMENU@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall LockPopupMenu(_QWORD *a1, struct tagMENU **a2, __int64 a3)
{
  __int64 v6; // rbx
  struct tagMENU **v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  UnlockPopupMenuWindow(*a2, *(struct tagWND **)(*a1 + 8LL));
  if ( a3 )
  {
    v8 = (struct tagMENU **)(a3 + 88);
    v9 = *(_QWORD *)(*a1 + 8LL);
    HMAssignmentLock(&v8);
  }
  v8 = a2;
  v9 = a3;
  v6 = HMAssignmentLock(&v8);
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
  return v6;
}
