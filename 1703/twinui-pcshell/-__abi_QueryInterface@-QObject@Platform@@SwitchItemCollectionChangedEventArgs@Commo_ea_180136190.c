/*
 * XREFs of ?__abi_QueryInterface@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180136190
 * Callers:
 *     ?__abi_QueryInterface@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180136060 (-__abi_QueryInterface@-QObject@Platform@@SwitchItemCollectionChangedEventArgs@Common@Multitaskin.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180136150 (-__abi_QueryInterface@-QObject@Platform@@SwitchItemCollectionChangedEventArgs@Commo_ea_180136150.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180136180 (-__abi_QueryInterface@-QObject@Platform@@SwitchItemCollectionChangedEventArgs@Commo_ea_180136180.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180136320 (-__abi_QueryInterface@-QObject@Platform@@SwitchItemCollectionChangedEventArgs@Commo_ea_180136320.c)
 * Callees:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1801202E8 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 */

__int64 __fastcall ___abi_QueryInterface__QObject_Platform__SwitchItemCollectionChangedEventArgs_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__UE_AAAJAEAVGuid_2_PEAPEAX_Z(
        _QWORD *a1,
        __int64 a2,
        void **a3)
{
  _QWORD *v5; // r8
  __int64 v6; // rax
  unsigned __int64 v7; // rcx

  if ( !*(_DWORD *)a2
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || *(_DWORD *)a2 == -1350114592
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4]
    || *(_DWORD *)a2 == 1355176354
    && *(_DWORD *)(a2 + 4) == 835648508
    && *(_DWORD *)(a2 + 8) == -456377725
    && *(_DWORD *)(a2 + 12) == -116510702
    || (v5 = a1 + 7, a1[8])
    && *(_DWORD *)a2 == -1796592748
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
  {
    *a3 = a1;
    if ( !a1[7] || *(int *)(a1[7] + 12LL) < 0 )
      return 0LL;
    v6 = a1[7];
LABEL_29:
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
    return 0LL;
  }
  if ( *(_DWORD *)a2 == 56
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
  {
    v7 = (unsigned __int64)(a1 + 3);
    goto LABEL_26;
  }
  if ( *(_DWORD *)a2 == -776018380
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_d1bee634_ee30_47b9_8bdd_e64349e86365.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_d1bee634_ee30_47b9_8bdd_e64349e86365.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_d1bee634_ee30_47b9_8bdd_e64349e86365.Data4[4] )
  {
    v7 = (unsigned __int64)(a1 + 1);
LABEL_26:
    *a3 = (void *)(v7 & -(__int64)(a1 != 0LL));
    if ( !*v5 || *(int *)(*v5 + 12LL) < 0 )
      return 0LL;
    v6 = *v5;
    goto LABEL_29;
  }
  if ( a1[8]
    && !(unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                        (__abi_FTMWeakRefData *)((unsigned __int64)(a1 + 7) & -(__int64)(a1[8] != 0LL)),
                        (struct Platform::Guid *)a2,
                        a3) )
  {
    return 0LL;
  }
  return 2147500034LL;
}
