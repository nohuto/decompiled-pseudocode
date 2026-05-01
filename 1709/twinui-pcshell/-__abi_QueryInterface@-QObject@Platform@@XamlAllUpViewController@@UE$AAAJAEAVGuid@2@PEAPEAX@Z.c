/*
 * XREFs of ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180178940
 * Callers:
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WII@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180177690 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WII@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1801778B0 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WDA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180177900 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WDA@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WJA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1801779E0 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WJA@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180177BE0 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180177F10 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WIA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180178020 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WIA@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@W7E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1801781C0 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@W7E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@WCI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1801781D0 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@WCI@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 * Callees:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18014A828 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlBaseViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180178780 (-__abi_QueryInterface@-QObject@Platform@@XamlBaseViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 */

__int64 __fastcall ___abi_QueryInterface__QObject_Platform__XamlAllUpViewController__UE_AAAJAEAVGuid_2_PEAPEAX_Z(
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
    || *(_DWORD *)a2 == 2101284408
    && *(_DWORD *)(a2 + 4) == 1051281424
    && *(_DWORD *)(a2 + 8) == -1050331480
    && *(_DWORD *)(a2 + 12) == 723772329
    || (v6 = a1 + 13, a1[14])
    && *(_DWORD *)a2 == -1796592748
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
  {
    *a3 = a1;
    if ( !a1[13] || *(int *)(a1[13] + 12LL) < 0 )
      return 0LL;
    v7 = a1[13];
LABEL_29:
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
    return 0LL;
  }
  if ( *(_DWORD *)a2 == 56
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
  {
    v8 = (unsigned __int64)(a1 + 17);
    goto LABEL_26;
  }
  if ( *(_DWORD *)a2 == -1879262123
    && *(_DWORD *)(a2 + 4) == 1070415964
    && *(_DWORD *)(a2 + 8) == -246965827
    && *(_DWORD *)(a2 + 12) == -1283348586 )
  {
    v8 = (unsigned __int64)(a1 + 2);
    goto LABEL_26;
  }
  if ( *(_DWORD *)a2 == -915487802
    && *(_DWORD *)(a2 + 4) == 975874190
    && *(_DWORD *)(a2 + 8) == -1501101903
    && *(_DWORD *)(a2 + 12) == -411912443 )
  {
    v8 = (unsigned __int64)(a1 + 3);
    goto LABEL_26;
  }
  if ( *(_DWORD *)a2 == 240491784
    && *(_DWORD *)(a2 + 4) == 1020684960
    && *(_DWORD *)(a2 + 8) == 1139304602
    && *(_DWORD *)(a2 + 12) == 319010492 )
  {
    v8 = (unsigned __int64)(a1 + 1);
    goto LABEL_26;
  }
  if ( *(_DWORD *)a2 == -1558760443
    && *(_DWORD *)(a2 + 4) == 1007450880
    && *(_DWORD *)(a2 + 8) == 1632090541
    && *(_DWORD *)(a2 + 12) == 1779938310 )
  {
    v8 = (unsigned __int64)(a1 + 16);
LABEL_26:
    *a3 = (void *)(v8 & -(__int64)(a1 != 0LL));
    if ( !*v6 || *(int *)(*v6 + 12LL) < 0 )
      return 0LL;
    v7 = *v6;
    goto LABEL_29;
  }
  if ( a1[14]
    && !(unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                        (__abi_FTMWeakRefData *)((unsigned __int64)(a1 + 13) & -(__int64)(a1[14] != 0LL)),
                        (struct Platform::Guid *)a2,
                        a3) )
  {
    return 0LL;
  }
  return ___abi_QueryInterface__QObject_Platform__XamlBaseViewController__UE_AAAJAEAVGuid_2_PEAPEAX_Z(a1 + 1, a2, a3);
}
