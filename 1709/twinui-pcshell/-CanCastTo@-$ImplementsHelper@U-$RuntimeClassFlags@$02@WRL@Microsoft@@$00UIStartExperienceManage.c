/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@8@UIStartSizingFrameCallback@@UIDWMStoryboardListener@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800BA144
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObjectWithSite@@UIStartExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@UIStartSizingFrameCallback@@UIDWMStoryboardListener@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B9650 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCWRLObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::Experience::IStartExperienceManager,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IStartSizingFrameCallback,IDWMStoryboardListener>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 == -1026420319
    && a2[1] == *(_DWORD *)&GUID_c2d211a1_a6d4_49b5_9704_d74cb4dff1ee.Data2
    && a2[2] == *(_DWORD *)GUID_c2d211a1_a6d4_49b5_9704_d74cb4dff1ee.Data4
    && a2[3] == *(_DWORD *)&GUID_c2d211a1_a6d4_49b5_9704_d74cb4dff1ee.Data4[4]
    || (a1 += 8LL, *a2 == -189734543)
    && a2[1] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data2
    && a2[2] == *(_DWORD *)GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4
    && a2[3] == *(_DWORD *)&GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0.Data4[4]
    || (a1 += 8LL, *a2 == 819308585)
    && a2[1] == *(_DWORD *)&_uuidof__AUIDisposable_Platform__.Data2
    && a2[2] == *(_DWORD *)_uuidof__AUIDisposable_Platform__.Data4
    && a2[3] == *(_DWORD *)&_uuidof__AUIDisposable_Platform__.Data4[4]
    || (a1 += 8LL, *a2 == 1846935068)
    && a2[1] == *(_DWORD *)&GUID_6e15fe1c_6836_6f1a_5790_76387caaaaf5.Data2
    && a2[2] == *(_DWORD *)GUID_6e15fe1c_6836_6f1a_5790_76387caaaaf5.Data4
    && a2[3] == *(_DWORD *)&GUID_6e15fe1c_6836_6f1a_5790_76387caaaaf5.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( *a2 == -1385320689
    && a2[1] == *(_DWORD *)&GUID_ad6daf0f_d2b6_4728_8fb8_30a1d1e2142e.Data2
    && a2[2] == *(_DWORD *)GUID_ad6daf0f_d2b6_4728_8fb8_30a1d1e2142e.Data4
    && a2[3] == *(_DWORD *)&GUID_ad6daf0f_d2b6_4728_8fb8_30a1d1e2142e.Data4[4] )
  {
    *a3 = a1 + 8;
    return 0LL;
  }
  return 2147500034LL;
}
