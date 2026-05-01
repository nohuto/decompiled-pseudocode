/*
 * XREFs of ?__abi_QueryInterface@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180150DE0
 * Callers:
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@W7E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18014EBE0 (-__abi_QueryInterface@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInte.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18014EC40 (-__abi_QueryInterface@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShel_ea_18014EC40.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18014ED60 (-__abi_QueryInterface@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShel_ea_18014ED60.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WFA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18014ED90 (-__abi_QueryInterface@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShel_ea_18014ED90.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18014EEF0 (-__abi_QueryInterface@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShel_ea_18014EEF0.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18014F0D0 (-__abi_QueryInterface@-QObject@Platform@@XamlExplorerHostApp@Desktop@ComposableShel_ea_18014F0D0.c)
 * Callees:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18014A828 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_QueryInterface__QObject_Platform__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAJAEAVGuid_2_PEAPEAX_Z(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  __int64 *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx

  if ( !*(_DWORD *)a2
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || *(_DWORD *)a2 == -1350114592
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4]
    || *(_DWORD *)a2 == -1867656405
    && *(_DWORD *)(a2 + 4) == 933645206
    && *(_DWORD *)(a2 + 8) == -1234886246
    && *(_DWORD *)(a2 + 12) == -796798784
    || (v6 = (__int64 *)(a1 + 224), *(_QWORD *)(a1 + 232))
    && *(_DWORD *)a2 == -1796592748
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
  {
    *a3 = (void *)a1;
    if ( !*(_QWORD *)(a1 + 224) || *(int *)(*(_QWORD *)(a1 + 224) + 12LL) < 0 )
      return 0LL;
    v7 = *(_QWORD *)(a1 + 224);
LABEL_29:
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
    return 0LL;
  }
  if ( *(_DWORD *)a2 == 56
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
  {
    v8 = a1 + 72;
    goto LABEL_26;
  }
  if ( *(_DWORD *)a2 == 637116407
    && *(_DWORD *)(a2 + 4) == 1167758151
    && *(_DWORD *)(a2 + 8) == -793596769
    && *(_DWORD *)(a2 + 12) == 253369569 )
  {
    v8 = a1 + 24;
    goto LABEL_26;
  }
  if ( *(_DWORD *)a2 == -1284088471
    && *(_DWORD *)(a2 + 4) == 1261594789
    && *(_DWORD *)(a2 + 8) == -1174576760
    && *(_DWORD *)(a2 + 12) == 911744780 )
  {
    v8 = a1 + 64;
LABEL_26:
    *a3 = (void *)(v8 & -(__int64)(a1 != 0));
    if ( !*v6 || *(int *)(*v6 + 12) < 0 )
      return 0LL;
    v7 = *v6;
    goto LABEL_29;
  }
  if ( *(_QWORD *)(a1 + 232)
    && !(unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                        (__abi_FTMWeakRefData *)((a1 + 224) & -(__int64)(*(_QWORD *)(a1 + 232) != 0LL)),
                        (struct Platform::Guid *)a2,
                        a3) )
  {
    return 0LL;
  }
  return (***(__int64 (__fastcall ****)(_QWORD, __int64, void **))(a1 + 56))(*(_QWORD *)(a1 + 56), a2, a3);
}
