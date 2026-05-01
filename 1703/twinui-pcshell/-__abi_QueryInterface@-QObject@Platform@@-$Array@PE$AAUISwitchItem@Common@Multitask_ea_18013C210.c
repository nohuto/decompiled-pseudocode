/*
 * XREFs of ?__abi_QueryInterface@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18013C210
 * Callers:
 *     ?__abi_QueryInterface@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@W7E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18013BDD0 (-__abi_QueryInterface@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Common@Multitasking@Experienc.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18013BE00 (-__abi_QueryInterface@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Common@Multitask_ea_18013BE00.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18013BE30 (-__abi_QueryInterface@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Common@Multitask_ea_18013BE30.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18013BE80 (-__abi_QueryInterface@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Common@Multitask_ea_18013BE80.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@WCI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18013BEB0 (-__abi_QueryInterface@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Common@Multitask_ea_18013BEB0.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@WDA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18013C000 (-__abi_QueryInterface@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Common@Multitask_ea_18013C000.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@WDI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18013C030 (-__abi_QueryInterface@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Common@Multitask_ea_18013C030.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@WEA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18013C040 (-__abi_QueryInterface@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Common@Multitask_ea_18013C040.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@WHA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18013C070 (-__abi_QueryInterface@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Common@Multitask_ea_18013C070.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@WHI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18013C460 (-__abi_QueryInterface@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Common@Multitask_ea_18013C460.c)
 * Callees:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1801202E8 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18013C080 (-__abi_QueryInterface@-QObject@Platform@@-$WriteOnlyArray@PE$AAUISwitchItem@Common@_ea_18013C080.c)
 */

__int64 __fastcall ___abi_QueryInterface__QObject_Platform____Array_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___00_2_UE_AAAJAEAVGuid_2_PEAPEAX_Z(
        _QWORD *a1,
        __int64 a2,
        void **a3)
{
  _QWORD *v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx

  if ( !*(_DWORD *)a2
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || *(_DWORD *)a2 == -1350114592
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4]
    || *(_DWORD *)a2 == -397394997
    && *(_DWORD *)(a2 + 4) == 1495372057
    && *(_DWORD *)(a2 + 8) == 693654700
    && *(_DWORD *)(a2 + 12) == 529540179
    || (v6 = a1 + 11, a1[12])
    && *(_DWORD *)a2 == -1796592748
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
  {
    *a3 = a1;
    if ( !a1[11] || *(int *)(a1[11] + 12LL) < 0 )
      return 0LL;
    v7 = a1[11];
LABEL_29:
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
    return 0LL;
  }
  if ( *(_DWORD *)a2 == 1272349405
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62.Data4[4] )
  {
    v8 = (unsigned __int64)(a1 + 1);
    goto LABEL_26;
  }
  if ( *(_DWORD *)a2 == 819308585
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&_uuidof__AUIDisposable_Platform__.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)_uuidof__AUIDisposable_Platform__.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&_uuidof__AUIDisposable_Platform__.Data4[4] )
  {
    v8 = (unsigned __int64)(a1 + 3);
    goto LABEL_26;
  }
  if ( *(_DWORD *)a2 == 56
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
  {
    v8 = (unsigned __int64)(a1 + 14);
    goto LABEL_26;
  }
  if ( *(_DWORD *)a2 == -272893061
    && *(_DWORD *)(a2 + 4) == 867123514
    && *(_DWORD *)(a2 + 8) == 232908699
    && *(_DWORD *)(a2 + 12) == -654874067 )
  {
    v8 = (unsigned __int64)(a1 + 4);
    goto LABEL_26;
  }
  if ( *(_DWORD *)a2 == -1329703976
    && *(_DWORD *)(a2 + 4) == 961987415
    && *(_DWORD *)(a2 + 8) == 284878523
    && *(_DWORD *)(a2 + 12) == 668386705 )
  {
    v8 = (unsigned __int64)(a1 + 2);
LABEL_26:
    *a3 = (void *)(v8 & -(__int64)(a1 != 0LL));
    if ( !*v6 || *(int *)(*v6 + 12LL) < 0 )
      return 0LL;
    v7 = *v6;
    goto LABEL_29;
  }
  if ( a1[12]
    && !(unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                        (__abi_FTMWeakRefData *)((unsigned __int64)(a1 + 11) & -(__int64)(a1[12] != 0LL)),
                        (struct Platform::Guid *)a2,
                        a3) )
  {
    return 0LL;
  }
  return ___abi_QueryInterface__QObject_Platform____WriteOnlyArray_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___00_2_UE_AAAJAEAVGuid_2_PEAPEAX_Z(
           a1 + 4,
           a2,
           a3);
}
