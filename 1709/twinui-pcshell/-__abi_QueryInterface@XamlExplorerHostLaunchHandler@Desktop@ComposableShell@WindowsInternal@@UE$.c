/*
 * XREFs of ?__abi_QueryInterface@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18014A2C0
 * Callers:
 *     ?__abi_QueryInterface@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WCA@E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18014A030 (-__abi_QueryInterface@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WCA.c)
 *     ?__abi_QueryInterface@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBI@E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18014A080 (-__abi_QueryInterface@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBI.c)
 *     ?__abi_QueryInterface@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBA@E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18014A1A0 (-__abi_QueryInterface@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBA.c)
 *     ?__abi_QueryInterface@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@W7E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18014A1F0 (-__abi_QueryInterface@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@W7E.c)
 * Callees:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18014A828 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::__abi_QueryInterface(
        _QWORD *a1,
        __int64 a2,
        void **a3)
{
  _QWORD *v4; // r8
  __int64 v5; // rax

  if ( !*(_DWORD *)a2
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || *(_DWORD *)a2 == 817583161
    && *(_DWORD *)(a2 + 4) == 1035807039
    && *(_DWORD *)(a2 + 8) == 1232356028
    && *(_DWORD *)(a2 + 12) == 654206972
    || (v4 = a1 + 5, a1[6])
    && *(_DWORD *)a2 == -1796592748
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
  {
    *a3 = a1;
    if ( !a1[5] || *(int *)(a1[5] + 12LL) < 0 )
      return 0LL;
    v5 = a1[5];
LABEL_25:
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 12));
    return 0LL;
  }
  if ( *(_DWORD *)a2 == 56
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
  {
    *a3 = (void *)((unsigned __int64)(a1 + 3) & -(__int64)(a1 != 0LL));
    goto LABEL_22;
  }
  if ( *(_DWORD *)a2 == 9334658
    && *(_DWORD *)(a2 + 4) == 1056738697
    && *(_DWORD *)(a2 + 8) == 1349232786
    && *(_DWORD *)(a2 + 12) == -207912162 )
  {
    *a3 = a1;
LABEL_22:
    if ( !*v4 || *(int *)(*v4 + 12LL) < 0 )
      return 0LL;
    v5 = *v4;
    goto LABEL_25;
  }
  if ( a1[6]
    && !(unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                        (__abi_FTMWeakRefData *)((unsigned __int64)(a1 + 5) & -(__int64)(a1[6] != 0LL)),
                        (struct Platform::Guid *)a2,
                        a3) )
  {
    return 0LL;
  }
  return 2147500034LL;
}
