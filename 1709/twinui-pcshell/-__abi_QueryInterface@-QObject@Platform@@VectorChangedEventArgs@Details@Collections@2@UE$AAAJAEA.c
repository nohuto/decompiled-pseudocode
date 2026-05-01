/*
 * XREFs of ?__abi_QueryInterface@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@UE$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180165270
 * Callers:
 *     ?__abi_QueryInterface@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@W7E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x1801650B0 (-__abi_QueryInterface@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@W7E$AAAJAE.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WBA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180165100 (-__abi_QueryInterface@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WBA@E$AAAJ.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WBI@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180165150 (-__abi_QueryInterface@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WBI@E$AAAJ.c)
 *     ?__abi_QueryInterface@?QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WCA@E$AAAJAEAVGuid@2@PEAPEAX@Z @ 0x180165400 (-__abi_QueryInterface@-QObject@Platform@@VectorChangedEventArgs@Details@Collections@2@WCA@E$AAAJ.c)
 * Callees:
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x18014A828 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 */

__int64 __fastcall ___abi_QueryInterface__QObject_Platform__VectorChangedEventArgs_Details_Collections_2_UE_AAAJAEAVGuid_2_PEAPEAX_Z(
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
    || *(_DWORD *)a2 == 1465463775
    && *(_DWORD *)(a2 + 4) == 1149252862
    && *(_DWORD *)(a2 + 8) == 1762071983
    && *(_DWORD *)(a2 + 12) == -1688388321
    || (v5 = a1 + 6, a1[7])
    && *(_DWORD *)a2 == -1796592748
    && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4] )
  {
    *a3 = a1;
    if ( !a1[6] || *(int *)(a1[6] + 12LL) < 0 )
      return 0LL;
    v6 = a1[6];
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
  if ( *(_DWORD *)a2 == 67220646
    && *(_DWORD *)(a2 + 4) == 825642715
    && *(_DWORD *)(a2 + 8) == -378877555
    && *(_DWORD *)(a2 + 12) == -151816439 )
  {
    v7 = (unsigned __int64)(a1 + 1);
LABEL_26:
    *a3 = (void *)(v7 & -(__int64)(a1 != 0LL));
    if ( !*v5 || *(int *)(*v5 + 12LL) < 0 )
      return 0LL;
    v6 = *v5;
    goto LABEL_29;
  }
  if ( a1[7]
    && !(unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                        (__abi_FTMWeakRefData *)((unsigned __int64)(a1 + 6) & -(__int64)(a1[7] != 0LL)),
                        (struct Platform::Guid *)a2,
                        a3) )
  {
    return 0LL;
  }
  return 2147500034LL;
}
