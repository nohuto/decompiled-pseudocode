/*
 * XREFs of ?DisableNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x18002F290
 * Callers:
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180006D40 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18002F550 (-SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientP.c)
 *     ?OnDisconnected@ControllerNavigationClientProxy@@MEAAJXZ @ 0x180030C80 (-OnDisconnected@ControllerNavigationClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ?NavigationDisable@ControllerProcessor@@QEAAJXZ @ 0x180033268 (-NavigationDisable@ControllerProcessor@@QEAAJXZ.c)
 */

void __fastcall ControllerNavigationManager::DisableNavigation(ControllerNavigationManager *this)
{
  __int64 ***v1; // rdi
  __int64 **i; // rbx

  v1 = (__int64 ***)*((_QWORD *)this + 9);
  for ( i = *v1; i != (__int64 **)v1; i = (__int64 **)*i )
    ControllerProcessor::NavigationDisable((ControllerProcessor *)i[3]);
  (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 1) + 32LL))((char *)this + 8, 0LL);
}
