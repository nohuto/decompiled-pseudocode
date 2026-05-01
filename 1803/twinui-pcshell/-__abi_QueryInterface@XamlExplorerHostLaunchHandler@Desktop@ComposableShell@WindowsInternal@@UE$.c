/*
 * XREFs of ?__abi_QueryInterface@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1801FB560
 * Callers:
 *     ?__abi_QueryInterface@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@W7E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1800A9230 (-__abi_QueryInterface@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@W7E.c)
 *     ?__abi_QueryInterface@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBA@E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1800A9240 (-__abi_QueryInterface@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBA.c)
 *     ?__abi_QueryInterface@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBI@E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1800A9250 (-__abi_QueryInterface@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBI.c)
 *     ?__abi_QueryInterface@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WCA@E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1800A9260 (-__abi_QueryInterface@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WCA.c)
 * Callees:
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x18013E9F4 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x1801FB048 (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1801FB634 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::__abi_QueryInterface(
        __int64 a1,
        Platform::Guid *a2)
{
  Platform::Guid *v2; // rcx
  _QWORD *v3; // r9
  void **v4; // r11
  Platform::Guid *v5; // rcx
  Platform::Guid *v6; // r10
  Platform::Guid *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // r11
  __int64 v11; // rcx
  __int64 v12; // r8
  struct Platform::Guid *v13; // r10

  if ( Platform::Guid::Equals(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || Platform::Guid::Equals(v2, &_uuidof__AVXamlExplorerHostLaunchHandler_Desktop_ComposableShell_WindowsInternal__)
    || v3[6] && Platform::Guid::Equals(v5, &_uuidof__AUIAgileObject_Details_Platform__) )
  {
    v11 = (__int64)(v3 + 5);
    goto LABEL_13;
  }
  if ( Platform::Guid::Equals(v6, &_uuidof__AUIWeakReferenceSource_Details_Platform__) )
  {
    v11 = v8;
    *v10 = (v9 + 24) & -(__int64)(v9 != 0);
LABEL_14:
    __abi_FTMWeakRefData::Increment(v11);
    return 0LL;
  }
  if ( Platform::Guid::Equals(
         v7,
         &_uuidof__AU__abi_IDelegate_XamlExplorerHostLaunchHandler_Desktop_ComposableShell_WindowsInternal__) )
  {
    v11 = v12;
LABEL_13:
    *v4 = v3;
    goto LABEL_14;
  }
  if ( !*(_QWORD *)(v12 + 8)
    || __abi_FTMWeakRefData::__abi_QueryInterface(
         (__abi_FTMWeakRefData *)(v12 & -(__int64)(*(_QWORD *)(v12 + 8) != 0LL)),
         v13,
         v4) )
  {
    return 2147500034LL;
  }
  return 0LL;
}
