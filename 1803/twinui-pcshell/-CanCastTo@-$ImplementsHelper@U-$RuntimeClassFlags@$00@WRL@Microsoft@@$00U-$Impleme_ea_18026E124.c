/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$ImplementsMarker@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIIconLoaderInternal@@@WRL@Microsoft@@@Details@23@UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18026E124
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIIconLoaderInternal@@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18026EDB0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_18026EDB0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IIconLoaderInternal>>,IWeakReferenceSource>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  BOOL IsEqualGUID; // eax
  _QWORD *v3; // r8
  _DWORD *v4; // r10
  __int64 v5; // r11
  unsigned int v6; // r9d

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_ee3a7544_b067_4a8c_8ed8_da1d4e9bfd02);
  v6 = 0;
  if ( IsEqualGUID )
  {
    *v3 = v5;
  }
  else if ( *v4 == 56
         && v4[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
         && v4[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
         && v4[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
  {
    *v3 = v5 + 16;
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v6;
}
