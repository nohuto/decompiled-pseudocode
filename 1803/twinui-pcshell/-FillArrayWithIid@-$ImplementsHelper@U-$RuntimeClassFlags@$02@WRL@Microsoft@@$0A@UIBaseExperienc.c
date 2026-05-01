/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIWeakReferenceSource@@UIToastCenterExperienceManager@5678@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIHolographicExperienceExtension@Holographic@678@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x180162E6C
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIToastCenterExperienceManager@5678@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIHolographicExperienceExtension@Holographic@678@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180162F80 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBas_ea_180162F80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Windows::Internal::Shell::Experience::IBaseExperienceManager,IWeakReferenceSource,Windows::Internal::Shell::Experience::IToastCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax

  v3 = *a2;
  *(GUID *)(a3 + 16LL * *a2) = GUID_1ec5d3ef_a8bf_4311_9eeb_33ba50f461fe;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 1)) = GUID_00000038_0000_0000_c000_000000000046;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 2)) = GUID_8b6ebc6f_30f2_401b_a050_9f0b7f35f35d;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 3)) = GUID_985c98a3_21f6_4585_9e13_f708cb0de4f2;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 4)) = GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 5)) = GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 6)) = GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e;
  *(GUID *)(a3 + 16LL * (unsigned int)(v3 + 7)) = GUID_8397449b_59a3_4c1d_868d_68f27513cee4;
  result = (unsigned int)(v3 + 8);
  *a2 = result;
  return result;
}
