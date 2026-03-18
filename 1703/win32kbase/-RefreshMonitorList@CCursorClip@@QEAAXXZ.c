/*
 * XREFs of ?RefreshMonitorList@CCursorClip@@QEAAXXZ @ 0x1C0072394
 * Callers:
 *     ?UpdateUserScreen@@YAJH@Z @ 0x1C0070960 (-UpdateUserScreen@@YAJH@Z.c)
 *     UserProcessInputIsolationPolicy @ 0x1C0130CBC (UserProcessInputIsolationPolicy.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C0072598 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     SnapshotMonitorRects @ 0x1C0074200 (SnapshotMonitorRects.c)
 */

void __fastcall CCursorClip::RefreshMonitorList(CCursorClip *this)
{
  PDRIVER_CONTROL DeviceRoutine; // rdi
  __int64 v2; // rcx
  struct tagRECT v3; // xmm0
  struct tagRECT v4; // [rsp+20h] [rbp-18h] BYREF

  DeviceRoutine = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  RIMLockExclusive((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 32);
  v2 = *((_QWORD *)DeviceRoutine + 6);
  if ( v2 )
  {
    Win32FreePool(v2);
    *((_QWORD *)DeviceRoutine + 6) = 0LL;
  }
  *((_QWORD *)DeviceRoutine + 7) = 0LL;
  *((_QWORD *)DeviceRoutine + 6) = SnapshotMonitorRects();
  v3 = *(struct tagRECT *)(*(_QWORD *)gpDispInfo + 24LL);
  *(struct tagRECT *)DeviceRoutine = v3;
  v4 = v3;
  CCursorClip::UpdateClipRect((CCursorClip *)DeviceRoutine, &v4);
  *((_QWORD *)DeviceRoutine + 5) = 0LL;
  ExReleasePushLockExclusiveEx((char *)DeviceRoutine + 32, 0LL);
  KeLeaveCriticalRegion();
}
