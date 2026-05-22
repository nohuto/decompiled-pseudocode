/*
 * XREFs of ?RegisterOverride@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x18002F5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace_back@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@$$QEAV234@@Z @ 0x18000C08C (--$emplace_back@V-$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VInputSite.c)
 *     ?SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x18002F618 (-SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverr.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerNavigationManager::RegisterOverride(
        __int64 **this,
        struct BamoControllerNavigationManagerStub *a2,
        struct BamoControllerNavigationOverrideProxy *a3)
{
  struct BamoControllerNavigationOverrideProxy *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = a3;
  if ( a3 )
    (**(void (__fastcall ***)(struct BamoControllerNavigationOverrideProxy *, struct BamoControllerNavigationManagerStub *))a3)(
      a3,
      a2);
  std::vector<Microsoft::WRL::ComPtr<InputSiteElementProxy>>::emplace_back<Microsoft::WRL::ComPtr<InputSiteElementProxy>>(
    this + 25,
    (__int64 *)&v6);
  if ( v6 )
    (*(void (__fastcall **)(struct BamoControllerNavigationOverrideProxy *))(*(_QWORD *)v6 + 8LL))(v6);
  ControllerNavigationManager::SetCurrentStateWithOverride((ControllerNavigationManager *)this, a3);
  return 0LL;
}
