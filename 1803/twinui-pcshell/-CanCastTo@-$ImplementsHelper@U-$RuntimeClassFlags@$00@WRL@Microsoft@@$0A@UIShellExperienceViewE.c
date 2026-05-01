/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F2C10
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180184190 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180184190.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg,IWeakReferenceSource>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  BOOL IsEqualGUID; // eax
  _QWORD *v3; // r8
  _DWORD *v4; // r9
  __int64 v5; // r10
  unsigned int v6; // edx

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_945f341f_df0f_41d1_adae_5b9dabbb2139);
  v6 = 0;
  if ( IsEqualGUID )
  {
    *v3 = v5;
    return 0LL;
  }
  else
  {
    if ( *v4 == 56
      && v4[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
      && v4[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
      && v4[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
    {
      *v3 = v5 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v6;
  }
}
