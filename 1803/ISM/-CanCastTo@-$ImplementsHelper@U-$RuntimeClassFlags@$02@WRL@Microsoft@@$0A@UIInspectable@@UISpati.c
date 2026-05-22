/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@UISpatialInteractionSourceCollection@SpatialInteractions@Internal@Windows@@UIWeakReferenceSource@@UISpatialInteractionSourceDeviceCollectionPrivate@678@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800AB590
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpatialInteractionSourceCollection@SpatialInteractions@Internal@Windows@@UISpatialInteractionSourceDeviceCollectionPrivate@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AA060 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpatialIn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollection,IWeakReferenceSource,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionPrivate,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 != -1350114592
    || a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    || a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    || a2[3] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
    a1 += 8LL;
    if ( *a2 != 7707489
      || a2[1] != *(_DWORD *)&GUID_00759b61_908b_429d_b44f_bab28638e1a4.Data2
      || a2[2] != *(_DWORD *)GUID_00759b61_908b_429d_b44f_bab28638e1a4.Data4
      || a2[3] != *(_DWORD *)&GUID_00759b61_908b_429d_b44f_bab28638e1a4.Data4[4] )
    {
      a1 += 8LL;
      if ( *a2 != 56
        || a2[1] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
        || a2[2] != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
        || a2[3] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
      {
        a1 += 8LL;
        if ( *a2 != -442307146
          || a2[1] != *(_DWORD *)&GUID_e5a2edb6_da79_47c5_b6a8_8869c36f0f6f.Data2
          || a2[2] != *(_DWORD *)GUID_e5a2edb6_da79_47c5_b6a8_8869c36f0f6f.Data4
          || a2[3] != *(_DWORD *)&GUID_e5a2edb6_da79_47c5_b6a8_8869c36f0f6f.Data4[4] )
        {
          a1 += 8LL;
          if ( (*a2 != -1796592748
             || a2[1] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
             || a2[2] != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
             || a2[3] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4])
            && (*a2 != 3
             || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
             || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
             || a2[3] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4]) )
          {
            return 2147500034LL;
          }
        }
      }
    }
  }
  *a3 = a1;
  return 0LL;
}
