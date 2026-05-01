/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIClosable@Foundation@Windows@@U?$InterfaceList@UIInitializeTrustedComponentForegroundControl@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BE6A0
 * Callers:
 *     ?GetExperienceManager@CortanaExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x18009BD30 (-GetExperienceManager@CortanaExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspec.c)
 *     ?QueryInterface@CortanaSharedExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BA120 (-QueryInterface@CortanaSharedExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BD4A4 (-_RegisterMessages@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIClosable@Foundation@Windows@@U?$InterfaceList@UIInitializeTrustedComponentForegroundControl@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C04E0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UICortanaExperienceManager@Experien_ea_1800C04E0.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIClosable@Foundation@Windows@@U?$InterfaceList@UIInitializeTrustedComponentForegroundControl@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0530 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UICortanaExperienceManager@Experien_ea_1800C0530.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIClosable@Foundation@Windows@@U?$InterfaceList@UIInitializeTrustedComponentForegroundControl@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0640 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UICortanaExperienceManager@Experien_ea_1800C0640.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::ICortanaExperienceManager,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::InterfaceList<IInitializeTrustedComponentForegroundControl,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi
  __int64 v5; // rcx

  v3 = 0;
  *a3 = 0LL;
  if ( (*a2
     || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
     || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
     || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && (*a2 != -1350114592
     || a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
     || a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
     || a2[3] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4]) )
  {
    if ( *a2 == -869176624
      && a2[1] == *(_DWORD *)&GUID_cc316ad0_3e56_4dcb_bf02_8c10ea8bfbbe.Data2
      && a2[2] == *(_DWORD *)GUID_cc316ad0_3e56_4dcb_bf02_8c10ea8bfbbe.Data4
      && a2[3] == *(_DWORD *)&GUID_cc316ad0_3e56_4dcb_bf02_8c10ea8bfbbe.Data4[4]
      || (a1 += 8LL, *a2 == 56)
      && a2[1] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
      && a2[2] == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
      && a2[3] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
    {
      *a3 = a1;
      v4 = 0;
      goto LABEL_32;
    }
    v5 = a1 + 8;
    if ( *a2 == 819308585
      && a2[1] == *(_DWORD *)&_uuidof__AUIDisposable_Platform__.Data2
      && a2[2] == *(_DWORD *)_uuidof__AUIDisposable_Platform__.Data4
      && a2[3] == *(_DWORD *)&_uuidof__AUIDisposable_Platform__.Data4[4] )
    {
      *a3 = v5;
    }
    else
    {
      if ( *a2 != 1609546638
        || a2[1] != *(_DWORD *)&GUID_5fefbb8e_82c3_4ec4_93a0_05c4b9fcd4cd.Data2
        || a2[2] != *(_DWORD *)GUID_5fefbb8e_82c3_4ec4_93a0_05c4b9fcd4cd.Data4
        || a2[3] != *(_DWORD *)&GUID_5fefbb8e_82c3_4ec4_93a0_05c4b9fcd4cd.Data4[4] )
      {
        v4 = -2147467262;
LABEL_31:
        if ( v4 < 0 )
          return (unsigned int)v4;
LABEL_32:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
        return (unsigned int)v4;
      }
      *a3 = v5 + 8;
    }
    v4 = 0;
    goto LABEL_31;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
