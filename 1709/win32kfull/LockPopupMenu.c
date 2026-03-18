/*
 * XREFs of LockPopupMenu @ 0x1C020580C
 * Callers:
 *     xxxMNStartMenu @ 0x1C01F72BC (xxxMNStartMenu.c)
 *     xxxMNKeyDown @ 0x1C0207450 (xxxMNKeyDown.c)
 *     xxxMNOpenHierarchy @ 0x1C02082B0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?UnlockPopupMenuWindow@@YAXPEAUtagMENU@@PEAUtagWND@@@Z @ 0x1C0204B48 (-UnlockPopupMenuWindow@@YAXPEAUtagMENU@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall LockPopupMenu(_QWORD *a1, struct tagMENU **a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int128 v11; // [rsp+20h] [rbp-48h]
  __int128 v12; // [rsp+30h] [rbp-38h]
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF
  __int128 v14; // [rsp+50h] [rbp-18h] BYREF

  UnlockPopupMenuWindow(*a2, *(struct tagWND **)(*(_QWORD *)*a1 + 8LL));
  if ( a3 )
  {
    *(_QWORD *)&v11 = a3 + 88;
    *((_QWORD *)&v11 + 1) = *(_QWORD *)(*(_QWORD *)*a1 + 8LL);
    v13 = v11;
    HMAssignmentLock(&v13);
  }
  *(_QWORD *)&v12 = a2;
  *((_QWORD *)&v12 + 1) = a3;
  v14 = v12;
  v6 = HMAssignmentLock(&v14);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1, v7, v8, v9);
  return v6;
}
