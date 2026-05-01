/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@VNil@Details@23@VCImmersiveWindowFactoryBase@@UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801E0650
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveWindowFactoryBase@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801E0490 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1801E0490.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Microsoft::WRL::Details::Nil,CImmersiveWindowFactoryBase,IWeakReferenceSource>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // r9d
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax

  v3 = 0;
  if ( *a2 == -852941984
    && a2[1] == *(_DWORD *)&GUID_cd292360_2763_4085_8a9f_74b224a29175.Data2
    && a2[2] == *(_DWORD *)GUID_cd292360_2763_4085_8a9f_74b224a29175.Data4
    && a2[3] == *(_DWORD *)&GUID_cd292360_2763_4085_8a9f_74b224a29175.Data4[4] )
  {
    *a3 = a1;
    return v3;
  }
  v5 = a1 + 8;
  if ( *a2 == 3
    && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = v5;
LABEL_11:
    v6 = 0;
    goto LABEL_18;
  }
  if ( *a2 == 24
    && a2[1] == *(_DWORD *)&GUID_00000018_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000018_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000018_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = v5 + 48;
    goto LABEL_11;
  }
  v6 = -2147467262;
LABEL_18:
  if ( v6 >= 0 )
    return v3;
  v7 = v5 + 80;
  if ( *a2 == 1612534243
    && a2[1] == *(_DWORD *)&GUID_601d51e3_801e_49c9_bbfa_fe29a662aead.Data2
    && a2[2] == *(_DWORD *)GUID_601d51e3_801e_49c9_bbfa_fe29a662aead.Data4
    && a2[3] == *(_DWORD *)&GUID_601d51e3_801e_49c9_bbfa_fe29a662aead.Data4[4] )
  {
    *a3 = v7;
LABEL_24:
    v8 = 0;
    goto LABEL_31;
  }
  if ( *a2 == 142386596
    && a2[1] == *(_DWORD *)&GUID_087ca5a4_8cfc_4264_b39d_da2bb2583a11.Data2
    && a2[2] == *(_DWORD *)GUID_087ca5a4_8cfc_4264_b39d_da2bb2583a11.Data4
    && a2[3] == *(_DWORD *)&GUID_087ca5a4_8cfc_4264_b39d_da2bb2583a11.Data4[4] )
  {
    *a3 = v7 + 8;
    goto LABEL_24;
  }
  v8 = -2147467262;
LABEL_31:
  if ( v8 < 0 )
  {
    if ( *a2 == 56
      && a2[1] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
      && a2[2] == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
      && a2[3] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
    {
      *a3 = a1 + 192;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
  }
  return v3;
}
