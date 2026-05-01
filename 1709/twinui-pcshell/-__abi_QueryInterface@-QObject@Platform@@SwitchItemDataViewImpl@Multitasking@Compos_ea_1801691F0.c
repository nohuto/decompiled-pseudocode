/*
 * XREFs of ?__abi_QueryInterface@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1801691F0
 * Callers:
 *     ?__abi_QueryInterface@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@W7E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1801615C0 (-__abi_QueryInterface@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Int.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180161C40 (-__abi_QueryInterface@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@Compos_ea_180161C40.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180169070 (-__abi_QueryInterface@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@Compos_ea_180169070.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1801690C0 (-__abi_QueryInterface@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@Compos_ea_1801690C0.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WCI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1801693B0 (-__abi_QueryInterface@-QObject@Platform@@SwitchItemDataViewImpl@Multitasking@Compos_ea_1801693B0.c)
 * Callees:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18014A828 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 */

__int64 __fastcall ___abi_QueryInterface__QObject_Platform__SwitchItemDataViewImpl_Multitasking_ComposableShell_Internal_Windows__UE_AAAJAEAVGuid_2_PEAPEAX_Z(
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
    || *(_DWORD *)a2 == 1888190428
    && *(_DWORD *)(a2 + 4) == 983066139
    && *(_DWORD *)(a2 + 8) == 539926173
    && *(_DWORD *)(a2 + 12) == -60297364
    || (v5 = a1 + 15, a1[16])
    && *(_DWORD *)a2 == -1796592748
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
  {
    *a3 = a1;
    if ( !a1[15] || *(int *)(a1[15] + 12LL) < 0 )
      return 0LL;
    v6 = a1[15];
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
  if ( *(_DWORD *)a2 == 653622313
    && *(_DWORD *)(a2 + 4) == 1254889378
    && *(_DWORD *)(a2 + 8) == -745902940
    && *(_DWORD *)(a2 + 12) == 141623087 )
  {
    v7 = (unsigned __int64)(a1 + 2);
    goto LABEL_26;
  }
  if ( *(_DWORD *)a2 == 1080060051
    && *(_DWORD *)(a2 + 4) == 1276678669
    && *(_DWORD *)(a2 + 8) == 1623113873
    && *(_DWORD *)(a2 + 12) == -591271901 )
  {
    v7 = (unsigned __int64)(a1 + 1);
LABEL_26:
    *a3 = (void *)(v7 & -(__int64)(a1 != 0LL));
    if ( !*v5 || *(int *)(*v5 + 12LL) < 0 )
      return 0LL;
    v6 = *v5;
    goto LABEL_29;
  }
  if ( a1[16]
    && !(unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                        (__abi_FTMWeakRefData *)((unsigned __int64)(a1 + 15) & -(__int64)(a1[16] != 0LL)),
                        (struct Platform::Guid *)a2,
                        a3) )
  {
    return 0LL;
  }
  return 2147500034LL;
}
