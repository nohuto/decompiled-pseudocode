/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CB420
 * Callers:
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x1800171CC (--1DWMInputRouter@@MEAA@XZ.c)
 *     ??1?$DynamicSizeMap@U_GUID@@V?$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z@std@@$00@@QEAA@XZ @ 0x18001DF30 (--1-$DynamicSizeMap@U_GUID@@V-$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV-$vector@V-$ComPtr@UI.c)
 *     ?SetValueForKey@?$DynamicSizeMap@U_GUID@@V?$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z@std@@$00@@QEAAJAEBU_GUID@@AEBV?$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z@std@@@Z @ 0x18001EF28 (-SetValueForKey@-$DynamicSizeMap@U_GUID@@V-$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV-$vector.c)
 *     ?ProcessInit@PropertyDefinitions@@SAJXZ @ 0x180033254 (-ProcessInit@PropertyDefinitions@@SAJXZ.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x180068FE4 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180069170 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??1EyeProperty@HolographicDisplaySnapshot@Holographic@Internal@Windows@@QEAA@XZ @ 0x180076C90 (--1EyeProperty@HolographicDisplaySnapshot@Holographic@Internal@Windows@@QEAA@XZ.c)
 *     ??$destroy@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@std@@@?$_Wrap_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@std@@PEAX@std@@@std@@@std@@QEAAXPEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UHolographicDisplaySnapshot@Holographic@Internal@Windows@@@1@@Z @ 0x180076CD8 (--$destroy@U-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UHologra.c)
 *     ??_GTargetingArbitrationComponent@@MEAAPEAXI@Z @ 0x1800A3E90 (--_GTargetingArbitrationComponent@@MEAAPEAXI@Z.c)
 *     ?OnHitTest@TargetingArbitrationComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x1800A40B0 (-OnHitTest@TargetingArbitrationComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarg.c)
 *     ?OnGetTargetWithFocus@TargetingArbitrationComponent@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x1800A4540 (-OnGetTargetWithFocus@TargetingArbitrationComponent@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEA.c)
 *     ??_EBufferedInputTarget@@MEAAPEAXI@Z @ 0x1800A4B10 (--_EBufferedInputTarget@@MEAAPEAXI@Z.c)
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$14 @ 0x1800CE2F3 (_PropertyDefinitions--ProcessInit_--_1_--dtor$14.c)
 *     _TargetingArbitrationComponent::OnHitTest_::_1_::dtor$2 @ 0x1800D1780 (_TargetingArbitrationComponent--OnHitTest_--_1_--dtor$2.c)
 *     _TargetingArbitrationComponent::OnGetTargetWithFocus_::_1_::dtor$2 @ 0x1800D17D1 (_TargetingArbitrationComponent--OnGetTargetWithFocus_--_1_--dtor$2.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CB48C (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 v4; // rbx
  char *v6; // rdi

  v4 = a3;
  v6 = &a1[a3 * a2];
  while ( v4-- )
  {
    v6 -= a2;
    _guard_dispatch_icall_fptr();
  }
}
