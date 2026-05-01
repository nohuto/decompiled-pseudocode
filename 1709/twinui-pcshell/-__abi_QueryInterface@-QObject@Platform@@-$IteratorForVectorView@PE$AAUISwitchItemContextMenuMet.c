/*
 * XREFs of ?__abi_QueryInterface@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@2@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180174390
 * Callers:
 *     ?__abi_QueryInterface@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@2@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1801776A0 (-__abi_QueryInterface@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItemC_ea_1801776A0.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@2@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180177A00 (-__abi_QueryInterface@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItemC_ea_180177A00.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@2@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180177D20 (-__abi_QueryInterface@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItemC_ea_180177D20.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@2@W7E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180178040 (-__abi_QueryInterface@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItemC_ea_180178040.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@2@WCI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180178080 (-__abi_QueryInterface@-QObject@Platform@@-$IteratorForVectorView@PE$AAUISwitchItemC_ea_180178080.c)
 * Callees:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18014A828 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 */

__int64 __fastcall ___abi_QueryInterface__QObject_Platform____IteratorForVectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Details_Collections_2_UE_AAAJAEAVGuid_2_PEAPEAX_Z(
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
    || *(_DWORD *)a2 == 286260821
    && *(_DWORD *)(a2 + 4) == 1368534256
    && *(_DWORD *)(a2 + 8) == -1321030994
    && *(_DWORD *)(a2 + 12) == 22596014
    || (v5 = a1 + 11, a1[12])
    && *(_DWORD *)a2 == -1796592748
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
  {
    *a3 = a1;
    if ( !a1[11] || *(int *)(a1[11] + 12LL) < 0 )
      return 0LL;
    v6 = a1[11];
LABEL_29:
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
    return 0LL;
  }
  if ( *(_DWORD *)a2 == 56
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
  {
    v7 = (unsigned __int64)(a1 + 4);
    goto LABEL_26;
  }
  if ( *(_DWORD *)a2 == 1780313095
    && *(_DWORD *)(a2 + 4) == 1240598381
    && *(_DWORD *)(a2 + 8) == 754259075
    && *(_DWORD *)(a2 + 12) == 830708380 )
  {
    v7 = (unsigned __int64)(a1 + 2);
    goto LABEL_26;
  }
  if ( *(_DWORD *)a2 == -152499000
    && *(_DWORD *)(a2 + 4) == 954333257
    && *(_DWORD *)(a2 + 8) == -1251490145
    && *(_DWORD *)(a2 + 12) == 184384777 )
  {
    v7 = (unsigned __int64)(a1 + 1);
LABEL_26:
    *a3 = (void *)(v7 & -(__int64)(a1 != 0LL));
    if ( !*v5 || *(int *)(*v5 + 12LL) < 0 )
      return 0LL;
    v6 = *v5;
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
  return 2147500034LL;
}
