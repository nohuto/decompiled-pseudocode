/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@VCImmersiveWindowFactoryBase@@U?$InterfaceList@UIWeakReferenceSource@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$0A@$00@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180192468
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCImmersiveWindowFactoryBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801922A0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCImmersiveWindowFactoryBase@@VNil@Details@WRL@M.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<CImmersiveWindowFactoryBase,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::Nil>>,0,1>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // r9
  int v5; // ecx
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // r9

  if ( *a2 == -852941984
    && a2[1] == *(_DWORD *)&GUID_cd292360_2763_4085_8a9f_74b224a29175.Data2
    && a2[2] == *(_DWORD *)GUID_cd292360_2763_4085_8a9f_74b224a29175.Data4
    && a2[3] == *(_DWORD *)&GUID_cd292360_2763_4085_8a9f_74b224a29175.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  v4 = a1 + 8;
  if ( *a2 == 3
    && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
  {
    v5 = 1;
    *a3 = v4;
  }
  else
  {
    v5 = 0;
  }
  result = v5 == 0 ? 0x80004002 : 0;
  if ( !v5 )
  {
    if ( *a2 == 24
      && a2[1] == *(_DWORD *)&GUID_00000018_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000018_0000_0000_c000_000000000046.Data4
      && a2[3] == *(_DWORD *)&GUID_00000018_0000_0000_c000_000000000046.Data4[4] )
    {
      v7 = v4 + 32;
LABEL_18:
      *a3 = v7;
LABEL_26:
      result = 0LL;
      goto LABEL_33;
    }
    result = 2147500034LL;
  }
  if ( (int)result >= 0 )
    return result;
  v8 = v4 + 40;
  if ( *a2 == 1612534243
    && a2[1] == *(_DWORD *)&GUID_601d51e3_801e_49c9_bbfa_fe29a662aead.Data2
    && a2[2] == *(_DWORD *)GUID_601d51e3_801e_49c9_bbfa_fe29a662aead.Data4
    && a2[3] == *(_DWORD *)&GUID_601d51e3_801e_49c9_bbfa_fe29a662aead.Data4[4] )
  {
    *a3 = v8;
    goto LABEL_26;
  }
  if ( *a2 == 142386596
    && a2[1] == *(_DWORD *)&GUID_087ca5a4_8cfc_4264_b39d_da2bb2583a11.Data2
    && a2[2] == *(_DWORD *)GUID_087ca5a4_8cfc_4264_b39d_da2bb2583a11.Data4
    && a2[3] == *(_DWORD *)&GUID_087ca5a4_8cfc_4264_b39d_da2bb2583a11.Data4[4] )
  {
    v7 = v8 + 8;
    goto LABEL_18;
  }
  result = 2147500034LL;
LABEL_33:
  if ( (int)result >= 0 )
    return result;
  if ( *a2 == 56
    && a2[1] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
    && a2[2] == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
    && a2[3] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
  {
    *a3 = a1 + 136;
    return 0LL;
  }
  return 2147500034LL;
}
