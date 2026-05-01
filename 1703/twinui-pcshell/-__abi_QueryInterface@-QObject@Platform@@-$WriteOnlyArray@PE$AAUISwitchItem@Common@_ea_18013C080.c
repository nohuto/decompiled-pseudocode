/*
 * XREFs of ?__abi_QueryInterface@?QObject@Platform@@?$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18013C080
 * Callers:
 *     ?__abi_QueryInterface@?QObject@Platform@@?$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@W7E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18013B9C0 (-__abi_QueryInterface@-QObject@Platform@@-$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18013BA00 (-__abi_QueryInterface@-QObject@Platform@@-$WriteOnlyArray@PE$AAUISwitchItem@Common@_ea_18013BA00.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18013BA30 (-__abi_QueryInterface@-QObject@Platform@@-$WriteOnlyArray@PE$AAUISwitchItem@Common@_ea_18013BA30.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$WriteOnlyArray@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18013BA40 (-__abi_QueryInterface@-QObject@Platform@@-$WriteOnlyArray@PE$AAUISwitchItem@Common@_ea_18013BA40.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$Array@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x18013C210 (-__abi_QueryInterface@-QObject@Platform@@-$Array@PE$AAUISwitchItem@Common@Multitask_ea_18013C210.c)
 * Callees:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1801202E8 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 */

__int64 __fastcall ___abi_QueryInterface__QObject_Platform____WriteOnlyArray_PE_AAUISwitchItem_Common_Multitasking_Experiences_ComposableShell_WindowsInternal___00_2_UE_AAAJAEAVGuid_2_PEAPEAX_Z(
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
    || *(_DWORD *)a2 == -272893061
    && *(_DWORD *)(a2 + 4) == 867123514
    && *(_DWORD *)(a2 + 8) == 232908699
    && *(_DWORD *)(a2 + 12) == -654874067
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
  if ( *(_DWORD *)a2 == 819308585
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&_uuidof__AUIDisposable_Platform__.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)_uuidof__AUIDisposable_Platform__.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&_uuidof__AUIDisposable_Platform__.Data4[4] )
  {
    v7 = (unsigned __int64)(a1 + 1);
    goto LABEL_26;
  }
  if ( *(_DWORD *)a2 == 56
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
  {
    v7 = (unsigned __int64)(a1 + 3);
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
