/*
 * XREFs of ?__abi_QueryInterface@?QObject@Platform@@XamlBaseViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1801438B0
 * Callers:
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAllUpViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180143A70 (-__abi_QueryInterface@-QObject@Platform@@XamlAllUpViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlAltTabViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180144070 (-__abi_QueryInterface@-QObject@Platform@@XamlAltTabViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlSnapAssistViewController@@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180145320 (-__abi_QueryInterface@-QObject@Platform@@XamlSnapAssistViewController@@UE$AAAJAEAVGuid@2@PEAPEAX.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlBaseViewController@@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180146A10 (-__abi_QueryInterface@-QObject@Platform@@XamlBaseViewController@@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlBaseViewController@@W7E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180146A90 (-__abi_QueryInterface@-QObject@Platform@@XamlBaseViewController@@W7E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlBaseViewController@@WCI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180146AA0 (-__abi_QueryInterface@-QObject@Platform@@XamlBaseViewController@@WCI@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlBaseViewController@@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180146B00 (-__abi_QueryInterface@-QObject@Platform@@XamlBaseViewController@@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@XamlBaseViewController@@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180146B40 (-__abi_QueryInterface@-QObject@Platform@@XamlBaseViewController@@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z.c)
 * Callees:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1801202E8 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 */

__int64 __fastcall ___abi_QueryInterface__QObject_Platform__XamlBaseViewController__UE_AAAJAEAVGuid_2_PEAPEAX_Z(
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
    || *(_DWORD *)a2 == 240491784
    && *(_DWORD *)(a2 + 4) == 1020684960
    && *(_DWORD *)(a2 + 8) == 1139304602
    && *(_DWORD *)(a2 + 12) == 319010492
    || (v5 = a1 + 12, a1[13])
    && *(_DWORD *)a2 == -1796592748
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
  {
    *a3 = a1;
    if ( !a1[12] || *(int *)(a1[12] + 12LL) < 0 )
      return 0LL;
    v6 = a1[12];
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
  if ( *(_DWORD *)a2 == -1879262123
    && *(_DWORD *)(a2 + 4) == 1070415964
    && *(_DWORD *)(a2 + 8) == -246965827
    && *(_DWORD *)(a2 + 12) == -1283348586 )
  {
    v7 = (unsigned __int64)(a1 + 1);
    goto LABEL_26;
  }
  if ( *(_DWORD *)a2 == -915487802
    && *(_DWORD *)(a2 + 4) == 975874190
    && *(_DWORD *)(a2 + 8) == -1501101903
    && *(_DWORD *)(a2 + 12) == -411912443 )
  {
    v7 = (unsigned __int64)(a1 + 2);
LABEL_26:
    *a3 = (void *)(v7 & -(__int64)(a1 != 0LL));
    if ( !*v5 || *(int *)(*v5 + 12LL) < 0 )
      return 0LL;
    v6 = *v5;
    goto LABEL_29;
  }
  if ( a1[13]
    && !(unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                        (__abi_FTMWeakRefData *)((unsigned __int64)(a1 + 12) & -(__int64)(a1[13] != 0LL)),
                        (struct Platform::Guid *)a2,
                        a3) )
  {
    return 0LL;
  }
  return 2147500034LL;
}
