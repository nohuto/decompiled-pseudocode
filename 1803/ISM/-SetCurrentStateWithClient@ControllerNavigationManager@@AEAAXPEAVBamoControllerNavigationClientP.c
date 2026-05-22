/*
 * XREFs of ?SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18002F550
 * Callers:
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180006D40 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?RegisterClient@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVBamoControllerNavigationClientProxy@@@Z @ 0x18002F3E0 (-RegisterClient@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVB.c)
 *     ?OnEnabledChanged@ControllerNavigationClientProxy@@MEAAJXZ @ 0x180030BE0 (-OnEnabledChanged@ControllerNavigationClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ?EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18002F1D4 (-EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z.c)
 *     ?DisableNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x18002F290 (-DisableNavigation@ControllerNavigationManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ControllerNavigationManager::SetCurrentStateWithClient(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationClientProxy *a2)
{
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 32LL))((char *)a2 + 8) )
    ControllerNavigationManager::EnableNavigation(this, a2);
  else
    ControllerNavigationManager::DisableNavigation(this);
}
